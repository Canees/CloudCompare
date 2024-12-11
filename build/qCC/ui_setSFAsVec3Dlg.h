/********************************************************************************
** Form generated from reading UI file 'setSFAsVec3Dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSFASVEC3DLG_H
#define UI_SETSFASVEC3DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetSFsAsVec3Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *xLabel;
    QComboBox *xComboBox;
    QLabel *yLabel;
    QComboBox *yComboBox;
    QLabel *zLabel;
    QComboBox *zComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetSFsAsVec3Dialog)
    {
        if (SetSFsAsVec3Dialog->objectName().isEmpty())
            SetSFsAsVec3Dialog->setObjectName(QString::fromUtf8("SetSFsAsVec3Dialog"));
        SetSFsAsVec3Dialog->resize(500, 80);
        verticalLayout = new QVBoxLayout(SetSFsAsVec3Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xLabel = new QLabel(SetSFsAsVec3Dialog);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xLabel->sizePolicy().hasHeightForWidth());
        xLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(xLabel);

        xComboBox = new QComboBox(SetSFsAsVec3Dialog);
        xComboBox->setObjectName(QString::fromUtf8("xComboBox"));

        horizontalLayout->addWidget(xComboBox);

        yLabel = new QLabel(SetSFsAsVec3Dialog);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        sizePolicy.setHeightForWidth(yLabel->sizePolicy().hasHeightForWidth());
        yLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(yLabel);

        yComboBox = new QComboBox(SetSFsAsVec3Dialog);
        yComboBox->setObjectName(QString::fromUtf8("yComboBox"));

        horizontalLayout->addWidget(yComboBox);

        zLabel = new QLabel(SetSFsAsVec3Dialog);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        sizePolicy.setHeightForWidth(zLabel->sizePolicy().hasHeightForWidth());
        zLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(zLabel);

        zComboBox = new QComboBox(SetSFsAsVec3Dialog);
        zComboBox->setObjectName(QString::fromUtf8("zComboBox"));

        horizontalLayout->addWidget(zComboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SetSFsAsVec3Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetSFsAsVec3Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetSFsAsVec3Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetSFsAsVec3Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetSFsAsVec3Dialog);
    } // setupUi

    void retranslateUi(QDialog *SetSFsAsVec3Dialog)
    {
        SetSFsAsVec3Dialog->setWindowTitle(QCoreApplication::translate("SetSFsAsVec3Dialog", "Set SFs as Vec3D", nullptr));
        xLabel->setText(QCoreApplication::translate("SetSFsAsVec3Dialog", "X", nullptr));
        yLabel->setText(QCoreApplication::translate("SetSFsAsVec3Dialog", "Y", nullptr));
        zLabel->setText(QCoreApplication::translate("SetSFsAsVec3Dialog", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetSFsAsVec3Dialog: public Ui_SetSFsAsVec3Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSFASVEC3DLG_H
