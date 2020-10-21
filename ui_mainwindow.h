/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionOn;
    QAction *actionOff;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *l_Figure;
    QComboBox *cB_Figure;
    QSpacerItem *verticalSpacer_8;
    QLabel *l_Side;
    QComboBox *cB_Side;
    QSpacerItem *verticalSpacer_10;
    QLabel *l_Vertical;
    QComboBox *cB_Vertical;
    QSpacerItem *verticalSpacer_6;
    QLabel *l_Horizontal;
    QComboBox *cB_Hotizontal;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *cB_IsMovable;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pB_ShowMove;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pB_MovingFigures;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pB_Exit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *l_8;
    QLabel *l_7;
    QLabel *l_6;
    QLabel *l_5;
    QLabel *l_4;
    QLabel *l_3;
    QLabel *l_2;
    QLabel *l_1;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *l_A;
    QLabel *l_B;
    QLabel *l_C;
    QLabel *l_D;
    QLabel *l_E;
    QLabel *l_F;
    QLabel *l_G;
    QLabel *label_8;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSound;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1092, 921);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOn = new QAction(MainWindow);
        actionOn->setObjectName(QString::fromUtf8("actionOn"));
        actionOn->setCheckable(true);
        actionOn->setChecked(true);
        actionOff = new QAction(MainWindow);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        actionOff->setCheckable(true);
        actionOff->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        l_Figure = new QLabel(centralwidget);
        l_Figure->setObjectName(QString::fromUtf8("l_Figure"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_Figure->sizePolicy().hasHeightForWidth());
        l_Figure->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(l_Figure);

        cB_Figure = new QComboBox(centralwidget);
        cB_Figure->addItem(QString());
        cB_Figure->addItem(QString());
        cB_Figure->addItem(QString());
        cB_Figure->addItem(QString());
        cB_Figure->addItem(QString());
        cB_Figure->addItem(QString());
        cB_Figure->setObjectName(QString::fromUtf8("cB_Figure"));

        verticalLayout->addWidget(cB_Figure);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        l_Side = new QLabel(centralwidget);
        l_Side->setObjectName(QString::fromUtf8("l_Side"));
        sizePolicy.setHeightForWidth(l_Side->sizePolicy().hasHeightForWidth());
        l_Side->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(l_Side);

        cB_Side = new QComboBox(centralwidget);
        cB_Side->addItem(QString());
        cB_Side->addItem(QString());
        cB_Side->setObjectName(QString::fromUtf8("cB_Side"));

        verticalLayout->addWidget(cB_Side);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        l_Vertical = new QLabel(centralwidget);
        l_Vertical->setObjectName(QString::fromUtf8("l_Vertical"));
        sizePolicy.setHeightForWidth(l_Vertical->sizePolicy().hasHeightForWidth());
        l_Vertical->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(l_Vertical);

        cB_Vertical = new QComboBox(centralwidget);
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->addItem(QString());
        cB_Vertical->setObjectName(QString::fromUtf8("cB_Vertical"));

        verticalLayout->addWidget(cB_Vertical);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        l_Horizontal = new QLabel(centralwidget);
        l_Horizontal->setObjectName(QString::fromUtf8("l_Horizontal"));
        sizePolicy.setHeightForWidth(l_Horizontal->sizePolicy().hasHeightForWidth());
        l_Horizontal->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(l_Horizontal);

        cB_Hotizontal = new QComboBox(centralwidget);
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->addItem(QString());
        cB_Hotizontal->setObjectName(QString::fromUtf8("cB_Hotizontal"));

        verticalLayout->addWidget(cB_Hotizontal);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        cB_IsMovable = new QCheckBox(centralwidget);
        cB_IsMovable->setObjectName(QString::fromUtf8("cB_IsMovable"));
        sizePolicy.setHeightForWidth(cB_IsMovable->sizePolicy().hasHeightForWidth());
        cB_IsMovable->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(cB_IsMovable);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pB_ShowMove = new QPushButton(centralwidget);
        pB_ShowMove->setObjectName(QString::fromUtf8("pB_ShowMove"));

        verticalLayout->addWidget(pB_ShowMove);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pB_MovingFigures = new QPushButton(centralwidget);
        pB_MovingFigures->setObjectName(QString::fromUtf8("pB_MovingFigures"));

        verticalLayout->addWidget(pB_MovingFigures);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pB_Exit = new QPushButton(centralwidget);
        pB_Exit->setObjectName(QString::fromUtf8("pB_Exit"));

        verticalLayout->addWidget(pB_Exit);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalWidget_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget_2->sizePolicy().hasHeightForWidth());
        verticalWidget_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        l_8 = new QLabel(verticalWidget_2);
        l_8->setObjectName(QString::fromUtf8("l_8"));

        verticalLayout_2->addWidget(l_8);

        l_7 = new QLabel(verticalWidget_2);
        l_7->setObjectName(QString::fromUtf8("l_7"));

        verticalLayout_2->addWidget(l_7);

        l_6 = new QLabel(verticalWidget_2);
        l_6->setObjectName(QString::fromUtf8("l_6"));

        verticalLayout_2->addWidget(l_6);

        l_5 = new QLabel(verticalWidget_2);
        l_5->setObjectName(QString::fromUtf8("l_5"));

        verticalLayout_2->addWidget(l_5);

        l_4 = new QLabel(verticalWidget_2);
        l_4->setObjectName(QString::fromUtf8("l_4"));

        verticalLayout_2->addWidget(l_4);

        l_3 = new QLabel(verticalWidget_2);
        l_3->setObjectName(QString::fromUtf8("l_3"));

        verticalLayout_2->addWidget(l_3);

        l_2 = new QLabel(verticalWidget_2);
        l_2->setObjectName(QString::fromUtf8("l_2"));

        verticalLayout_2->addWidget(l_2);

        l_1 = new QLabel(verticalWidget_2);
        l_1->setObjectName(QString::fromUtf8("l_1"));
        l_1->setEnabled(true);

        verticalLayout_2->addWidget(l_1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(verticalWidget_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_A = new QLabel(centralwidget);
        l_A->setObjectName(QString::fromUtf8("l_A"));
        sizePolicy1.setHeightForWidth(l_A->sizePolicy().hasHeightForWidth());
        l_A->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(l_A);

        l_B = new QLabel(centralwidget);
        l_B->setObjectName(QString::fromUtf8("l_B"));

        horizontalLayout->addWidget(l_B);

        l_C = new QLabel(centralwidget);
        l_C->setObjectName(QString::fromUtf8("l_C"));

        horizontalLayout->addWidget(l_C);

        l_D = new QLabel(centralwidget);
        l_D->setObjectName(QString::fromUtf8("l_D"));

        horizontalLayout->addWidget(l_D);

        l_E = new QLabel(centralwidget);
        l_E->setObjectName(QString::fromUtf8("l_E"));

        horizontalLayout->addWidget(l_E);

        l_F = new QLabel(centralwidget);
        l_F->setObjectName(QString::fromUtf8("l_F"));

        horizontalLayout->addWidget(l_F);

        l_G = new QLabel(centralwidget);
        l_G->setObjectName(QString::fromUtf8("l_G"));

        horizontalLayout->addWidget(l_G);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1092, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSound = new QMenu(menuFile);
        menuSound->setObjectName(QString::fromUtf8("menuSound"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAbout);
        menuFile->addAction(menuSound->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuSound->addAction(actionOn);
        menuSound->addAction(actionOff);

        retranslateUi(MainWindow);
        QObject::connect(pB_Exit, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(cB_Hotizontal, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(ChangeHorizontal(int)));
        QObject::connect(cB_Vertical, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(ChangeVertical(int)));
        QObject::connect(cB_Figure, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(ChangeFigure(int)));
        QObject::connect(cB_Side, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(ChangeSide(int)));
        QObject::connect(cB_IsMovable, SIGNAL(clicked(bool)), MainWindow, SLOT(ChangeMove(bool)));
        QObject::connect(pB_ShowMove, SIGNAL(clicked()), MainWindow, SLOT(ShowMove()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(pB_MovingFigures, SIGNAL(clicked()), MainWindow, SLOT(MovingFigures()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(About()));
        QObject::connect(actionOn, SIGNAL(triggered()), MainWindow, SLOT(OnSound()));
        QObject::connect(actionOff, SIGNAL(triggered()), MainWindow, SLOT(OffSound()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        actionOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        l_Figure->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\244\320\230\320\223\320\243\320\240\320\220</span></p></body></html>", nullptr));
        cB_Figure->setItemText(0, QCoreApplication::translate("MainWindow", "KING", nullptr));
        cB_Figure->setItemText(1, QCoreApplication::translate("MainWindow", "ROOK", nullptr));
        cB_Figure->setItemText(2, QCoreApplication::translate("MainWindow", "BISHOP", nullptr));
        cB_Figure->setItemText(3, QCoreApplication::translate("MainWindow", "QUEEN", nullptr));
        cB_Figure->setItemText(4, QCoreApplication::translate("MainWindow", "PAWN", nullptr));
        cB_Figure->setItemText(5, QCoreApplication::translate("MainWindow", "KNIGHT", nullptr));

        l_Side->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\241\320\242\320\236\320\240\320\236\320\235\320\220</span></p></body></html>", nullptr));
        cB_Side->setItemText(0, QCoreApplication::translate("MainWindow", "WHITE", nullptr));
        cB_Side->setItemText(1, QCoreApplication::translate("MainWindow", "BLACK", nullptr));

        l_Vertical->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\222\320\225\320\240\320\242\320\230\320\232\320\220\320\233\320\254</span></p></body></html>", nullptr));
        cB_Vertical->setItemText(0, QCoreApplication::translate("MainWindow", "A", nullptr));
        cB_Vertical->setItemText(1, QCoreApplication::translate("MainWindow", "B", nullptr));
        cB_Vertical->setItemText(2, QCoreApplication::translate("MainWindow", "C", nullptr));
        cB_Vertical->setItemText(3, QCoreApplication::translate("MainWindow", "D", nullptr));
        cB_Vertical->setItemText(4, QCoreApplication::translate("MainWindow", "E", nullptr));
        cB_Vertical->setItemText(5, QCoreApplication::translate("MainWindow", "F", nullptr));
        cB_Vertical->setItemText(6, QCoreApplication::translate("MainWindow", "G", nullptr));
        cB_Vertical->setItemText(7, QCoreApplication::translate("MainWindow", "H", nullptr));

        l_Horizontal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\223\320\236\320\240\320\230\320\227\320\236\320\235\320\242\320\220\320\233\320\254</span></p></body></html>", nullptr));
        cB_Hotizontal->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        cB_Hotizontal->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        cB_Hotizontal->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        cB_Hotizontal->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        cB_Hotizontal->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        cB_Hotizontal->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        cB_Hotizontal->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        cB_Hotizontal->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));

        cB_IsMovable->setText(QCoreApplication::translate("MainWindow", "    IS MOVABLE", nullptr));
        pB_ShowMove->setText(QCoreApplication::translate("MainWindow", "SHOW MOVE", nullptr));
        pB_MovingFigures->setText(QCoreApplication::translate("MainWindow", "MOVING FIGURES", nullptr));
        pB_Exit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        l_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">8</span></p></body></html>", nullptr));
        l_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">7</span></p></body></html>", nullptr));
        l_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">6</span></p></body></html>", nullptr));
        l_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">5</span></p></body></html>", nullptr));
        l_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">4</span></p></body></html>", nullptr));
        l_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">3</span></p></body></html>", nullptr));
        l_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">2</span></p></body></html>", nullptr));
        l_1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">1</span></p></body></html>", nullptr));
        l_A->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">A</span></p></body></html>", nullptr));
        l_B->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">B</span></p></body></html>", nullptr));
        l_C->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">C</span></p></body></html>", nullptr));
        l_D->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">D</span></p></body></html>", nullptr));
        l_E->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">E</span></p></body></html>", nullptr));
        l_F->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">F</span></p></body></html>", nullptr));
        l_G->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">G</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">H</span></p></body></html>", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSound->setTitle(QCoreApplication::translate("MainWindow", "Sound", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
