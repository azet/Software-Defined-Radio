/********************************************************************************
** Form generated from reading UI file 'dockiqplayer.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKIQPLAYER_H
#define UI_DOCKIQPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockIqPlayer
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QPushButton *playButton;
    QLabel *posLabel;
    QSlider *seekSlider;
    QLabel *durLabel;

    void setupUi(QDockWidget *DockIqPlayer)
    {
        if (DockIqPlayer->objectName().isEmpty())
            DockIqPlayer->setObjectName(QString::fromUtf8("DockIqPlayer"));
        DockIqPlayer->resize(482, 61);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockIqPlayer->setWindowIcon(icon);
        DockIqPlayer->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 2, 5, 2);
        openButton = new QPushButton(dockWidgetContents);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setMinimumSize(QSize(32, 32));
        openButton->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/document.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon1);
        openButton->setCheckable(false);

        horizontalLayout->addWidget(openButton);

        playButton = new QPushButton(dockWidgetContents);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setEnabled(false);
        playButton->setMinimumSize(QSize(32, 32));
        playButton->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon2);
        playButton->setCheckable(true);

        horizontalLayout->addWidget(playButton);

        posLabel = new QLabel(dockWidgetContents);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        posLabel->setMargin(0);

        horizontalLayout->addWidget(posLabel);

        seekSlider = new QSlider(dockWidgetContents);
        seekSlider->setObjectName(QString::fromUtf8("seekSlider"));
        seekSlider->setEnabled(false);
        seekSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(seekSlider);

        durLabel = new QLabel(dockWidgetContents);
        durLabel->setObjectName(QString::fromUtf8("durLabel"));

        horizontalLayout->addWidget(durLabel);

        DockIqPlayer->setWidget(dockWidgetContents);

        retranslateUi(DockIqPlayer);

        QMetaObject::connectSlotsByName(DockIqPlayer);
    } // setupUi

    void retranslateUi(QDockWidget *DockIqPlayer)
    {
        DockIqPlayer->setWindowTitle(QApplication::translate("DockIqPlayer", "I/Q Player", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        openButton->setToolTip(QApplication::translate("DockIqPlayer", "Load I/Q data file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("DockIqPlayer", "Replay previously recorded I/Q data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        playButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        posLabel->setToolTip(QApplication::translate("DockIqPlayer", "Current position of the player", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        posLabel->setText(QApplication::translate("DockIqPlayer", "00:00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        seekSlider->setToolTip(QApplication::translate("DockIqPlayer", "Seek", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        durLabel->setToolTip(QApplication::translate("DockIqPlayer", "total time of the recording", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        durLabel->setText(QApplication::translate("DockIqPlayer", "00:00:00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockIqPlayer: public Ui_DockIqPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKIQPLAYER_H
