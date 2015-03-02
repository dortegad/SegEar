#ifndef SEGEARWINDOW_H
#define SEGEARWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/objdetect/objdetect.hpp"

namespace Ui {
class SegEarWindow;
}

class SegEarWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit SegEarWindow(QWidget *parent = 0);
    ~SegEarWindow();
    
private slots:
    void on_pBDirImagenes_clicked();

    void on_pBAntImagen_clicked();

    void on_pBSigImagen_clicked();

    void on_pBDetectar_clicked();

    void on_pBGreatTruthFile_clicked();

private:
    Ui::SegEarWindow *ui;
    QMessageBox msgBox;

    std::vector <std::string > ficherosImagen;
    int fichActual;
    cv::Mat imgInFrame;

    std::map <std::string, cv::Rect > zonasGT;


    cv::CascadeClassifier earClassifier;

    void detectAndDisplay(cv::Mat frame);
    void leerFicheros(const std::string &nombreDir, std::vector <std::string > &vectorFicheros);
    void muestraImagen(QLabel *etiquetaPresentar, cv::Mat &img);
    void muestraImagen();
    void estadoBotones();
};

#endif // SEGEARWINDOW_H
