/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Oct 13 16:17:50 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qtgui/freqctrl.h"
#include "qtgui/meter.h"
#include "qtgui/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionDSP;
    QAction *actionAFSK1200;
    QAction *actionSched;
    QAction *actionIqRec;
    QAction *actionBPSK1000;
    QAction *actionIoConfig;
    QAction *actionUserGroup;
    QAction *actionFullScreen;
    QAction *actionLoadSettings;
    QAction *actionSaveSettings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    CFreqCtrl *freqCtrl;
    CMeter *sMeter;
    QSpacerItem *horizontalSpacer;
    CPlotter *plotter;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_View;
    QMenu *menu_Help;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/scope.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionDSP = new QAction(MainWindow);
        actionDSP->setObjectName(QString::fromUtf8("actionDSP"));
        actionDSP->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/power-off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDSP->setIcon(icon1);
        actionAFSK1200 = new QAction(MainWindow);
        actionAFSK1200->setObjectName(QString::fromUtf8("actionAFSK1200"));
        actionSched = new QAction(MainWindow);
        actionSched->setObjectName(QString::fromUtf8("actionSched"));
        actionSched->setCheckable(true);
        actionSched->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/clock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSched->setIcon(icon2);
        actionIqRec = new QAction(MainWindow);
        actionIqRec->setObjectName(QString::fromUtf8("actionIqRec"));
        actionIqRec->setCheckable(true);
        actionIqRec->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIqRec->setIcon(icon3);
        actionBPSK1000 = new QAction(MainWindow);
        actionBPSK1000->setObjectName(QString::fromUtf8("actionBPSK1000"));
        actionBPSK1000->setEnabled(false);
        actionIoConfig = new QAction(MainWindow);
        actionIoConfig->setObjectName(QString::fromUtf8("actionIoConfig"));
        actionIoConfig->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIoConfig->setIcon(icon4);
        actionIoConfig->setVisible(true);
        actionUserGroup = new QAction(MainWindow);
        actionUserGroup->setObjectName(QString::fromUtf8("actionUserGroup"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUserGroup->setIcon(icon5);
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/fullscreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon6);
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSettings->setIcon(icon7);
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/floppy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon8);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 2, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        freqCtrl = new CFreqCtrl(centralWidget);
        freqCtrl->setObjectName(QString::fromUtf8("freqCtrl"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(freqCtrl->sizePolicy().hasHeightForWidth());
        freqCtrl->setSizePolicy(sizePolicy);
        freqCtrl->setMinimumSize(QSize(371, 41));
        freqCtrl->setFrameShape(QFrame::StyledPanel);
        freqCtrl->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(freqCtrl);

        sMeter = new CMeter(centralWidget);
        sMeter->setObjectName(QString::fromUtf8("sMeter"));
        sizePolicy.setHeightForWidth(sMeter->sizePolicy().hasHeightForWidth());
        sMeter->setSizePolicy(sizePolicy);
        sMeter->setMinimumSize(QSize(171, 41));
        sMeter->setFrameShape(QFrame::StyledPanel);
        sMeter->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(sMeter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        plotter = new CPlotter(centralWidget);
        plotter->setObjectName(QString::fromUtf8("plotter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plotter->sizePolicy().hasHeightForWidth());
        plotter->setSizePolicy(sizePolicy1);
        plotter->setFrameShape(QFrame::StyledPanel);
        plotter->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(plotter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionDSP);
        menu_File->addSeparator();
        menu_File->addAction(actionIoConfig);
        menu_File->addAction(actionLoadSettings);
        menu_File->addAction(actionSaveSettings);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Help->addAction(actionUserGroup);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionAboutQt);
        menuTools->addAction(actionAFSK1200);
        mainToolBar->addAction(actionDSP);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionIoConfig);
        mainToolBar->addAction(actionLoadSettings);
        mainToolBar->addAction(actionSaveSettings);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFullScreen);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(activated()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "gqrx", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Quit application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About Gqrx", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "Information about Gqrx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "About the Qt toolkit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDSP->setText(QApplication::translate("MainWindow", "Start DSP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDSP->setToolTip(QApplication::translate("MainWindow", "Start DSP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDSP->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionAFSK1200->setText(QApplication::translate("MainWindow", "AFSK1200 Decoder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAFSK1200->setToolTip(QApplication::translate("MainWindow", "Start AFSK1200 decoder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSched->setText(QApplication::translate("MainWindow", "Scheduler", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSched->setToolTip(QApplication::translate("MainWindow", "Schedule recordings and other actions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIqRec->setText(QApplication::translate("MainWindow", "Record I/Q", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIqRec->setToolTip(QApplication::translate("MainWindow", "Record the raw I/Q samples to a binary file (will be large)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIqRec->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionBPSK1000->setText(QApplication::translate("MainWindow", "BPSK1000 Decoder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBPSK1000->setToolTip(QApplication::translate("MainWindow", "Start BPSK1000 decoder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIoConfig->setText(QApplication::translate("MainWindow", "I/O Devices", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIoConfig->setToolTip(QApplication::translate("MainWindow", "Configure I/O devices", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUserGroup->setText(QApplication::translate("MainWindow", "Gqrx user group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUserGroup->setToolTip(QApplication::translate("MainWindow", "Discussion group for Gqrx users", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFullScreen->setText(QApplication::translate("MainWindow", "Full screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFullScreen->setToolTip(QApplication::translate("MainWindow", "Toggle full screen mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFullScreen->setShortcut(QApplication::translate("MainWindow", "F11", 0, QApplication::UnicodeUTF8));
        actionLoadSettings->setText(QApplication::translate("MainWindow", "Load settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadSettings->setToolTip(QApplication::translate("MainWindow", "Load previously stored configuration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoadSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSaveSettings->setText(QApplication::translate("MainWindow", "Save settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveSettings->setToolTip(QApplication::translate("MainWindow", "Save current configuration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Data", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Main toolbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
