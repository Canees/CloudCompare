/********************************************************************************
** Form generated from reading UI file 'graphicalSegmentationOptionsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALSEGMENTATIONOPTIONSDLG_H
#define UI_GRAPHICALSEGMENTATIONOPTIONSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GraphicalSegmentationOptionsDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QLineEdit *remainingTextLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *segmentedTextLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GraphicalSegmentationOptionsDlg)
    {
        if (GraphicalSegmentationOptionsDlg->objectName().isEmpty())
            GraphicalSegmentationOptionsDlg->setObjectName(QString::fromUtf8("GraphicalSegmentationOptionsDlg"));
        GraphicalSegmentationOptionsDlg->resize(338, 132);
        verticalLayout_2 = new QVBoxLayout(GraphicalSegmentationOptionsDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(GraphicalSegmentationOptionsDlg);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMinimumSize(QSize(320, 0));
        groupBox_5->setAutoFillBackground(false);
        groupBox_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 9, 9, 9);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, 0);
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        remainingTextLineEdit = new QLineEdit(groupBox_5);
        remainingTextLineEdit->setObjectName(QString::fromUtf8("remainingTextLineEdit"));
        remainingTextLineEdit->setReadOnly(false);

        horizontalLayout_6->addWidget(remainingTextLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        segmentedTextLineEdit = new QLineEdit(groupBox_5);
        segmentedTextLineEdit->setObjectName(QString::fromUtf8("segmentedTextLineEdit"));
        segmentedTextLineEdit->setReadOnly(false);

        horizontalLayout_11->addWidget(segmentedTextLineEdit);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        buttonBox = new QDialogButtonBox(GraphicalSegmentationOptionsDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(GraphicalSegmentationOptionsDlg);
        QObject::connect(buttonBox, SIGNAL(rejected()), GraphicalSegmentationOptionsDlg, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), GraphicalSegmentationOptionsDlg, SLOT(accept()));

        QMetaObject::connectSlotsByName(GraphicalSegmentationOptionsDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalSegmentationOptionsDlg)
    {
        GraphicalSegmentationOptionsDlg->setWindowTitle(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Dialog", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Additional Suffix", nullptr));
        label_10->setText(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Remaining:", nullptr));
#if QT_CONFIG(tooltip)
        remainingTextLineEdit->setToolTip(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Suffix added to the remaining cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        remainingTextLineEdit->setText(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", ".remaining", nullptr));
        label_9->setText(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Segmented:", nullptr));
#if QT_CONFIG(tooltip)
        segmentedTextLineEdit->setToolTip(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", "Suffix added to the segmented cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        segmentedTextLineEdit->setText(QCoreApplication::translate("GraphicalSegmentationOptionsDlg", ".segmented", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicalSegmentationOptionsDlg: public Ui_GraphicalSegmentationOptionsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALSEGMENTATIONOPTIONSDLG_H
