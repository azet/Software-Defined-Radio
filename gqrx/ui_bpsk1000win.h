/********************************************************************************
** Form generated from reading UI file 'bpsk1000win.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BPSK1000WIN_H
#define UI_BPSK1000WIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bpsk1000Win
{
public:
    QAction *actionClear;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionInfo;
    QAction *actionOpen;
    QAction *actionRealtime;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listView;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QWidget *page2;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Bpsk1000Win)
    {
        if (Bpsk1000Win->objectName().isEmpty())
            Bpsk1000Win->setObjectName(QString::fromUtf8("Bpsk1000Win"));
        Bpsk1000Win->resize(800, 519);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/terminal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Bpsk1000Win->setWindowIcon(icon);
        actionClear = new QAction(Bpsk1000Win);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon1);
        actionSave = new QAction(Bpsk1000Win);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/floppy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionClose = new QAction(Bpsk1000Win);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        actionInfo = new QAction(Bpsk1000Win);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon4);
        actionOpen = new QAction(Bpsk1000Win);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/document.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon5);
        actionRealtime = new QAction(Bpsk1000Win);
        actionRealtime->setObjectName(QString::fromUtf8("actionRealtime"));
        actionRealtime->setCheckable(true);
        actionRealtime->setChecked(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRealtime->setIcon(icon6);
        centralwidget = new QWidget(Bpsk1000Win);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListWidget(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setMinimumSize(QSize(0, 100));
        listView->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(listView);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        stackedWidget->addWidget(page2);

        verticalLayout->addWidget(stackedWidget);

        Bpsk1000Win->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Bpsk1000Win);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Bpsk1000Win->setMenuBar(menubar);
        toolBar = new QToolBar(Bpsk1000Win);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Bpsk1000Win->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(Bpsk1000Win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Bpsk1000Win->setStatusBar(statusBar);

        toolBar->addAction(actionClose);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionClear);
        toolBar->addSeparator();
        toolBar->addAction(actionRealtime);
        toolBar->addSeparator();

        retranslateUi(Bpsk1000Win);
        QObject::connect(actionClose, SIGNAL(triggered()), Bpsk1000Win, SLOT(close()));

        QMetaObject::connectSlotsByName(Bpsk1000Win);
    } // setupUi

    void retranslateUi(QMainWindow *Bpsk1000Win)
    {
        Bpsk1000Win->setWindowTitle(QApplication::translate("Bpsk1000Win", "BPSK1000 Decoder", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("Bpsk1000Win", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("Bpsk1000Win", "Clear received packets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("Bpsk1000Win", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Bpsk1000Win", "Save received packets to a text file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("Bpsk1000Win", "Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("Bpsk1000Win", "Close AFSK1200 decoder window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionInfo->setText(QApplication::translate("Bpsk1000Win", "Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInfo->setToolTip(QApplication::translate("Bpsk1000Win", "Show info about AFKS1200 decoder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("Bpsk1000Win", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Bpsk1000Win", "Load previously received telemetry data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRealtime->setText(QApplication::translate("Bpsk1000Win", "Real time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRealtime->setToolTip(QApplication::translate("Bpsk1000Win", "Toggle between real time reception and offline analysis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("Bpsk1000Win", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Bpsk1000Win: public Ui_Bpsk1000Win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BPSK1000WIN_H
