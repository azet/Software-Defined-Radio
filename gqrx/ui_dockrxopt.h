/********************************************************************************
** Form generated from reading UI file 'dockrxopt.ui'
**
** Created: Sat Oct 13 16:17:50 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKRXOPT_H
#define UI_DOCKRXOPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qtgui/freqctrl.h"

QT_BEGIN_NAMESPACE

class Ui_DockRxOpt
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CFreqCtrl *filterFreq;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rxFreqLabel;
    QLabel *rxFreq;
    QFrame *hline1;
    QGridLayout *gridLayout;
    QLabel *filterLabel;
    QComboBox *filterCombo;
    QPushButton *filterButton;
    QLabel *demodLabel;
    QComboBox *modeSelector;
    QPushButton *modeButton;
    QLabel *agcLabel;
    QComboBox *agcPresetCombo;
    QPushButton *agcHangButton;
    QHBoxLayout *horizontalLayout_3;
    QDial *agcGainDial;
    QDial *agcThresholdDial;
    QDial *agcSlopeDial;
    QDial *agcDecayDial;
    QFrame *hline2;
    QHBoxLayout *pageFilterHLayout1;
    QPushButton *nb1Button;
    QPushButton *nb2Button;
    QDoubleSpinBox *nb1Threshold;
    QDoubleSpinBox *nb2Threshold;
    QFrame *hline3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sqlLabel;
    QSlider *sqlSlider;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockRxOpt)
    {
        if (DockRxOpt->objectName().isEmpty())
            DockRxOpt->setObjectName(QString::fromUtf8("DockRxOpt"));
        DockRxOpt->resize(221, 290);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockRxOpt->sizePolicy().hasHeightForWidth());
        DockRxOpt->setSizePolicy(sizePolicy);
        DockRxOpt->setMinimumSize(QSize(221, 290));
        DockRxOpt->setMaximumSize(QSize(400, 524287));
        DockRxOpt->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 2, 5, 5);
        filterFreq = new CFreqCtrl(dockWidgetContents);
        filterFreq->setObjectName(QString::fromUtf8("filterFreq"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filterFreq->sizePolicy().hasHeightForWidth());
        filterFreq->setSizePolicy(sizePolicy1);
        filterFreq->setMinimumSize(QSize(200, 32));
        filterFreq->setFrameShape(QFrame::StyledPanel);
        filterFreq->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(filterFreq);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        rxFreqLabel = new QLabel(dockWidgetContents);
        rxFreqLabel->setObjectName(QString::fromUtf8("rxFreqLabel"));
        rxFreqLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(rxFreqLabel);

        rxFreq = new QLabel(dockWidgetContents);
        rxFreq->setObjectName(QString::fromUtf8("rxFreq"));
        rxFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(rxFreq);


        verticalLayout->addLayout(horizontalLayout_6);

        hline1 = new QFrame(dockWidgetContents);
        hline1->setObjectName(QString::fromUtf8("hline1"));
        hline1->setFrameShape(QFrame::HLine);
        hline1->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(hline1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        filterLabel = new QLabel(dockWidgetContents);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(filterLabel, 0, 0, 1, 1);

        filterCombo = new QComboBox(dockWidgetContents);
        filterCombo->setObjectName(QString::fromUtf8("filterCombo"));
        filterCombo->setEnabled(true);

        gridLayout->addWidget(filterCombo, 0, 1, 1, 1);

        filterButton = new QPushButton(dockWidgetContents);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(filterButton->sizePolicy().hasHeightForWidth());
        filterButton->setSizePolicy(sizePolicy1);
        filterButton->setMaximumSize(QSize(28, 28));
        QFont font;
        font.setPointSize(10);
        filterButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        filterButton->setIcon(icon);
        filterButton->setIconSize(QSize(16, 16));
        filterButton->setCheckable(false);
        filterButton->setChecked(false);

        gridLayout->addWidget(filterButton, 0, 2, 1, 1);

        demodLabel = new QLabel(dockWidgetContents);
        demodLabel->setObjectName(QString::fromUtf8("demodLabel"));
        sizePolicy.setHeightForWidth(demodLabel->sizePolicy().hasHeightForWidth());
        demodLabel->setSizePolicy(sizePolicy);
        demodLabel->setAlignment(Qt::AlignCenter);
        demodLabel->setMargin(0);
        demodLabel->setIndent(19);

        gridLayout->addWidget(demodLabel, 1, 0, 1, 1);

        modeSelector = new QComboBox(dockWidgetContents);
        modeSelector->setObjectName(QString::fromUtf8("modeSelector"));

        gridLayout->addWidget(modeSelector, 1, 1, 1, 1);

        modeButton = new QPushButton(dockWidgetContents);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        sizePolicy1.setHeightForWidth(modeButton->sizePolicy().hasHeightForWidth());
        modeButton->setSizePolicy(sizePolicy1);
        modeButton->setMaximumSize(QSize(28, 28));
        modeButton->setFont(font);
        modeButton->setIcon(icon);
        modeButton->setIconSize(QSize(16, 16));
        modeButton->setCheckable(false);
        modeButton->setChecked(false);

        gridLayout->addWidget(modeButton, 1, 2, 1, 1);

        agcLabel = new QLabel(dockWidgetContents);
        agcLabel->setObjectName(QString::fromUtf8("agcLabel"));

        gridLayout->addWidget(agcLabel, 2, 0, 1, 1);

        agcPresetCombo = new QComboBox(dockWidgetContents);
        agcPresetCombo->setObjectName(QString::fromUtf8("agcPresetCombo"));
        agcPresetCombo->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(agcPresetCombo->sizePolicy().hasHeightForWidth());
        agcPresetCombo->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(agcPresetCombo, 2, 1, 1, 1);

        agcHangButton = new QPushButton(dockWidgetContents);
        agcHangButton->setObjectName(QString::fromUtf8("agcHangButton"));
        sizePolicy1.setHeightForWidth(agcHangButton->sizePolicy().hasHeightForWidth());
        agcHangButton->setSizePolicy(sizePolicy1);
        agcHangButton->setMaximumSize(QSize(28, 28));
        agcHangButton->setFont(font);
        agcHangButton->setCheckable(true);
        agcHangButton->setChecked(false);

        gridLayout->addWidget(agcHangButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        agcGainDial = new QDial(dockWidgetContents);
        agcGainDial->setObjectName(QString::fromUtf8("agcGainDial"));
        sizePolicy.setHeightForWidth(agcGainDial->sizePolicy().hasHeightForWidth());
        agcGainDial->setSizePolicy(sizePolicy);
        agcGainDial->setMinimumSize(QSize(32, 32));
        agcGainDial->setMaximumSize(QSize(32, 32));
        agcGainDial->setMaximum(100);

        horizontalLayout_3->addWidget(agcGainDial);

        agcThresholdDial = new QDial(dockWidgetContents);
        agcThresholdDial->setObjectName(QString::fromUtf8("agcThresholdDial"));
        agcThresholdDial->setEnabled(true);
        sizePolicy.setHeightForWidth(agcThresholdDial->sizePolicy().hasHeightForWidth());
        agcThresholdDial->setSizePolicy(sizePolicy);
        agcThresholdDial->setMinimumSize(QSize(32, 32));
        agcThresholdDial->setMaximumSize(QSize(32, 32));
        agcThresholdDial->setMinimum(-160);
        agcThresholdDial->setMaximum(0);
        agcThresholdDial->setValue(-100);

        horizontalLayout_3->addWidget(agcThresholdDial);

        agcSlopeDial = new QDial(dockWidgetContents);
        agcSlopeDial->setObjectName(QString::fromUtf8("agcSlopeDial"));
        agcSlopeDial->setEnabled(false);
        agcSlopeDial->setMinimumSize(QSize(32, 32));
        agcSlopeDial->setMaximumSize(QSize(32, 32));
        agcSlopeDial->setMaximum(10);
        agcSlopeDial->setPageStep(1);
        agcSlopeDial->setValue(2);

        horizontalLayout_3->addWidget(agcSlopeDial);

        agcDecayDial = new QDial(dockWidgetContents);
        agcDecayDial->setObjectName(QString::fromUtf8("agcDecayDial"));
        agcDecayDial->setEnabled(false);
        agcDecayDial->setMinimumSize(QSize(32, 32));
        agcDecayDial->setMaximumSize(QSize(32, 32));
        agcDecayDial->setMinimum(50);
        agcDecayDial->setMaximum(5000);
        agcDecayDial->setSingleStep(50);
        agcDecayDial->setPageStep(50);
        agcDecayDial->setValue(100);

        horizontalLayout_3->addWidget(agcDecayDial);


        verticalLayout->addLayout(horizontalLayout_3);

        hline2 = new QFrame(dockWidgetContents);
        hline2->setObjectName(QString::fromUtf8("hline2"));
        hline2->setFrameShape(QFrame::HLine);
        hline2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(hline2);

        pageFilterHLayout1 = new QHBoxLayout();
        pageFilterHLayout1->setSpacing(0);
        pageFilterHLayout1->setObjectName(QString::fromUtf8("pageFilterHLayout1"));
        nb1Button = new QPushButton(dockWidgetContents);
        nb1Button->setObjectName(QString::fromUtf8("nb1Button"));
        nb1Button->setEnabled(true);
        sizePolicy1.setHeightForWidth(nb1Button->sizePolicy().hasHeightForWidth());
        nb1Button->setSizePolicy(sizePolicy1);
        nb1Button->setMaximumSize(QSize(42, 16777215));
        nb1Button->setCheckable(true);

        pageFilterHLayout1->addWidget(nb1Button);

        nb2Button = new QPushButton(dockWidgetContents);
        nb2Button->setObjectName(QString::fromUtf8("nb2Button"));
        nb2Button->setEnabled(true);
        sizePolicy1.setHeightForWidth(nb2Button->sizePolicy().hasHeightForWidth());
        nb2Button->setSizePolicy(sizePolicy1);
        nb2Button->setMaximumSize(QSize(42, 16777215));
        nb2Button->setCheckable(true);

        pageFilterHLayout1->addWidget(nb2Button);

        nb1Threshold = new QDoubleSpinBox(dockWidgetContents);
        nb1Threshold->setObjectName(QString::fromUtf8("nb1Threshold"));
        nb1Threshold->setMaximumSize(QSize(16777215, 16777215));
        nb1Threshold->setAlignment(Qt::AlignCenter);
        nb1Threshold->setDecimals(1);
        nb1Threshold->setMinimum(1);
        nb1Threshold->setMaximum(20);
        nb1Threshold->setSingleStep(0.1);
        nb1Threshold->setValue(3.3);

        pageFilterHLayout1->addWidget(nb1Threshold);

        nb2Threshold = new QDoubleSpinBox(dockWidgetContents);
        nb2Threshold->setObjectName(QString::fromUtf8("nb2Threshold"));
        nb2Threshold->setMaximumSize(QSize(16777215, 16777215));
        nb2Threshold->setAlignment(Qt::AlignCenter);
        nb2Threshold->setDecimals(1);
        nb2Threshold->setMaximum(15);
        nb2Threshold->setSingleStep(0.1);
        nb2Threshold->setValue(2.5);

        pageFilterHLayout1->addWidget(nb2Threshold);


        verticalLayout->addLayout(pageFilterHLayout1);

        hline3 = new QFrame(dockWidgetContents);
        hline3->setObjectName(QString::fromUtf8("hline3"));
        hline3->setFrameShape(QFrame::HLine);
        hline3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(hline3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sqlLabel = new QLabel(dockWidgetContents);
        sqlLabel->setObjectName(QString::fromUtf8("sqlLabel"));
        sqlLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(sqlLabel);

        sqlSlider = new QSlider(dockWidgetContents);
        sqlSlider->setObjectName(QString::fromUtf8("sqlSlider"));
        sizePolicy2.setHeightForWidth(sqlSlider->sizePolicy().hasHeightForWidth());
        sqlSlider->setSizePolicy(sizePolicy2);
        sqlSlider->setMinimum(-1500);
        sqlSlider->setMaximum(0);
        sqlSlider->setPageStep(100);
        sqlSlider->setValue(-1500);
        sqlSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sqlSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockRxOpt->setWidget(dockWidgetContents);

        retranslateUi(DockRxOpt);

        filterCombo->setCurrentIndex(0);
        modeSelector->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(DockRxOpt);
    } // setupUi

    void retranslateUi(QDockWidget *DockRxOpt)
    {
        DockRxOpt->setWindowTitle(QApplication::translate("DockRxOpt", "Receiver Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filterFreq->setToolTip(QApplication::translate("DockRxOpt", "Channel filter frequency", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rxFreqLabel->setToolTip(QApplication::translate("DockRxOpt", "The frequency we actualy are listening on calculated\n"
"as  rf_freq + filter_offset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rxFreqLabel->setText(QApplication::translate("DockRxOpt", "Receive:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rxFreq->setToolTip(QApplication::translate("DockRxOpt", "The frequency we actualy are listening on calculated\n"
"as  rf_freq + filter_offset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rxFreq->setText(QApplication::translate("DockRxOpt", "144.500000 MHz", 0, QApplication::UnicodeUTF8));
        filterLabel->setText(QApplication::translate("DockRxOpt", "Filter", 0, QApplication::UnicodeUTF8));
        filterCombo->clear();
        filterCombo->insertItems(0, QStringList()
         << QApplication::translate("DockRxOpt", "Wide", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Narrow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "User", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        filterCombo->setToolTip(QApplication::translate("DockRxOpt", "Apply mode dependent filter preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterButton->setToolTip(QApplication::translate("DockRxOpt", "Channel filter settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterButton->setText(QString());
        demodLabel->setText(QApplication::translate("DockRxOpt", "Mode", 0, QApplication::UnicodeUTF8));
        modeSelector->clear();
        modeSelector->insertItems(0, QStringList()
         << QApplication::translate("DockRxOpt", "Demod Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Raw I/Q", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "AM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Narrow FM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Wide FM (mono)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Wide FM (stereo)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "LSB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "USB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "CW-L", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "CW-U", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        modeSelector->setToolTip(QApplication::translate("DockRxOpt", "Demodulator type (mode)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modeSelector->setStatusTip(QApplication::translate("DockRxOpt", "Demodulator type (mode)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        modeButton->setToolTip(QApplication::translate("DockRxOpt", "Demodulator options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        modeButton->setText(QString());
        agcLabel->setText(QApplication::translate("DockRxOpt", "AGC", 0, QApplication::UnicodeUTF8));
        agcPresetCombo->clear();
        agcPresetCombo->insertItems(0, QStringList()
         << QApplication::translate("DockRxOpt", "Fast", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Medium", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Slow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "User", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DockRxOpt", "Off", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        agcPresetCombo->setToolTip(QApplication::translate("DockRxOpt", "AGC presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        agcHangButton->setToolTip(QApplication::translate("DockRxOpt", "Enable/disable AGC hang.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        agcHangButton->setText(QApplication::translate("DockRxOpt", "H", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        agcGainDial->setToolTip(QApplication::translate("DockRxOpt", "Manual gain. Used when AGC is switched off.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        agcThresholdDial->setToolTip(QApplication::translate("DockRxOpt", "AGC threshold (aka. \"knee\")", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        agcSlopeDial->setToolTip(QApplication::translate("DockRxOpt", "AGC slope", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        agcDecayDial->setToolTip(QApplication::translate("DockRxOpt", "AGC decay time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        nb1Button->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker for pulse type noise", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nb1Button->setText(QApplication::translate("DockRxOpt", "NB1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nb2Button->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker for non-pulse type noise", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nb2Button->setText(QApplication::translate("DockRxOpt", "NB2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nb1Threshold->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker 1 threshold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        nb2Threshold->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker 2 treshold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sqlLabel->setText(QApplication::translate("DockRxOpt", "SQL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sqlSlider->setToolTip(QApplication::translate("DockRxOpt", "Squelch level in dBFS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DockRxOpt: public Ui_DockRxOpt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKRXOPT_H
