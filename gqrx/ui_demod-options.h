/********************************************************************************
** Form generated from reading UI file 'demod-options.ui'
**
** Created: Sat Oct 13 16:17:51 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOD_2D_OPTIONS_H
#define UI_DEMOD_2D_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDemodOptions
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *demodOptions;
    QWidget *demodNoOpt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *demodFmOpt;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *pagedemodFormLayout2;
    QLabel *maxdevLabel;
    QComboBox *maxdevSelector;
    QLabel *emphLabel;
    QComboBox *emphSelector;

    void setupUi(QDialog *CDemodOptions)
    {
        if (CDemodOptions->objectName().isEmpty())
            CDemodOptions->setObjectName(QString::fromUtf8("CDemodOptions"));
        CDemodOptions->resize(223, 110);
        verticalLayout = new QVBoxLayout(CDemodOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        demodOptions = new QStackedWidget(CDemodOptions);
        demodOptions->setObjectName(QString::fromUtf8("demodOptions"));
        demodOptions->setMinimumSize(QSize(0, 72));
        demodNoOpt = new QWidget();
        demodNoOpt->setObjectName(QString::fromUtf8("demodNoOpt"));
        horizontalLayout = new QHBoxLayout(demodNoOpt);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(demodNoOpt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        demodOptions->addWidget(demodNoOpt);
        demodFmOpt = new QWidget();
        demodFmOpt->setObjectName(QString::fromUtf8("demodFmOpt"));
        verticalLayout_2 = new QVBoxLayout(demodFmOpt);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pagedemodFormLayout2 = new QFormLayout();
        pagedemodFormLayout2->setObjectName(QString::fromUtf8("pagedemodFormLayout2"));
        pagedemodFormLayout2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pagedemodFormLayout2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pagedemodFormLayout2->setHorizontalSpacing(10);
        pagedemodFormLayout2->setVerticalSpacing(5);
        pagedemodFormLayout2->setContentsMargins(5, -1, 5, 5);
        maxdevLabel = new QLabel(demodFmOpt);
        maxdevLabel->setObjectName(QString::fromUtf8("maxdevLabel"));
        maxdevLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pagedemodFormLayout2->setWidget(0, QFormLayout::LabelRole, maxdevLabel);

        maxdevSelector = new QComboBox(demodFmOpt);
        maxdevSelector->setObjectName(QString::fromUtf8("maxdevSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxdevSelector->sizePolicy().hasHeightForWidth());
        maxdevSelector->setSizePolicy(sizePolicy);
        maxdevSelector->setMinimumSize(QSize(0, 24));

        pagedemodFormLayout2->setWidget(0, QFormLayout::FieldRole, maxdevSelector);

        emphLabel = new QLabel(demodFmOpt);
        emphLabel->setObjectName(QString::fromUtf8("emphLabel"));
        emphLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pagedemodFormLayout2->setWidget(1, QFormLayout::LabelRole, emphLabel);

        emphSelector = new QComboBox(demodFmOpt);
        emphSelector->setObjectName(QString::fromUtf8("emphSelector"));
        sizePolicy.setHeightForWidth(emphSelector->sizePolicy().hasHeightForWidth());
        emphSelector->setSizePolicy(sizePolicy);
        emphSelector->setMinimumSize(QSize(0, 24));
        emphSelector->setEditable(false);

        pagedemodFormLayout2->setWidget(1, QFormLayout::FieldRole, emphSelector);


        verticalLayout_2->addLayout(pagedemodFormLayout2);

        demodOptions->addWidget(demodFmOpt);

        verticalLayout->addWidget(demodOptions);


        retranslateUi(CDemodOptions);

        demodOptions->setCurrentIndex(1);
        maxdevSelector->setCurrentIndex(1);
        emphSelector->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(CDemodOptions);
    } // setupUi

    void retranslateUi(QDialog *CDemodOptions)
    {
        CDemodOptions->setWindowTitle(QApplication::translate("CDemodOptions", "Mode options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDemodOptions", "No options for\n"
"this demodulator", 0, QApplication::UnicodeUTF8));
        maxdevLabel->setText(QApplication::translate("CDemodOptions", "Max dev", 0, QApplication::UnicodeUTF8));
        maxdevSelector->clear();
        maxdevSelector->insertItems(0, QStringList()
         << QApplication::translate("CDemodOptions", "Voice (2.5k)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "Voice (5k)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "APT (17k)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "BC (75k)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        maxdevSelector->setToolTip(QApplication::translate("CDemodOptions", "Maximum FM deviation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        maxdevSelector->setStatusTip(QApplication::translate("CDemodOptions", "Maximum FM deviation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        emphLabel->setText(QApplication::translate("CDemodOptions", "Tau", 0, QApplication::UnicodeUTF8));
        emphSelector->clear();
        emphSelector->insertItems(0, QStringList()
         << QApplication::translate("CDemodOptions", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "25 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "50 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "75 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "100 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "250 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "530 \316\274s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDemodOptions", "1 ms", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        emphSelector->setToolTip(QApplication::translate("CDemodOptions", "Time constant for the FM de-emphasis IIR filter.\n"
"For narrow band FM use 530 \316\274s.\n"
"50 \316\274s and 75 \316\274s are used for broadcast FM depending on region.\n"
"For digital modes it is best to switch it off.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        emphSelector->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class CDemodOptions: public Ui_CDemodOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOD_2D_OPTIONS_H
