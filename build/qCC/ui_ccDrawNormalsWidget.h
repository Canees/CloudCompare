/********************************************************************************
** Form generated from reading UI file 'ccDrawNormalsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCDRAWNORMALSWIDGET_H
#define UI_CCDRAWNORMALSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ccDrawNormalsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *cloudNameLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *normalLengthDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonYellow;
    QPushButton *pushButtonRed;
    QPushButton *pushButtonGreen;
    QPushButton *pushButtonBlue;
    QPushButton *pushButtonBlack;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ccDrawNormalsWidget)
    {
        if (ccDrawNormalsWidget->objectName().isEmpty())
            ccDrawNormalsWidget->setObjectName(QString::fromUtf8("ccDrawNormalsWidget"));
        ccDrawNormalsWidget->resize(230, 100);
        gridLayout = new QGridLayout(ccDrawNormalsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cloudNameLabel = new QLabel(ccDrawNormalsWidget);
        cloudNameLabel->setObjectName(QString::fromUtf8("cloudNameLabel"));

        gridLayout->addWidget(cloudNameLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ccDrawNormalsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        normalLengthDoubleSpinBox = new QDoubleSpinBox(ccDrawNormalsWidget);
        normalLengthDoubleSpinBox->setObjectName(QString::fromUtf8("normalLengthDoubleSpinBox"));
        normalLengthDoubleSpinBox->setDecimals(6);
        normalLengthDoubleSpinBox->setMinimum(0.000001000000000);
        normalLengthDoubleSpinBox->setMaximum(1000000.000000000000000);
        normalLengthDoubleSpinBox->setSingleStep(0.100000000000000);
        normalLengthDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(normalLengthDoubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonYellow = new QPushButton(ccDrawNormalsWidget);
        pushButtonYellow->setObjectName(QString::fromUtf8("pushButtonYellow"));
        pushButtonYellow->setStyleSheet(QString::fromUtf8("background-color:yellow"));
        pushButtonYellow->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonYellow);

        pushButtonRed = new QPushButton(ccDrawNormalsWidget);
        pushButtonRed->setObjectName(QString::fromUtf8("pushButtonRed"));
        pushButtonRed->setStyleSheet(QString::fromUtf8("background-color:red"));
        pushButtonRed->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonRed);

        pushButtonGreen = new QPushButton(ccDrawNormalsWidget);
        pushButtonGreen->setObjectName(QString::fromUtf8("pushButtonGreen"));
        pushButtonGreen->setStyleSheet(QString::fromUtf8("background-color:green"));
        pushButtonGreen->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonGreen);

        pushButtonBlue = new QPushButton(ccDrawNormalsWidget);
        pushButtonBlue->setObjectName(QString::fromUtf8("pushButtonBlue"));
        pushButtonBlue->setStyleSheet(QString::fromUtf8("background-color:blue"));
        pushButtonBlue->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonBlue);

        pushButtonBlack = new QPushButton(ccDrawNormalsWidget);
        pushButtonBlack->setObjectName(QString::fromUtf8("pushButtonBlack"));
        pushButtonBlack->setStyleSheet(QString::fromUtf8("background-color:black"));
        pushButtonBlack->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonBlack);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);


        retranslateUi(ccDrawNormalsWidget);

        QMetaObject::connectSlotsByName(ccDrawNormalsWidget);
    } // setupUi

    void retranslateUi(QWidget *ccDrawNormalsWidget)
    {
        ccDrawNormalsWidget->setWindowTitle(QCoreApplication::translate("ccDrawNormalsWidget", "Normals as lines", nullptr));
        cloudNameLabel->setText(QCoreApplication::translate("ccDrawNormalsWidget", "-", nullptr));
        label->setText(QCoreApplication::translate("ccDrawNormalsWidget", "Normal length", nullptr));
        pushButtonYellow->setText(QString());
        pushButtonRed->setText(QString());
        pushButtonGreen->setText(QString());
        pushButtonBlue->setText(QString());
        pushButtonBlack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ccDrawNormalsWidget: public Ui_ccDrawNormalsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCDRAWNORMALSWIDGET_H
