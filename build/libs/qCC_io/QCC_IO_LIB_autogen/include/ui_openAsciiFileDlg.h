/********************************************************************************
** Form generated from reading UI file 'openAsciiFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENASCIIFILEDLG_H
#define UI_OPENASCIIFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsciiOpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditFileName;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QToolButton *resetColumnsToolButton;
    QSpacerItem *horizontalSpacer;
    QLabel *headerLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditSeparator;
    QLabel *asciiCodeLabel;
    QHBoxLayout *hboxLayout;
    QToolButton *toolButtonShortcutSpace;
    QToolButton *toolButtonShortcutComma;
    QToolButton *toolButtonShortcutSemicolon;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *commaDecimalCheckBox;
    QCheckBox *show2DLabelsCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBoxSkipLines;
    QLabel *commentLinesSkippedLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *extractSFNamesFrom1stLineCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *quaternionFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *quatCSScaleDoubleSpinBox;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *maxCloudSizeDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *applyButton;
    QPushButton *applyAllButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AsciiOpenDialog)
    {
        if (AsciiOpenDialog->objectName().isEmpty())
            AsciiOpenDialog->setObjectName(QString::fromUtf8("AsciiOpenDialog"));
        AsciiOpenDialog->resize(1008, 657);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AsciiOpenDialog->sizePolicy().hasHeightForWidth());
        AsciiOpenDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AsciiOpenDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(AsciiOpenDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditFileName = new QLineEdit(AsciiOpenDialog);
        lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditFileName->sizePolicy().hasHeightForWidth());
        lineEditFileName->setSizePolicy(sizePolicy1);
        lineEditFileName->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditFileName);


        verticalLayout->addLayout(horizontalLayout_2);

        frame = new QFrame(AsciiOpenDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label);

        resetColumnsToolButton = new QToolButton(frame);
        resetColumnsToolButton->setObjectName(QString::fromUtf8("resetColumnsToolButton"));

        horizontalLayout_6->addWidget(resetColumnsToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        headerLabel = new QLabel(AsciiOpenDialog);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setStyleSheet(QString::fromUtf8("color: grey;"));

        verticalLayout->addWidget(headerLabel);

        scrollArea = new QScrollArea(AsciiOpenDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 990, 475));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(AsciiOpenDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditSeparator = new QLineEdit(AsciiOpenDialog);
        lineEditSeparator->setObjectName(QString::fromUtf8("lineEditSeparator"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditSeparator->sizePolicy().hasHeightForWidth());
        lineEditSeparator->setSizePolicy(sizePolicy3);
        lineEditSeparator->setMaximumSize(QSize(30, 16777215));
        lineEditSeparator->setMaxLength(1);

        horizontalLayout->addWidget(lineEditSeparator);

        asciiCodeLabel = new QLabel(AsciiOpenDialog);
        asciiCodeLabel->setObjectName(QString::fromUtf8("asciiCodeLabel"));

        horizontalLayout->addWidget(asciiCodeLabel);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        toolButtonShortcutSpace = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutSpace->setObjectName(QString::fromUtf8("toolButtonShortcutSpace"));

        hboxLayout->addWidget(toolButtonShortcutSpace);

        toolButtonShortcutComma = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutComma->setObjectName(QString::fromUtf8("toolButtonShortcutComma"));
        toolButtonShortcutComma->setText(QString::fromUtf8(","));

        hboxLayout->addWidget(toolButtonShortcutComma);

        toolButtonShortcutSemicolon = new QToolButton(AsciiOpenDialog);
        toolButtonShortcutSemicolon->setObjectName(QString::fromUtf8("toolButtonShortcutSemicolon"));
        toolButtonShortcutSemicolon->setText(QString::fromUtf8(";"));

        hboxLayout->addWidget(toolButtonShortcutSemicolon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        commaDecimalCheckBox = new QCheckBox(AsciiOpenDialog);
        commaDecimalCheckBox->setObjectName(QString::fromUtf8("commaDecimalCheckBox"));

        hboxLayout->addWidget(commaDecimalCheckBox);

        show2DLabelsCheckBox = new QCheckBox(AsciiOpenDialog);
        show2DLabelsCheckBox->setObjectName(QString::fromUtf8("show2DLabelsCheckBox"));

        hboxLayout->addWidget(show2DLabelsCheckBox);


        horizontalLayout->addLayout(hboxLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(AsciiOpenDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBoxSkipLines = new QSpinBox(AsciiOpenDialog);
        spinBoxSkipLines->setObjectName(QString::fromUtf8("spinBoxSkipLines"));
        spinBoxSkipLines->setMaximum(999);

        horizontalLayout_3->addWidget(spinBoxSkipLines);

        commentLinesSkippedLabel = new QLabel(AsciiOpenDialog);
        commentLinesSkippedLabel->setObjectName(QString::fromUtf8("commentLinesSkippedLabel"));

        horizontalLayout_3->addWidget(commentLinesSkippedLabel);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        extractSFNamesFrom1stLineCheckBox = new QCheckBox(AsciiOpenDialog);
        extractSFNamesFrom1stLineCheckBox->setObjectName(QString::fromUtf8("extractSFNamesFrom1stLineCheckBox"));
        extractSFNamesFrom1stLineCheckBox->setEnabled(false);

        horizontalLayout_3->addWidget(extractSFNamesFrom1stLineCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        quaternionFrame = new QFrame(AsciiOpenDialog);
        quaternionFrame->setObjectName(QString::fromUtf8("quaternionFrame"));
        sizePolicy2.setHeightForWidth(quaternionFrame->sizePolicy().hasHeightForWidth());
        quaternionFrame->setSizePolicy(sizePolicy2);
        quaternionFrame->setMinimumSize(QSize(0, 0));
        quaternionFrame->setFrameShape(QFrame::StyledPanel);
        quaternionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(quaternionFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(quaternionFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        quatCSScaleDoubleSpinBox = new QDoubleSpinBox(quaternionFrame);
        quatCSScaleDoubleSpinBox->setObjectName(QString::fromUtf8("quatCSScaleDoubleSpinBox"));
        quatCSScaleDoubleSpinBox->setDecimals(6);
        quatCSScaleDoubleSpinBox->setMinimum(0.000001000000000);
        quatCSScaleDoubleSpinBox->setMaximum(1000000.000000000000000);
        quatCSScaleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(quatCSScaleDoubleSpinBox);


        horizontalLayout_3->addWidget(quaternionFrame);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonWidget = new QWidget(AsciiOpenDialog);
        buttonWidget->setObjectName(QString::fromUtf8("buttonWidget"));
        horizontalLayout_5 = new QHBoxLayout(buttonWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(buttonWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        maxCloudSizeDoubleSpinBox = new QDoubleSpinBox(buttonWidget);
        maxCloudSizeDoubleSpinBox->setObjectName(QString::fromUtf8("maxCloudSizeDoubleSpinBox"));
        maxCloudSizeDoubleSpinBox->setDecimals(2);
        maxCloudSizeDoubleSpinBox->setMinimum(0.010000000000000);
        maxCloudSizeDoubleSpinBox->setMaximum(1000000.000000000000000);
        maxCloudSizeDoubleSpinBox->setValue(128.000000000000000);

        horizontalLayout_5->addWidget(maxCloudSizeDoubleSpinBox);

        horizontalSpacer_5 = new QSpacerItem(157, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        applyButton = new QPushButton(buttonWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        applyAllButton = new QPushButton(buttonWidget);
        applyAllButton->setObjectName(QString::fromUtf8("applyAllButton"));

        horizontalLayout_5->addWidget(applyAllButton);

        cancelButton = new QPushButton(buttonWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);


        verticalLayout->addWidget(buttonWidget);


        retranslateUi(AsciiOpenDialog);

        QMetaObject::connectSlotsByName(AsciiOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiOpenDialog)
    {
        AsciiOpenDialog->setWindowTitle(QCoreApplication::translate("AsciiOpenDialog", "Open Ascii File", nullptr));
        label_3->setText(QCoreApplication::translate("AsciiOpenDialog", "Source", nullptr));
        label->setText(QCoreApplication::translate("AsciiOpenDialog", "Choose an attribute for each column:", nullptr));
#if QT_CONFIG(statustip)
        resetColumnsToolButton->setStatusTip(QCoreApplication::translate("AsciiOpenDialog", "Resets all column roles", nullptr));
#endif // QT_CONFIG(statustip)
        resetColumnsToolButton->setText(QCoreApplication::translate("AsciiOpenDialog", "reset all", nullptr));
        headerLabel->setText(QCoreApplication::translate("AsciiOpenDialog", "Header:", nullptr));
        label_2->setText(QCoreApplication::translate("AsciiOpenDialog", "Separator", nullptr));
        asciiCodeLabel->setText(QCoreApplication::translate("AsciiOpenDialog", "(ASCII code:%i)", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonShortcutSpace->setToolTip(QCoreApplication::translate("AsciiOpenDialog", "space", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonShortcutSpace->setText(QCoreApplication::translate("AsciiOpenDialog", "whitespace ", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonShortcutComma->setToolTip(QCoreApplication::translate("AsciiOpenDialog", "comma", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toolButtonShortcutSemicolon->setToolTip(QCoreApplication::translate("AsciiOpenDialog", "semicolon", nullptr));
#endif // QT_CONFIG(tooltip)
        commaDecimalCheckBox->setText(QCoreApplication::translate("AsciiOpenDialog", "use comma as decimal character", nullptr));
#if QT_CONFIG(tooltip)
        show2DLabelsCheckBox->setToolTip(QCoreApplication::translate("AsciiOpenDialog", "Show labels in 2D (not recommended over 50).\n"
"Otherwise labels are shown in 3D.", nullptr));
#endif // QT_CONFIG(tooltip)
        show2DLabelsCheckBox->setText(QCoreApplication::translate("AsciiOpenDialog", "Show labels in 2D", nullptr));
        label_4->setText(QCoreApplication::translate("AsciiOpenDialog", "Skip lines", nullptr));
        commentLinesSkippedLabel->setText(QCoreApplication::translate("AsciiOpenDialog", "+ comment/header lines skipped: 0", nullptr));
        extractSFNamesFrom1stLineCheckBox->setText(QCoreApplication::translate("AsciiOpenDialog", "extract scalar field names from first line", nullptr));
        label_6->setText(QCoreApplication::translate("AsciiOpenDialog", "C.S. entities scale", nullptr));
#if QT_CONFIG(tooltip)
        quatCSScaleDoubleSpinBox->setToolTip(QCoreApplication::translate("AsciiOpenDialog", "Coordinate System entities scale\n"
"(CC will create one such entity for each loaded quaternion)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("AsciiOpenDialog", "Max number of points per cloud", nullptr));
        maxCloudSizeDoubleSpinBox->setSuffix(QCoreApplication::translate("AsciiOpenDialog", " Million", nullptr));
        applyButton->setText(QCoreApplication::translate("AsciiOpenDialog", "Apply", nullptr));
        applyAllButton->setText(QCoreApplication::translate("AsciiOpenDialog", "Apply all", nullptr));
        cancelButton->setText(QCoreApplication::translate("AsciiOpenDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsciiOpenDialog: public Ui_AsciiOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENASCIIFILEDLG_H
