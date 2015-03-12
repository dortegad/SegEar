#include "segearwindow.h"
#include "ui_segearwindow.h"

#include "string"
#include "sstream"
#include "fstream"
#include <dirent.h>
#include <qfiledialog.h>

//---------------------------------------------------------------------------------------------------------------
SegEarWindow::SegEarWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SegEarWindow)
{
    ui->setupUi(this);

    std::string ear_carcade_file = "/home/dortega/BIOMETRIA/Practicas/prac4/SegEar/debug/cascade.xml";

    if( !earClassifier.load(ear_carcade_file ) )
    {
        std::stringstream mensaje;
        mensaje << "Imposible leer " << ear_carcade_file;
        msgBox.setText(mensaje.str().c_str());
        msgBox.exec();
        return;
    }
}

//---------------------------------------------------------------------------------------------------------------
SegEarWindow::~SegEarWindow()
{
    delete ui;
}

//---------------------------------------------------------------------------------------------------------------
void SegEarWindow::detectAndDisplay( cv::Mat frame )
{
    std::vector<cv::Rect> ears;
    cv::Mat frame_gray;

    if (frame.channels() != 1)
        cv::cvtColor( frame, frame_gray, CV_BGR2GRAY );
    else
        frame_gray = frame;
    //cv::equalizeHist( frame_gray, frame_gray );

    earClassifier.detectMultiScale( frame_gray, ears, 1.1, 2, 0|CV_HAAR_SCALE_IMAGE, cv::Size(48, 24) );

    for( size_t i = 0; i < ears.size(); i++ )
    {
        cv::rectangle(frame,ears[i],cv::Scalar( 255, 0, 255 ));
    }
}

//-------------------------------------------------------------------------------------------------
void SegEarWindow::leerFicheros(const std::string &nombreDir, std::vector <std::string > &vectorFicheros)
{
    DIR *dir;
    struct dirent *ent;

    dir = opendir (nombreDir.c_str());
    if (dir == NULL)
    {
        msgBox.setText("Error al abrir directorio.");
        msgBox.exec();
    }

    vectorFicheros.clear();
    while ((ent = readdir (dir)) != NULL)
    {
        if ( (strcmp(ent->d_name, ".")!=0) && (strcmp(ent->d_name, "..")!=0) )
        {
            std::stringstream nombreFich;
            nombreFich << nombreDir << "/" << ent->d_name;
            vectorFicheros.push_back(nombreFich.str());
        }
    }
    closedir (dir);
}

//---------------------------------------------------------------------------------------------------------------
void SegEarWindow::on_pBDirImagenes_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Directorio imagenes"),
                                                         ui->lEImagenes->text(),
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
    if (dirName == "")
        return;


    ui->lEImagenes->setText(dirName);

    leerFicheros(dirName.toStdString(),this->ficherosImagen);
    this->fichActual = 0;
    muestraImagen();
    estadoBotones();
}

//---------------------------------------------------------------------------------------------------------------
void SegEarWindow::on_pBAntImagen_clicked()
{
    if (this->fichActual > 0)
    {
        this->fichActual--;
        estadoBotones();
        this->muestraImagen();
    }
}

//---------------------------------------------------------------------------------------------------------------
void SegEarWindow::on_pBSigImagen_clicked()
{
    if (this->fichActual+1 < this->ficherosImagen.size())
    {
        this->fichActual++;
        estadoBotones();
        this->muestraImagen();
    }

}

//-------------------------------------------------------------------------------------------
void SegEarWindow::muestraImagen(QLabel *etiquetaPresentar, cv::Mat &img)
{
    imgInFrame = img;
    cv::Mat imgMostrar;
    if (img.channels() == 1)
        cv::cvtColor(img,imgMostrar,CV_GRAY2RGB);
    else
        imgMostrar = img.clone();
    QImage imagenQT = QImage((const unsigned char *)imgMostrar.data, imgMostrar.cols, imgMostrar.rows, imgMostrar.step, QImage::Format_RGB888);
    etiquetaPresentar->setScaledContents(true);
    etiquetaPresentar->setPixmap(QPixmap::fromImage(imagenQT));
    etiquetaPresentar->setGeometry(0,0,imagenQT.width(),imagenQT.height());
}


//-------------------------------------------------------------------------------------------
void SegEarWindow::muestraImagen()
{
    std::string nombreFichero = this->ficherosImagen[this->fichActual];
    cv::Mat imagen = cv::imread(nombreFichero);
    if (this->zonasGT.find(nombreFichero) != this->zonasGT.end())
    {
        cv::rectangle(imagen,this->zonasGT[nombreFichero],cv::Scalar(255,0,0));
    }
    muestraImagen(this->ui->LImagen,imagen);
   // ui->pBProcesar->setEnabled(true);
}

//-------------------------------------------------------------------------------------------
void SegEarWindow::estadoBotones()
{
    ui->pBSigImagen->setEnabled(false);
    ui->pBAntImagen->setEnabled(false);

    if (this->fichActual > 0)
        ui->pBAntImagen->setEnabled(true);

    if (this->fichActual+1 < this->ficherosImagen.size())
        ui->pBSigImagen->setEnabled(true);
}

//-------------------------------------------------------------------------------------------
void SegEarWindow::on_pBDetectar_clicked()
{
   std::string nombreFichero = this->ficherosImagen[this->fichActual];
   cv::Mat imagen = cv::imread(nombreFichero);
   this->detectAndDisplay(imagen);
   if (this->zonasGT.find(nombreFichero) != this->zonasGT.end())
   {
       cv::rectangle(imagen,this->zonasGT[nombreFichero],cv::Scalar(255,0,0));
   }
   muestraImagen(this->ui->LImagen,imagen);
}

//-------------------------------------------------------------------------------------------
void SegEarWindow::on_pBGreatTruthFile_clicked()
{
    QString nombreFileGreatTruth = QFileDialog:: QFileDialog::getOpenFileName(this, tr("Great truth file"),
                                                                         "/GreatTruth.txt",
                                                                         tr("*.txt"));
    if (nombreFileGreatTruth == "")
        return;

    std::ifstream fileGT;
    fileGT.open(nombreFileGreatTruth.toStdString().c_str());
    if (fileGT.is_open())
    {
        std::string nombreImg;
        int x0,y0,x1,y1;
        while ((fileGT >> nombreImg) &&
               (fileGT >> x0) &&
               (fileGT >> y0) &&
               (fileGT >> x1) &&
               (fileGT >> y1))
        {
            this->zonasGT[nombreImg] = cv::Rect(x0,y0,x1-x0,y1-y0);
        }
        fileGT.close();
    }
}
