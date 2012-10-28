/********************************************************************************
** Form generated from reading UI file 'dockinputctl.ui'
**
** Created: Sat Oct 13 16:17:50 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKINPUTCTL_H
#define UI_DOCKINPUTCTL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockInputCtl
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lnbLabel;
    QDoubleSpinBox *lnbSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *gainLabel;
    QSlider *gainSlider;
    QPushButton *gainButton;
    QGroupBox *corrGroupBox;
    QFormLayout *formLayout;
    QLabel *freqCorrLabel;
    QSpinBox *freqCorrSpinBox;
    QLabel *iqGainLabel;
    QDoubleSpinBox *iqGainSpinBox;
    QLabel *iqPhaseLabel;
    QDoubleSpinBox *iqPhaseSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockInputCtl)
    {
        if (DockInputCtl->objectName().isEmpty())
            DockInputCtl->setObjectName(QString::fromUtf8("DockInputCtl"));
        DockInputCtl->resize(195, 264);
        DockInputCtl->setFloating(false);
        DockInputCtl->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lnbLabel = new QLabel(dockWidgetContents);
        lnbLabel->setObjectName(QString::fromUtf8("lnbLabel"));
        lnbLabel->setIndent(10);

        horizontalLayout_3->addWidget(lnbLabel);

        lnbSpinBox = new QDoubleSpinBox(dockWidgetContents);
        lnbSpinBox->setObjectName(QString::fromUtf8("lnbSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lnbSpinBox->sizePolicy().hasHeightForWidth());
        lnbSpinBox->setSizePolicy(sizePolicy);
        lnbSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lnbSpinBox->setDecimals(3);
        lnbSpinBox->setMinimum(-2000);
        lnbSpinBox->setMaximum(7900);

        horizontalLayout_3->addWidget(lnbSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gainLabel = new QLabel(dockWidgetContents);
        gainLabel->setObjectName(QString::fromUtf8("gainLabel"));

        horizontalLayout_2->addWidget(gainLabel);

        gainSlider = new QSlider(dockWidgetContents);
        gainSlider->setObjectName(QString::fromUtf8("gainSlider"));
        gainSlider->setMaximum(100);
        gainSlider->setValue(50);
        gainSlider->setOrientation(Qt::Horizontal);
        gainSlider->setTickPosition(QSlider::TicksBothSides);
        gainSlider->setTickInterval(10);

        horizontalLayout_2->addWidget(gainSlider);

        gainButton = new QPushButton(dockWidgetContents);
        gainButton->setObjectName(QString::fromUtf8("gainButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gainButton->sizePolicy().hasHeightForWidth());
        gainButton->setSizePolicy(sizePolicy1);
        gainButton->setMinimumSize(QSize(1, 0));
        gainButton->setMaximumSize(QSize(28, 28));
        gainButton->setBaseSize(QSize(0, 0));
        gainButton->setCheckable(true);

        horizontalLayout_2->addWidget(gainButton);


        verticalLayout->addLayout(horizontalLayout_2);

        corrGroupBox = new QGroupBox(dockWidgetContents);
        corrGroupBox->setObjectName(QString::fromUtf8("corrGroupBox"));
        formLayout = new QFormLayout(corrGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        freqCorrLabel = new QLabel(corrGroupBox);
        freqCorrLabel->setObjectName(QString::fromUtf8("freqCorrLabel"));
        freqCorrLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, freqCorrLabel);

        freqCorrSpinBox = new QSpinBox(corrGroupBox);
        freqCorrSpinBox->setObjectName(QString::fromUtf8("freqCorrSpinBox"));
        freqCorrSpinBox->setMinimum(-1000);
        freqCorrSpinBox->setMaximum(1000);
        freqCorrSpinBox->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, freqCorrSpinBox);

        iqGainLabel = new QLabel(corrGroupBox);
        iqGainLabel->setObjectName(QString::fromUtf8("iqGainLabel"));
        iqGainLabel->setEnabled(false);
        iqGainLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, iqGainLabel);

        iqGainSpinBox = new QDoubleSpinBox(corrGroupBox);
        iqGainSpinBox->setObjectName(QString::fromUtf8("iqGainSpinBox"));
        iqGainSpinBox->setEnabled(false);
        iqGainSpinBox->setDecimals(5);
        iqGainSpinBox->setMinimum(0);
        iqGainSpinBox->setMaximum(1);
        iqGainSpinBox->setSingleStep(3e-05);
        iqGainSpinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, iqGainSpinBox);

        iqPhaseLabel = new QLabel(corrGroupBox);
        iqPhaseLabel->setObjectName(QString::fromUtf8("iqPhaseLabel"));
        iqPhaseLabel->setEnabled(false);
        iqPhaseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, iqPhaseLabel);

        iqPhaseSpinBox = new QDoubleSpinBox(corrGroupBox);
        iqPhaseSpinBox->setObjectName(QString::fromUtf8("iqPhaseSpinBox"));
        iqPhaseSpinBox->setEnabled(false);
        iqPhaseSpinBox->setDecimals(5);
        iqPhaseSpinBox->setMinimum(-1);
        iqPhaseSpinBox->setMaximum(1);
        iqPhaseSpinBox->setSingleStep(3e-05);

        formLayout->setWidget(2, QFormLayout::FieldRole, iqPhaseSpinBox);


        verticalLayout->addWidget(corrGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockInputCtl->setWidget(dockWidgetContents);

        retranslateUi(DockInputCtl);

        QMetaObject::connectSlotsByName(DockInputCtl);
    } // setupUi

    void retranslateUi(QDockWidget *DockInputCtl)
    {
        DockInputCtl->setWindowTitle(QApplication::translate("DockInputCtl", "Input controls", 0, QApplication::UnicodeUTF8));
        lnbLabel->setText(QApplication::translate("DockInputCtl", "LO", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lnbSpinBox->setToolTip(QApplication::translate("DockInputCtl", "Local oscillator of up or down converter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lnbSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lnbSpinBox->setSuffix(QApplication::translate("DockInputCtl", " MHz", 0, QApplication::UnicodeUTF8));
        gainLabel->setText(QApplication::translate("DockInputCtl", "Gain", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gainSlider->setToolTip(QApplication::translate("DockInputCtl", "Manual gain control", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gainButton->setToolTip(QApplication::translate("DockInputCtl", "Automatic gain control", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gainButton->setText(QApplication::translate("DockInputCtl", "A", 0, QApplication::UnicodeUTF8));
        corrGroupBox->setTitle(QApplication::translate("DockInputCtl", "Corrections", 0, QApplication::UnicodeUTF8));
        freqCorrLabel->setText(QApplication::translate("DockInputCtl", "Freq", 0, QApplication::UnicodeUTF8));
        freqCorrSpinBox->setSuffix(QApplication::translate("DockInputCtl", " ppm", 0, QApplication::UnicodeUTF8));
        iqGainLabel->setText(QApplication::translate("DockInputCtl", "Gain", 0, QApplication::UnicodeUTF8));
        iqPhaseLabel->setText(QApplication::translate("DockInputCtl", "Phase", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DockInputCtl: public Ui_DockInputCtl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKINPUTCTL_H
