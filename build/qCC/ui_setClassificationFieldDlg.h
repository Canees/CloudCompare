/********************************************************************************
** Form generated from reading UI file 'setClassificationFieldDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETCLASSIFICATIONFIELDDLG_H
#define UI_SETCLASSIFICATIONFIELDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ccSetClassificationField
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_classification;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ccSetClassificationField)
    {
        if (ccSetClassificationField->objectName().isEmpty())
            ccSetClassificationField->setObjectName(QString::fromUtf8("ccSetClassificationField"));
        ccSetClassificationField->resize(184, 70);
        verticalLayout = new QVBoxLayout(ccSetClassificationField);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ccSetClassificationField);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox_classification = new QSpinBox(ccSetClassificationField);
        spinBox_classification->setObjectName(QString::fromUtf8("spinBox_classification"));
        spinBox_classification->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(spinBox_classification);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ccSetClassificationField);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ccSetClassificationField);
        QObject::connect(buttonBox, SIGNAL(accepted()), ccSetClassificationField, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ccSetClassificationField, SLOT(reject()));

        QMetaObject::connectSlotsByName(ccSetClassificationField);
    } // setupUi

    void retranslateUi(QDialog *ccSetClassificationField)
    {
        ccSetClassificationField->setWindowTitle(QCoreApplication::translate("ccSetClassificationField", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ccSetClassificationField", "Classification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ccSetClassificationField: public Ui_ccSetClassificationField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETCLASSIFICATIONFIELDDLG_H
