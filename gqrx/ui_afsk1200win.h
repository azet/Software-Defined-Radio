/********************************************************************************
** Form generated from reading UI file 'afsk1200win.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFSK1200WIN_H
#define UI_AFSK1200WIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Afsk1200Win
{
public:
    QAction *actionClear;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionInfo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textView;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Afsk1200Win)
    {
        if (Afsk1200Win->objectName().isEmpty())
            Afsk1200Win->setObjectName(QString::fromUtf8("Afsk1200Win"));
        Afsk1200Win->resize(800, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/terminal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Afsk1200Win->setWindowIcon(icon);
        actionClear = new QAction(Afsk1200Win);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon1);
        actionSave = new QAction(Afsk1200Win);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/floppy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionClose = new QAction(Afsk1200Win);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        actionInfo = new QAction(Afsk1200Win);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon4);
        centralwidget = new QWidget(Afsk1200Win);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textView = new QPlainTextEdit(centralwidget);
        textView->setObjectName(QString::fromUtf8("textView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        textView->setFont(font);
        textView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textView->setLineWrapMode(QPlainTextEdit::NoWrap);
        textView->setReadOnly(true);
        textView->setMaximumBlockCount(10000);

        verticalLayout->addWidget(textView);

        Afsk1200Win->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Afsk1200Win);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Afsk1200Win->setMenuBar(menubar);
        toolBar = new QToolBar(Afsk1200Win);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Afsk1200Win->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(Afsk1200Win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Afsk1200Win->setStatusBar(statusBar);

        toolBar->addAction(actionClose);
        toolBar->addSeparator();
        toolBar->addAction(actionClear);
        toolBar->addAction(actionSave);

        retranslateUi(Afsk1200Win);
        QObject::connect(actionClose, SIGNAL(triggered()), Afsk1200Win, SLOT(close()));

        QMetaObject::connectSlotsByName(Afsk1200Win);
    } // setupUi

    void retranslateUi(QMainWindow *Afsk1200Win)
    {
        Afsk1200Win->setWindowTitle(QApplication::translate("Afsk1200Win", "AFSK1200 Decoder", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("Afsk1200Win", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("Afsk1200Win", "Clear received packets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("Afsk1200Win", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Afsk1200Win", "Save received packets to a text file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("Afsk1200Win", "Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("Afsk1200Win", "Close AFSK1200 decoder window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionInfo->setText(QApplication::translate("Afsk1200Win", "Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInfo->setToolTip(QApplication::translate("Afsk1200Win", "Show info about AFKS1200 decoder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("Afsk1200Win", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Afsk1200Win: public Ui_Afsk1200Win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFSK1200WIN_H
