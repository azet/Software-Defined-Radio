/********************************************************************************
** Form generated from reading UI file 'arissattlm.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARISSATTLM_H
#define UI_ARISSATTLM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArissatTlm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *metLabel;
    QLabel *frameCountLabel;
    QLabel *modeLabel;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *Temperatures;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *tempRfMod;
    QLabel *label_6;
    QLabel *tempIhuEnc;
    QLabel *label_7;
    QLabel *tempBattery;
    QLabel *label_8;
    QLabel *tempPsu;
    QLabel *label_9;
    QLabel *tempIhu;
    QLabel *label_5;
    QLabel *tempCamTop;
    QLabel *label_4;
    QLabel *tempCamBottom;
    QLabel *label_2;
    QLabel *tempCtl;
    QLabel *label_3;
    QLabel *tempExp;
    QGroupBox *Battery;
    QFormLayout *formLayout_2;
    QLabel *label_21;
    QLabel *battState;
    QLabel *label_16;
    QLabel *battVolt;
    QLabel *label_17;
    QLabel *battCurrent;
    QLabel *label_20;
    QLabel *battVdd;
    QLabel *label_18;
    QLabel *battVref;
    QLabel *label_19;
    QLabel *battCharge;
    QGroupBox *Power;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLabel *ihuStatus;
    QLabel *ihuAmp;
    QLabel *label_10;
    QLabel *sdxStatus;
    QLabel *sdxAmp;
    QLabel *label_11;
    QLabel *expStatus;
    QLabel *expAmp;
    QLabel *label_12;
    QLabel *camStatus;
    QLabel *camAmp;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *psu5vAmp;
    QLabel *psu8vAmp;
    QLabel *psu5vStatus;
    QLabel *psu8vStatus;
    QLabel *filler_1;
    QLabel *filler_2;
    QLabel *filler_3;
    QGroupBox *groupBox;
    QGridLayout *pptGridLayout;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_37;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *ArissatTlm)
    {
        if (ArissatTlm->objectName().isEmpty())
            ArissatTlm->setObjectName(QString::fromUtf8("ArissatTlm"));
        ArissatTlm->resize(691, 530);
        verticalLayout = new QVBoxLayout(ArissatTlm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        metLabel = new QLabel(ArissatTlm);
        metLabel->setObjectName(QString::fromUtf8("metLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        metLabel->setFont(font);
        metLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(metLabel);

        frameCountLabel = new QLabel(ArissatTlm);
        frameCountLabel->setObjectName(QString::fromUtf8("frameCountLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        frameCountLabel->setFont(font1);
        frameCountLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(frameCountLabel);

        modeLabel = new QLabel(ArissatTlm);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        modeLabel->setFont(font1);
        modeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(modeLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(ArissatTlm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(ArissatTlm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 0, 5, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Temperatures = new QGroupBox(tab_1);
        Temperatures->setObjectName(QString::fromUtf8("Temperatures"));
        formLayout = new QFormLayout(Temperatures);
        formLayout->setContentsMargins(5, 5, 5, 5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(5);
        formLayout->setVerticalSpacing(2);
        label_1 = new QLabel(Temperatures);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        tempRfMod = new QLabel(Temperatures);
        tempRfMod->setObjectName(QString::fromUtf8("tempRfMod"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tempRfMod->sizePolicy().hasHeightForWidth());
        tempRfMod->setSizePolicy(sizePolicy);
        tempRfMod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, tempRfMod);

        label_6 = new QLabel(Temperatures);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        tempIhuEnc = new QLabel(Temperatures);
        tempIhuEnc->setObjectName(QString::fromUtf8("tempIhuEnc"));
        tempIhuEnc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, tempIhuEnc);

        label_7 = new QLabel(Temperatures);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        tempBattery = new QLabel(Temperatures);
        tempBattery->setObjectName(QString::fromUtf8("tempBattery"));
        tempBattery->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, tempBattery);

        label_8 = new QLabel(Temperatures);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        tempPsu = new QLabel(Temperatures);
        tempPsu->setObjectName(QString::fromUtf8("tempPsu"));
        tempPsu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, tempPsu);

        label_9 = new QLabel(Temperatures);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        tempIhu = new QLabel(Temperatures);
        tempIhu->setObjectName(QString::fromUtf8("tempIhu"));
        tempIhu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, tempIhu);

        label_5 = new QLabel(Temperatures);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        tempCamTop = new QLabel(Temperatures);
        tempCamTop->setObjectName(QString::fromUtf8("tempCamTop"));
        tempCamTop->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, tempCamTop);

        label_4 = new QLabel(Temperatures);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        tempCamBottom = new QLabel(Temperatures);
        tempCamBottom->setObjectName(QString::fromUtf8("tempCamBottom"));
        tempCamBottom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, tempCamBottom);

        label_2 = new QLabel(Temperatures);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_2);

        tempCtl = new QLabel(Temperatures);
        tempCtl->setObjectName(QString::fromUtf8("tempCtl"));
        tempCtl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, tempCtl);

        label_3 = new QLabel(Temperatures);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_3);

        tempExp = new QLabel(Temperatures);
        tempExp->setObjectName(QString::fromUtf8("tempExp"));
        tempExp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, tempExp);


        horizontalLayout_2->addWidget(Temperatures);

        Battery = new QGroupBox(tab_1);
        Battery->setObjectName(QString::fromUtf8("Battery"));
        Battery->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Battery->setFlat(false);
        Battery->setCheckable(false);
        formLayout_2 = new QFormLayout(Battery);
        formLayout_2->setContentsMargins(5, 5, 5, 5);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(5);
        formLayout_2->setVerticalSpacing(2);
        label_21 = new QLabel(Battery);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_21);

        battState = new QLabel(Battery);
        battState->setObjectName(QString::fromUtf8("battState"));
        sizePolicy.setHeightForWidth(battState->sizePolicy().hasHeightForWidth());
        battState->setSizePolicy(sizePolicy);
        battState->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, battState);

        label_16 = new QLabel(Battery);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_16);

        battVolt = new QLabel(Battery);
        battVolt->setObjectName(QString::fromUtf8("battVolt"));
        sizePolicy.setHeightForWidth(battVolt->sizePolicy().hasHeightForWidth());
        battVolt->setSizePolicy(sizePolicy);
        battVolt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, battVolt);

        label_17 = new QLabel(Battery);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_17);

        battCurrent = new QLabel(Battery);
        battCurrent->setObjectName(QString::fromUtf8("battCurrent"));
        sizePolicy.setHeightForWidth(battCurrent->sizePolicy().hasHeightForWidth());
        battCurrent->setSizePolicy(sizePolicy);
        battCurrent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, battCurrent);

        label_20 = new QLabel(Battery);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_20);

        battVdd = new QLabel(Battery);
        battVdd->setObjectName(QString::fromUtf8("battVdd"));
        sizePolicy.setHeightForWidth(battVdd->sizePolicy().hasHeightForWidth());
        battVdd->setSizePolicy(sizePolicy);
        battVdd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, battVdd);

        label_18 = new QLabel(Battery);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_18);

        battVref = new QLabel(Battery);
        battVref->setObjectName(QString::fromUtf8("battVref"));
        sizePolicy.setHeightForWidth(battVref->sizePolicy().hasHeightForWidth());
        battVref->setSizePolicy(sizePolicy);
        battVref->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, battVref);

        label_19 = new QLabel(Battery);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_19);

        battCharge = new QLabel(Battery);
        battCharge->setObjectName(QString::fromUtf8("battCharge"));
        sizePolicy.setHeightForWidth(battCharge->sizePolicy().hasHeightForWidth());
        battCharge->setSizePolicy(sizePolicy);
        battCharge->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, battCharge);


        horizontalLayout_2->addWidget(Battery);

        Power = new QGroupBox(tab_1);
        Power->setObjectName(QString::fromUtf8("Power"));
        gridLayout = new QGridLayout(Power);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(2);
        label_13 = new QLabel(Power);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        ihuStatus = new QLabel(Power);
        ihuStatus->setObjectName(QString::fromUtf8("ihuStatus"));
        sizePolicy.setHeightForWidth(ihuStatus->sizePolicy().hasHeightForWidth());
        ihuStatus->setSizePolicy(sizePolicy);
        ihuStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ihuStatus, 0, 1, 1, 1);

        ihuAmp = new QLabel(Power);
        ihuAmp->setObjectName(QString::fromUtf8("ihuAmp"));
        sizePolicy.setHeightForWidth(ihuAmp->sizePolicy().hasHeightForWidth());
        ihuAmp->setSizePolicy(sizePolicy);
        ihuAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ihuAmp, 0, 2, 1, 1);

        label_10 = new QLabel(Power);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        sdxStatus = new QLabel(Power);
        sdxStatus->setObjectName(QString::fromUtf8("sdxStatus"));
        sizePolicy.setHeightForWidth(sdxStatus->sizePolicy().hasHeightForWidth());
        sdxStatus->setSizePolicy(sizePolicy);
        sdxStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(sdxStatus, 1, 1, 1, 1);

        sdxAmp = new QLabel(Power);
        sdxAmp->setObjectName(QString::fromUtf8("sdxAmp"));
        sizePolicy.setHeightForWidth(sdxAmp->sizePolicy().hasHeightForWidth());
        sdxAmp->setSizePolicy(sizePolicy);
        sdxAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sdxAmp, 1, 2, 1, 1);

        label_11 = new QLabel(Power);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        expStatus = new QLabel(Power);
        expStatus->setObjectName(QString::fromUtf8("expStatus"));
        sizePolicy.setHeightForWidth(expStatus->sizePolicy().hasHeightForWidth());
        expStatus->setSizePolicy(sizePolicy);
        expStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(expStatus, 2, 1, 1, 1);

        expAmp = new QLabel(Power);
        expAmp->setObjectName(QString::fromUtf8("expAmp"));
        sizePolicy.setHeightForWidth(expAmp->sizePolicy().hasHeightForWidth());
        expAmp->setSizePolicy(sizePolicy);
        expAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(expAmp, 2, 2, 1, 1);

        label_12 = new QLabel(Power);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        camStatus = new QLabel(Power);
        camStatus->setObjectName(QString::fromUtf8("camStatus"));
        sizePolicy.setHeightForWidth(camStatus->sizePolicy().hasHeightForWidth());
        camStatus->setSizePolicy(sizePolicy);
        camStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(camStatus, 3, 1, 1, 1);

        camAmp = new QLabel(Power);
        camAmp->setObjectName(QString::fromUtf8("camAmp"));
        sizePolicy.setHeightForWidth(camAmp->sizePolicy().hasHeightForWidth());
        camAmp->setSizePolicy(sizePolicy);
        camAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(camAmp, 3, 2, 1, 1);

        label_15 = new QLabel(Power);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        label_14 = new QLabel(Power);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        psu5vAmp = new QLabel(Power);
        psu5vAmp->setObjectName(QString::fromUtf8("psu5vAmp"));
        psu5vAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(psu5vAmp, 4, 2, 1, 1);

        psu8vAmp = new QLabel(Power);
        psu8vAmp->setObjectName(QString::fromUtf8("psu8vAmp"));
        psu8vAmp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(psu8vAmp, 5, 2, 1, 1);

        psu5vStatus = new QLabel(Power);
        psu5vStatus->setObjectName(QString::fromUtf8("psu5vStatus"));
        psu5vStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(psu5vStatus, 4, 1, 1, 1);

        psu8vStatus = new QLabel(Power);
        psu8vStatus->setObjectName(QString::fromUtf8("psu8vStatus"));
        psu8vStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(psu8vStatus, 5, 1, 1, 1);

        filler_1 = new QLabel(Power);
        filler_1->setObjectName(QString::fromUtf8("filler_1"));

        gridLayout->addWidget(filler_1, 6, 1, 1, 1);

        filler_2 = new QLabel(Power);
        filler_2->setObjectName(QString::fromUtf8("filler_2"));

        gridLayout->addWidget(filler_2, 7, 1, 1, 1);

        filler_3 = new QLabel(Power);
        filler_3->setObjectName(QString::fromUtf8("filler_3"));

        gridLayout->addWidget(filler_3, 8, 1, 1, 1);


        horizontalLayout_2->addWidget(Power);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        pptGridLayout = new QGridLayout(groupBox);
        pptGridLayout->setObjectName(QString::fromUtf8("pptGridLayout"));
        pptGridLayout->setHorizontalSpacing(10);
        pptGridLayout->setVerticalSpacing(2);
        pptGridLayout->setContentsMargins(3, 5, 3, 5);
        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_29, 0, 1, 1, 1);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_30, 0, 2, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_31, 0, 3, 1, 1);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_32, 0, 4, 1, 1);

        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_33, 0, 5, 1, 1);

        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pptGridLayout->addWidget(label_34, 0, 6, 1, 1);

        label_37 = new QLabel(groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        pptGridLayout->addWidget(label_37, 1, 0, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        pptGridLayout->addWidget(label_22, 2, 0, 1, 1);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        pptGridLayout->addWidget(label_23, 3, 0, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        pptGridLayout->addWidget(label_24, 4, 0, 1, 1);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        pptGridLayout->addWidget(label_25, 5, 0, 1, 1);

        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        pptGridLayout->addWidget(label_35, 6, 0, 1, 1);

        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        pptGridLayout->addWidget(label_36, 7, 0, 1, 1);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        pptGridLayout->addWidget(label_26, 8, 0, 1, 1);

        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        pptGridLayout->addWidget(label_27, 9, 0, 1, 1);

        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        pptGridLayout->addWidget(label_28, 10, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ArissatTlm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ArissatTlm);
    } // setupUi

    void retranslateUi(QWidget *ArissatTlm)
    {
        ArissatTlm->setWindowTitle(QApplication::translate("ArissatTlm", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        metLabel->setToolTip(QApplication::translate("ArissatTlm", "Mission elapsed time\n"
"(can be reset from time to time)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        metLabel->setText(QApplication::translate("ArissatTlm", "MET:  000d 00:00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        frameCountLabel->setToolTip(QApplication::translate("ArissatTlm", "Telemetry frame counter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        frameCountLabel->setText(QApplication::translate("ArissatTlm", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        modeLabel->setToolTip(QApplication::translate("ArissatTlm", "Sapcecraft mode. Can be one of:\n"
"- High Power\n"
"- Low Power\n"
"- Emergency Power\n"
"- TX inhibit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        modeLabel->setText(QApplication::translate("ArissatTlm", "---", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Temperatures->setTitle(QApplication::translate("ArissatTlm", "Temperatures", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_1->setToolTip(QApplication::translate("ArissatTlm", "RF module internal temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_1->setText(QApplication::translate("ArissatTlm", "RF internal", 0, QApplication::UnicodeUTF8));
        tempRfMod->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("ArissatTlm", "IHU enclosure temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("ArissatTlm", "IHU enclosure", 0, QApplication::UnicodeUTF8));
        tempIhuEnc->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("ArissatTlm", "Battery temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("ArissatTlm", "Battery", 0, QApplication::UnicodeUTF8));
        tempBattery->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("ArissatTlm", "PSU PCB temperature inside the enclosure", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("ArissatTlm", "PSU PCB", 0, QApplication::UnicodeUTF8));
        tempPsu->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("ArissatTlm", "IHU PCB temperature inside the enclosure", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("ArissatTlm", "IHU PCB", 0, QApplication::UnicodeUTF8));
        tempIhu->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("ArissatTlm", "Top camera temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ArissatTlm", "Top cam.", 0, QApplication::UnicodeUTF8));
        tempCamTop->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("ArissatTlm", "Bottom camera temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("ArissatTlm", "Bottom cam.", 0, QApplication::UnicodeUTF8));
        tempCamBottom->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("ArissatTlm", "Control panel internal temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ArissatTlm", "Ctl Panel", 0, QApplication::UnicodeUTF8));
        tempCtl->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("ArissatTlm", "Kursk experiment internal temperature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ArissatTlm", "Experiment", 0, QApplication::UnicodeUTF8));
        tempExp->setText(QApplication::translate("ArissatTlm", "0 \302\260C", 0, QApplication::UnicodeUTF8));
        Battery->setTitle(QApplication::translate("ArissatTlm", "Battery", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ArissatTlm", "Status", 0, QApplication::UnicodeUTF8));
        battState->setText(QApplication::translate("ArissatTlm", "Discharging", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ArissatTlm", "Voltage", 0, QApplication::UnicodeUTF8));
        battVolt->setText(QApplication::translate("ArissatTlm", "00.000 V", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ArissatTlm", "Current", 0, QApplication::UnicodeUTF8));
        battCurrent->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("ArissatTlm", "2.5V center current reference (eng)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("ArissatTlm", "PSU Vdd", 0, QApplication::UnicodeUTF8));
        battVdd->setText(QApplication::translate("ArissatTlm", "0.000 V", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("ArissatTlm", "2.5V center current reference (raw)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("ArissatTlm", "2.5V ref", 0, QApplication::UnicodeUTF8));
        battVref->setText(QApplication::translate("ArissatTlm", "0x000", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_19->setToolTip(QApplication::translate("ArissatTlm", "Flight total net coulombs moved into or out of the battery", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("ArissatTlm", "Net chrg", 0, QApplication::UnicodeUTF8));
        battCharge->setText(QApplication::translate("ArissatTlm", "0 C", 0, QApplication::UnicodeUTF8));
        Power->setTitle(QApplication::translate("ArissatTlm", "Power Consumption", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ArissatTlm", "IHU", 0, QApplication::UnicodeUTF8));
        ihuStatus->setText(QApplication::translate("ArissatTlm", "OFF", 0, QApplication::UnicodeUTF8));
        ihuAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ArissatTlm", "SDX", 0, QApplication::UnicodeUTF8));
        sdxStatus->setText(QApplication::translate("ArissatTlm", "OFF", 0, QApplication::UnicodeUTF8));
        sdxAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("ArissatTlm", "Experiment power", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("ArissatTlm", "Exp", 0, QApplication::UnicodeUTF8));
        expStatus->setText(QApplication::translate("ArissatTlm", "OFF", 0, QApplication::UnicodeUTF8));
        expAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("ArissatTlm", "Camera power", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("ArissatTlm", "Cam", 0, QApplication::UnicodeUTF8));
        camStatus->setText(QApplication::translate("ArissatTlm", "----", 0, QApplication::UnicodeUTF8));
        camAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ArissatTlm", "5 volt", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ArissatTlm", "8 volt", 0, QApplication::UnicodeUTF8));
        psu5vAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
        psu8vAmp->setText(QApplication::translate("ArissatTlm", "0.000 A", 0, QApplication::UnicodeUTF8));
        psu5vStatus->setText(QApplication::translate("ArissatTlm", "OFF", 0, QApplication::UnicodeUTF8));
        psu8vStatus->setText(QApplication::translate("ArissatTlm", "OFF", 0, QApplication::UnicodeUTF8));
        filler_1->setText(QString());
        filler_2->setText(QString());
        filler_3->setText(QString());
        groupBox->setTitle(QApplication::translate("ArissatTlm", "PPT Status", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ArissatTlm", "+X PPT 1", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ArissatTlm", "-X PPT 2", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ArissatTlm", "+Z PPT 3", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ArissatTlm", "-Y PPT 4", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ArissatTlm", "+Y PPT 5", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ArissatTlm", "-Z PPT 6", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ArissatTlm", "Panel Energy", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ArissatTlm", "Panel Voltage", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ArissatTlm", "Panel Current", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ArissatTlm", "Panel Temp", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ArissatTlm", "Inductor Temp", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ArissatTlm", "Diode Temp", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ArissatTlm", "FET Temp", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ArissatTlm", "PWM Setpoint", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ArissatTlm", "Age", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ArissatTlm", "Corrupt pkts", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("ArissatTlm", "System", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tab_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ArissatTlm", "PSU Debug", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tab_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ArissatTlm", "IHU Debug", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ArissatTlm: public Ui_ArissatTlm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARISSATTLM_H
