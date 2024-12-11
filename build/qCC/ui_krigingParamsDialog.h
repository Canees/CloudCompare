/********************************************************************************
** Form generated from reading UI file 'krigingParamsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KRIGINGPARAMSDIALOG_H
#define UI_KRIGINGPARAMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KrigingParamsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *modelComboBox;
    QLabel *label_5;
    QSpinBox *knnSpinBox;
    QGroupBox *krigeParamsGroupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QDoubleSpinBox *nuggetDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *sillDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *rangeDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KrigingParamsDialog)
    {
        if (KrigingParamsDialog->objectName().isEmpty())
            KrigingParamsDialog->setObjectName(QString::fromUtf8("KrigingParamsDialog"));
        KrigingParamsDialog->resize(250, 230);
        verticalLayout = new QVBoxLayout(KrigingParamsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(KrigingParamsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        modelComboBox = new QComboBox(frame);
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->addItem(QString());
        modelComboBox->setObjectName(QString::fromUtf8("modelComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, modelComboBox);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        knnSpinBox = new QSpinBox(frame);
        knnSpinBox->setObjectName(QString::fromUtf8("knnSpinBox"));
        knnSpinBox->setMinimum(4);
        knnSpinBox->setMaximum(1000);
        knnSpinBox->setSingleStep(4);
        knnSpinBox->setValue(8);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, knnSpinBox);


        verticalLayout->addWidget(frame);

        krigeParamsGroupBox = new QGroupBox(KrigingParamsDialog);
        krigeParamsGroupBox->setObjectName(QString::fromUtf8("krigeParamsGroupBox"));
        krigeParamsGroupBox->setCheckable(true);
        krigeParamsGroupBox->setChecked(false);
        formLayout = new QFormLayout(krigeParamsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(krigeParamsGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        nuggetDoubleSpinBox = new QDoubleSpinBox(krigeParamsGroupBox);
        nuggetDoubleSpinBox->setObjectName(QString::fromUtf8("nuggetDoubleSpinBox"));
        nuggetDoubleSpinBox->setDecimals(6);
        nuggetDoubleSpinBox->setMinimum(0.000000000000000);
        nuggetDoubleSpinBox->setMaximum(1000000.000000000000000);
        nuggetDoubleSpinBox->setValue(0.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, nuggetDoubleSpinBox);

        label_2 = new QLabel(krigeParamsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sillDoubleSpinBox = new QDoubleSpinBox(krigeParamsGroupBox);
        sillDoubleSpinBox->setObjectName(QString::fromUtf8("sillDoubleSpinBox"));
        sillDoubleSpinBox->setDecimals(6);
        sillDoubleSpinBox->setMinimum(0.000000000000000);
        sillDoubleSpinBox->setMaximum(1000000.000000000000000);
        sillDoubleSpinBox->setValue(0.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, sillDoubleSpinBox);

        label_4 = new QLabel(krigeParamsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        rangeDoubleSpinBox = new QDoubleSpinBox(krigeParamsGroupBox);
        rangeDoubleSpinBox->setObjectName(QString::fromUtf8("rangeDoubleSpinBox"));
        rangeDoubleSpinBox->setDecimals(6);
        rangeDoubleSpinBox->setMinimum(0.000001000000000);
        rangeDoubleSpinBox->setMaximum(1000000.000000000000000);
        rangeDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, rangeDoubleSpinBox);


        verticalLayout->addWidget(krigeParamsGroupBox);

        verticalSpacer = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(KrigingParamsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(KrigingParamsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KrigingParamsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KrigingParamsDialog, SLOT(reject()));

        modelComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KrigingParamsDialog);
    } // setupUi

    void retranslateUi(QDialog *KrigingParamsDialog)
    {
        KrigingParamsDialog->setWindowTitle(QCoreApplication::translate("KrigingParamsDialog", "Kriging parameters", nullptr));
        label->setText(QCoreApplication::translate("KrigingParamsDialog", "Model", nullptr));
        modelComboBox->setItemText(0, QCoreApplication::translate("KrigingParamsDialog", "Spherical", nullptr));
        modelComboBox->setItemText(1, QCoreApplication::translate("KrigingParamsDialog", "Exponential", nullptr));
        modelComboBox->setItemText(2, QCoreApplication::translate("KrigingParamsDialog", "Gaussian", nullptr));

        label_5->setText(QCoreApplication::translate("KrigingParamsDialog", "kNN", nullptr));
#if QT_CONFIG(statustip)
        knnSpinBox->setStatusTip(QCoreApplication::translate("KrigingParamsDialog", "Maximum number of neighbors", nullptr));
#endif // QT_CONFIG(statustip)
        krigeParamsGroupBox->setTitle(QCoreApplication::translate("KrigingParamsDialog", "Manual altitude parameters", nullptr));
        label_3->setText(QCoreApplication::translate("KrigingParamsDialog", "Nugget", nullptr));
#if QT_CONFIG(statustip)
        nuggetDoubleSpinBox->setStatusTip(QCoreApplication::translate("KrigingParamsDialog", "Nugget: y-intercept of the variogram", nullptr));
#endif // QT_CONFIG(statustip)
        label_2->setText(QCoreApplication::translate("KrigingParamsDialog", "Sill", nullptr));
#if QT_CONFIG(statustip)
        sillDoubleSpinBox->setStatusTip(QCoreApplication::translate("KrigingParamsDialog", "Sill: total variance contribution", nullptr));
#endif // QT_CONFIG(statustip)
        label_4->setText(QCoreApplication::translate("KrigingParamsDialog", "Range", nullptr));
#if QT_CONFIG(statustip)
        rangeDoubleSpinBox->setStatusTip(QCoreApplication::translate("KrigingParamsDialog", "Range: distance after which the variogram levels off", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class KrigingParamsDialog: public Ui_KrigingParamsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRIGINGPARAMSDIALOG_H
