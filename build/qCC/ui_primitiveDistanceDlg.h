/********************************************************************************
** Form generated from reading UI file 'primitiveDistanceDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMITIVEDISTANCEDLG_H
#define UI_PRIMITIVEDISTANCEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_primitiveDistanceDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QCheckBox *treatPlanesAsBoundedCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *signedDistCheckBox;
    QCheckBox *flipNormalsCheckBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *primitiveDistanceDlg)
    {
        if (primitiveDistanceDlg->objectName().isEmpty())
            primitiveDistanceDlg->setObjectName(QString::fromUtf8("primitiveDistanceDlg"));
        primitiveDistanceDlg->resize(300, 200);
        verticalLayout = new QVBoxLayout(primitiveDistanceDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(primitiveDistanceDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        treatPlanesAsBoundedCheckBox = new QCheckBox(primitiveDistanceDlg);
        treatPlanesAsBoundedCheckBox->setObjectName(QString::fromUtf8("treatPlanesAsBoundedCheckBox"));

        verticalLayout->addWidget(treatPlanesAsBoundedCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        signedDistCheckBox = new QCheckBox(primitiveDistanceDlg);
        signedDistCheckBox->setObjectName(QString::fromUtf8("signedDistCheckBox"));

        horizontalLayout->addWidget(signedDistCheckBox);

        flipNormalsCheckBox = new QCheckBox(primitiveDistanceDlg);
        flipNormalsCheckBox->setObjectName(QString::fromUtf8("flipNormalsCheckBox"));
        flipNormalsCheckBox->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(flipNormalsCheckBox->sizePolicy().hasHeightForWidth());
        flipNormalsCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(flipNormalsCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(primitiveDistanceDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(primitiveDistanceDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), primitiveDistanceDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), primitiveDistanceDlg, SLOT(reject()));
        QObject::connect(signedDistCheckBox, SIGNAL(toggled(bool)), flipNormalsCheckBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(primitiveDistanceDlg);
    } // setupUi

    void retranslateUi(QDialog *primitiveDistanceDlg)
    {
        primitiveDistanceDlg->setWindowTitle(QCoreApplication::translate("primitiveDistanceDlg", "Distance to Primitive", nullptr));
        label->setText(QCoreApplication::translate("primitiveDistanceDlg", "<html><head/><body><p>[NOTE] This tool will measure the distance to the true primitive (plane, box, sphere, cylinder, or cone) instead of relying on the visual representation of the pritimive as a triangular mesh. <span style=\" font-weight:600;\">This is faster and more accurate.</span></p></body></html>", nullptr));
        treatPlanesAsBoundedCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "treat planes as bounded", nullptr));
#if QT_CONFIG(tooltip)
        signedDistCheckBox->setToolTip(QCoreApplication::translate("primitiveDistanceDlg", "compute signed distances", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        signedDistCheckBox->setStatusTip(QCoreApplication::translate("primitiveDistanceDlg", "compute signed distances", nullptr));
#endif // QT_CONFIG(statustip)
        signedDistCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "signed distances", nullptr));
        flipNormalsCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "flip normals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class primitiveDistanceDlg: public Ui_primitiveDistanceDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMITIVEDISTANCEDLG_H
