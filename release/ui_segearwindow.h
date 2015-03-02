/********************************************************************************
** Form generated from reading UI file 'segearwindow.ui'
**
** Created: Mon Mar 2 20:59:50 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGEARWINDOW_H
#define UI_SEGEARWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SegEarWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout;
    QLabel *LPatrones;
    QLineEdit *lEImagenes;
    QPushButton *pBDirImagenes;
    QPushButton *pBAntImagen;
    QPushButton *pBSigImagen;
    QLabel *LImagen;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LGreatTruth;
    QLineEdit *lEGreatTruthFile;
    QPushButton *pBGreatTruthFile;
    QPushButton *pBDetectar;

    void setupUi(QMainWindow *SegEarWindow)
    {
        if (SegEarWindow->objectName().isEmpty())
            SegEarWindow->setObjectName(QString::fromUtf8("SegEarWindow"));
        SegEarWindow->resize(680, 604);
        centralWidget = new QWidget(SegEarWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMaximumSize(QSize(16777215, 40));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_8);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LPatrones = new QLabel(frame_8);
        LPatrones->setObjectName(QString::fromUtf8("LPatrones"));
        LPatrones->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(LPatrones);

        lEImagenes = new QLineEdit(frame_8);
        lEImagenes->setObjectName(QString::fromUtf8("lEImagenes"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lEImagenes->sizePolicy().hasHeightForWidth());
        lEImagenes->setSizePolicy(sizePolicy);
        lEImagenes->setMinimumSize(QSize(0, 0));
        lEImagenes->setMaximumSize(QSize(16777215, 16777215));
        lEImagenes->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(lEImagenes);

        pBDirImagenes = new QPushButton(frame_8);
        pBDirImagenes->setObjectName(QString::fromUtf8("pBDirImagenes"));
        pBDirImagenes->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBDirImagenes);

        pBAntImagen = new QPushButton(frame_8);
        pBAntImagen->setObjectName(QString::fromUtf8("pBAntImagen"));
        pBAntImagen->setEnabled(false);
        pBAntImagen->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBAntImagen);

        pBSigImagen = new QPushButton(frame_8);
        pBSigImagen->setObjectName(QString::fromUtf8("pBSigImagen"));
        pBSigImagen->setEnabled(false);
        pBSigImagen->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBSigImagen);


        verticalLayout->addWidget(frame_8);

        LImagen = new QLabel(frame);
        LImagen->setObjectName(QString::fromUtf8("LImagen"));
        LImagen->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        verticalLayout->addWidget(LImagen);


        verticalLayout_3->addWidget(frame);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMaximumSize(QSize(16777215, 40));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_9);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LGreatTruth = new QLabel(frame_9);
        LGreatTruth->setObjectName(QString::fromUtf8("LGreatTruth"));
        LGreatTruth->setMinimumSize(QSize(100, 0));
        LGreatTruth->setMargin(10);

        horizontalLayout_2->addWidget(LGreatTruth);

        lEGreatTruthFile = new QLineEdit(frame_9);
        lEGreatTruthFile->setObjectName(QString::fromUtf8("lEGreatTruthFile"));
        sizePolicy.setHeightForWidth(lEGreatTruthFile->sizePolicy().hasHeightForWidth());
        lEGreatTruthFile->setSizePolicy(sizePolicy);
        lEGreatTruthFile->setMinimumSize(QSize(0, 0));
        lEGreatTruthFile->setMaximumSize(QSize(16777215, 16777215));
        lEGreatTruthFile->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(lEGreatTruthFile);

        pBGreatTruthFile = new QPushButton(frame_9);
        pBGreatTruthFile->setObjectName(QString::fromUtf8("pBGreatTruthFile"));
        pBGreatTruthFile->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(pBGreatTruthFile);


        verticalLayout_2->addWidget(frame_9);

        pBDetectar = new QPushButton(frame_2);
        pBDetectar->setObjectName(QString::fromUtf8("pBDetectar"));

        verticalLayout_2->addWidget(pBDetectar);


        verticalLayout_3->addWidget(frame_2);

        SegEarWindow->setCentralWidget(centralWidget);

        retranslateUi(SegEarWindow);

        QMetaObject::connectSlotsByName(SegEarWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SegEarWindow)
    {
        SegEarWindow->setWindowTitle(QApplication::translate("SegEarWindow", "SegEarWindow", 0, QApplication::UnicodeUTF8));
        LPatrones->setText(QApplication::translate("SegEarWindow", " Imagenes", 0, QApplication::UnicodeUTF8));
        lEImagenes->setText(QString());
        pBDirImagenes->setText(QApplication::translate("SegEarWindow", "...", 0, QApplication::UnicodeUTF8));
        pBAntImagen->setText(QApplication::translate("SegEarWindow", "<", 0, QApplication::UnicodeUTF8));
        pBSigImagen->setText(QApplication::translate("SegEarWindow", ">", 0, QApplication::UnicodeUTF8));
        LImagen->setText(QString());
        LGreatTruth->setText(QApplication::translate("SegEarWindow", "Great Truth", 0, QApplication::UnicodeUTF8));
        lEGreatTruthFile->setText(QString());
        pBGreatTruthFile->setText(QApplication::translate("SegEarWindow", "...", 0, QApplication::UnicodeUTF8));
        pBDetectar->setText(QApplication::translate("SegEarWindow", "Detectar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SegEarWindow: public Ui_SegEarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGEARWINDOW_H
