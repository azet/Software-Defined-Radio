/********************************************************************************
** Form generated from reading UI file 'ioconfig.ui'
**
** Created: Sat Oct 13 16:17:50 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOCONFIG_H
#define UI_IOCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CIoConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxInput;
    QFormLayout *formLayout;
    QLabel *inDevLabel1;
    QComboBox *inDevCombo;
    QLabel *inDevLabel2;
    QLabel *inSrLabel;
    QComboBox *inSrCombo;
    QLabel *loLabel;
    QDoubleSpinBox *loSpinBox;
    QLineEdit *inDevEdit;
    QFrame *line;
    QGroupBox *groupBoxOutput;
    QFormLayout *formLayout_2;
    QLabel *outDevLabel;
    QComboBox *outDevCombo;
    QLabel *outSrLabel;
    QComboBox *outSrCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CIoConfig)
    {
        if (CIoConfig->objectName().isEmpty())
            CIoConfig->setObjectName(QString::fromUtf8("CIoConfig"));
        CIoConfig->resize(301, 324);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CIoConfig->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CIoConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxInput = new QGroupBox(CIoConfig);
        groupBoxInput->setObjectName(QString::fromUtf8("groupBoxInput"));
        groupBoxInput->setFlat(false);
        formLayout = new QFormLayout(groupBoxInput);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        inDevLabel1 = new QLabel(groupBoxInput);
        inDevLabel1->setObjectName(QString::fromUtf8("inDevLabel1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, inDevLabel1);

        inDevCombo = new QComboBox(groupBoxInput);
        inDevCombo->setObjectName(QString::fromUtf8("inDevCombo"));
        inDevCombo->setEnabled(true);
        inDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        inDevCombo->setMinimumContentsLength(15);

        formLayout->setWidget(0, QFormLayout::FieldRole, inDevCombo);

        inDevLabel2 = new QLabel(groupBoxInput);
        inDevLabel2->setObjectName(QString::fromUtf8("inDevLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, inDevLabel2);

        inSrLabel = new QLabel(groupBoxInput);
        inSrLabel->setObjectName(QString::fromUtf8("inSrLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, inSrLabel);

        inSrCombo = new QComboBox(groupBoxInput);
        inSrCombo->setObjectName(QString::fromUtf8("inSrCombo"));
        inSrCombo->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, inSrCombo);

        loLabel = new QLabel(groupBoxInput);
        loLabel->setObjectName(QString::fromUtf8("loLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, loLabel);

        loSpinBox = new QDoubleSpinBox(groupBoxInput);
        loSpinBox->setObjectName(QString::fromUtf8("loSpinBox"));
        loSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        loSpinBox->setDecimals(3);
        loSpinBox->setMinimum(-15000);
        loSpinBox->setMaximum(15000);

        formLayout->setWidget(3, QFormLayout::FieldRole, loSpinBox);

        inDevEdit = new QLineEdit(groupBoxInput);
        inDevEdit->setObjectName(QString::fromUtf8("inDevEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inDevEdit);


        verticalLayout->addWidget(groupBoxInput);

        line = new QFrame(CIoConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBoxOutput = new QGroupBox(CIoConfig);
        groupBoxOutput->setObjectName(QString::fromUtf8("groupBoxOutput"));
        formLayout_2 = new QFormLayout(groupBoxOutput);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        outDevLabel = new QLabel(groupBoxOutput);
        outDevLabel->setObjectName(QString::fromUtf8("outDevLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, outDevLabel);

        outDevCombo = new QComboBox(groupBoxOutput);
        outDevCombo->setObjectName(QString::fromUtf8("outDevCombo"));
        outDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        outDevCombo->setMinimumContentsLength(15);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, outDevCombo);

        outSrLabel = new QLabel(groupBoxOutput);
        outSrLabel->setObjectName(QString::fromUtf8("outSrLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, outSrLabel);

        outSrCombo = new QComboBox(groupBoxOutput);
        outSrCombo->setObjectName(QString::fromUtf8("outSrCombo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, outSrCombo);


        verticalLayout->addWidget(groupBoxOutput);

        buttonBox = new QDialogButtonBox(CIoConfig);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CIoConfig);
        QObject::connect(buttonBox, SIGNAL(accepted()), CIoConfig, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CIoConfig, SLOT(reject()));

        QMetaObject::connectSlotsByName(CIoConfig);
    } // setupUi

    void retranslateUi(QDialog *CIoConfig)
    {
        CIoConfig->setWindowTitle(QApplication::translate("CIoConfig", "Configure I/O devices", 0, QApplication::UnicodeUTF8));
        groupBoxInput->setTitle(QApplication::translate("CIoConfig", "I/Q input", 0, QApplication::UnicodeUTF8));
        inDevLabel1->setText(QApplication::translate("CIoConfig", "Device", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inDevCombo->setToolTip(QApplication::translate("CIoConfig", "Select an input device", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inDevLabel2->setToolTip(QApplication::translate("CIoConfig", "Device arguments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        inDevLabel2->setText(QApplication::translate("CIoConfig", "Device string", 0, QApplication::UnicodeUTF8));
        inSrLabel->setText(QApplication::translate("CIoConfig", "Sample rate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inSrCombo->setToolTip(QApplication::translate("CIoConfig", "Select the sample rate of the input source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loLabel->setText(QApplication::translate("CIoConfig", "LNB LO", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loSpinBox->setToolTip(QApplication::translate("CIoConfig", "LNB LO frequency. Use negative frequency for upconverters.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loSpinBox->setSuffix(QApplication::translate("CIoConfig", " MHz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inDevEdit->setToolTip(QApplication::translate("CIoConfig", "The device argument is a delimited string used to locate devices on your system.\n"
"Use the device id or name (if applicable) to specify a certain device or list\n"
"of devices. If left blank, the first device found will be used.\n"
"\n"
"Examples (some arguments may be optional):\n"
"  fcd=0\n"
"  rtl=0,rtl_xtal=28.80001e6,tuner_xtal=26e6,buffers=64 ...\n"
"  rtl_tcp=127.0.0.1:1234,psize=16384\n"
"  uhd,subdev=A:0,label='USRP1'\n"
"  osmosdr=0|name,mcr=64e6,nchan=5,port=/dev/ttyUSB0 ...\n"
"  file=/path/to/file.ext,freq=428e6,rate=1e6,repeat=true,throttle=true ...\n"
"\n"
"You can test the device strings in gnuradio-companion.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        inDevEdit->setText(QString());
        groupBoxOutput->setTitle(QApplication::translate("CIoConfig", "Audio output", 0, QApplication::UnicodeUTF8));
        outDevLabel->setText(QApplication::translate("CIoConfig", "Device", 0, QApplication::UnicodeUTF8));
        outDevCombo->clear();
        outDevCombo->insertItems(0, QStringList()
         << QApplication::translate("CIoConfig", "Default", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        outDevCombo->setToolTip(QApplication::translate("CIoConfig", "Select which device to use for audio output.\n"
"Leave it at default unless you know what you are doing.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        outSrLabel->setText(QApplication::translate("CIoConfig", "Sample rate", 0, QApplication::UnicodeUTF8));
        outSrCombo->clear();
        outSrCombo->insertItems(0, QStringList()
         << QApplication::translate("CIoConfig", "48 kHz", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        outSrCombo->setToolTip(QApplication::translate("CIoConfig", "Select the audio sample rate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CIoConfig: public Ui_CIoConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOCONFIG_H
