/********************************************************************************
** Form generated from reading UI file 'dockfft.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKFFT_H
#define UI_DOCKFFT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockFft
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *fftSettingsVLayout;
    QFormLayout *fftSettingsFormLayout;
    QLabel *fftsizeLabel;
    QComboBox *fftSizeComboBox;
    QLabel *fftRateLabel;
    QComboBox *fftRateComboBox;
    QHBoxLayout *fftSettingsSplitHLayout;
    QLabel *wfLabel;
    QSlider *fftSplitSlider;
    QLabel *pandLabel;

    void setupUi(QDockWidget *DockFft)
    {
        if (DockFft->objectName().isEmpty())
            DockFft->setObjectName(QString::fromUtf8("DockFft"));
        DockFft->resize(200, 140);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockFft->setWindowIcon(icon);
        DockFft->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        fftSettingsVLayout = new QVBoxLayout(dockWidgetContents);
        fftSettingsVLayout->setSpacing(5);
        fftSettingsVLayout->setContentsMargins(5, 5, 5, 5);
        fftSettingsVLayout->setObjectName(QString::fromUtf8("fftSettingsVLayout"));
        fftSettingsFormLayout = new QFormLayout();
        fftSettingsFormLayout->setContentsMargins(10, 10, 10, 10);
        fftSettingsFormLayout->setObjectName(QString::fromUtf8("fftSettingsFormLayout"));
        fftSettingsFormLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        fftSettingsFormLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fftSettingsFormLayout->setHorizontalSpacing(5);
        fftSettingsFormLayout->setVerticalSpacing(5);
        fftsizeLabel = new QLabel(dockWidgetContents);
        fftsizeLabel->setObjectName(QString::fromUtf8("fftsizeLabel"));
        fftsizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        fftSettingsFormLayout->setWidget(0, QFormLayout::LabelRole, fftsizeLabel);

        fftSizeComboBox = new QComboBox(dockWidgetContents);
        fftSizeComboBox->setObjectName(QString::fromUtf8("fftSizeComboBox"));
        fftSizeComboBox->setEnabled(false);
        fftSizeComboBox->setEditable(false);
        fftSizeComboBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        fftSettingsFormLayout->setWidget(0, QFormLayout::FieldRole, fftSizeComboBox);

        fftRateLabel = new QLabel(dockWidgetContents);
        fftRateLabel->setObjectName(QString::fromUtf8("fftRateLabel"));

        fftSettingsFormLayout->setWidget(1, QFormLayout::LabelRole, fftRateLabel);

        fftRateComboBox = new QComboBox(dockWidgetContents);
        fftRateComboBox->setObjectName(QString::fromUtf8("fftRateComboBox"));

        fftSettingsFormLayout->setWidget(1, QFormLayout::FieldRole, fftRateComboBox);


        fftSettingsVLayout->addLayout(fftSettingsFormLayout);

        fftSettingsSplitHLayout = new QHBoxLayout();
        fftSettingsSplitHLayout->setObjectName(QString::fromUtf8("fftSettingsSplitHLayout"));
        wfLabel = new QLabel(dockWidgetContents);
        wfLabel->setObjectName(QString::fromUtf8("wfLabel"));
        wfLabel->setAlignment(Qt::AlignCenter);

        fftSettingsSplitHLayout->addWidget(wfLabel);

        fftSplitSlider = new QSlider(dockWidgetContents);
        fftSplitSlider->setObjectName(QString::fromUtf8("fftSplitSlider"));
        fftSplitSlider->setMinimum(20);
        fftSplitSlider->setMaximum(80);
        fftSplitSlider->setValue(50);
        fftSplitSlider->setOrientation(Qt::Horizontal);

        fftSettingsSplitHLayout->addWidget(fftSplitSlider);

        pandLabel = new QLabel(dockWidgetContents);
        pandLabel->setObjectName(QString::fromUtf8("pandLabel"));
        pandLabel->setAlignment(Qt::AlignCenter);

        fftSettingsSplitHLayout->addWidget(pandLabel);


        fftSettingsVLayout->addLayout(fftSettingsSplitHLayout);

        DockFft->setWidget(dockWidgetContents);

        retranslateUi(DockFft);

        fftSizeComboBox->setCurrentIndex(3);
        fftRateComboBox->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(DockFft);
    } // setupUi

    void retranslateUi(QDockWidget *DockFft)
    {
#ifndef QT_NO_TOOLTIP
        DockFft->setToolTip(QApplication::translate("DockFft", "FFT performance and display settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DockFft->setWindowTitle(QApplication::translate("DockFft", "FFT Settings", 0, QApplication::UnicodeUTF8));
        fftsizeLabel->setText(QApplication::translate("DockFft", "FFT size:", 0, QApplication::UnicodeUTF8));
        fftSizeComboBox->clear();
        fftSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("DockFft", "32768", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "16384", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "8192", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "4096", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "3840", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "768", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "512", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        fftSizeComboBox->setToolTip(QApplication::translate("DockFft", "Number of FFT points to calculate. Higher values will require more CPU time. This will not influence the number of points on the display since that parameter is adjusted automatically according to the display size.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fftRateLabel->setText(QApplication::translate("DockFft", "Rate:", 0, QApplication::UnicodeUTF8));
        fftRateComboBox->clear();
        fftRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("DockFft", "30 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "25 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "20 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "17 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "15 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "10 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "5 fps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockFft", "1 fps", 0, QApplication::UnicodeUTF8)
        );
        wfLabel->setText(QApplication::translate("DockFft", "Pand", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fftSplitSlider->setToolTip(QApplication::translate("DockFft", "Spatial distribution between pandapter and waterfall", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pandLabel->setText(QApplication::translate("DockFft", "WF", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockFft: public Ui_DockFft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKFFT_H
