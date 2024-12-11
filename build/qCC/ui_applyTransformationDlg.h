/********************************************************************************
** Form generated from reading UI file 'applyTransformationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYTRANSFORMATIONDLG_H
#define UI_APPLYTRANSFORMATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyTransformationDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *fromFileToolButton;
    QToolButton *fromClipboardToolButton;
    QToolButton *fromDipDipDirToolButton;
    QToolButton *helpToolButton;
    QPlainTextEdit *helpTextEdit;
    QPlainTextEdit *matrixTextEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *rotAxisGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *rxAxisDoubleSpinBox;
    QDoubleSpinBox *ryAxisDoubleSpinBox;
    QDoubleSpinBox *rzAxisDoubleSpinBox;
    QToolButton *setIAxisToolButton;
    QToolButton *setJAxisToolButton;
    QToolButton *setKAxisToolButton;
    QToolButton *pasteAxisToolButton;
    QGroupBox *rotAngleGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *rAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *transGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *txAxisDoubleSpinBox;
    QDoubleSpinBox *tyAxisDoubleSpinBox;
    QDoubleSpinBox *tzAxisDoubleSpinBox;
    QToolButton *pasteTransToolButton;
    QGroupBox *rotAngleGroupBox_2;
    QHBoxLayout *horizontalLayout_11;
    QDoubleSpinBox *scaleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *eulerAnglesGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *ePhiDoubleSpinBox;
    QDoubleSpinBox *eThetaDoubleSpinBox;
    QDoubleSpinBox *ePsiDoubleSpinBox;
    QToolButton *pasteEulerAnglesToolButton;
    QGroupBox *eulerTransGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *etxAxisDoubleSpinBox;
    QDoubleSpinBox *etyAxisDoubleSpinBox;
    QDoubleSpinBox *etzAxisDoubleSpinBox;
    QToolButton *pasteEulerTransToolButton;
    QGroupBox *rotAngleGroupBox_3;
    QHBoxLayout *horizontalLayout_12;
    QDoubleSpinBox *eScaleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *fromGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *fromXAxisDoubleSpinBox;
    QDoubleSpinBox *fromYAxisDoubleSpinBox;
    QDoubleSpinBox *fromZAxisDoubleSpinBox;
    QToolButton *setFromAxisIToolButton;
    QToolButton *setFromAxisJToolButton;
    QToolButton *setFromAxisKToolButton;
    QToolButton *pasteFromAxisToolButton;
    QGroupBox *toGroupBox;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *toXAxisDoubleSpinBox;
    QDoubleSpinBox *toYAxisDoubleSpinBox;
    QDoubleSpinBox *toZAxisDoubleSpinBox;
    QToolButton *setToAxisIToolButton;
    QToolButton *setToAxisJToolButton;
    QToolButton *setToAxisKToolButton;
    QToolButton *pasteToAxisToolButton;
    QGroupBox *fromToTransGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QDoubleSpinBox *fromToTxAxisDoubleSpinBox;
    QDoubleSpinBox *fromToTyAxisDoubleSpinBox;
    QDoubleSpinBox *fromToTzAxisDoubleSpinBox;
    QToolButton *pasteFromToTransToolButton;
    QGroupBox *rotAngleGroupBox_4;
    QHBoxLayout *horizontalLayout_13;
    QDoubleSpinBox *fromToScaleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *inverseCheckBox;
    QCheckBox *applyToGlobalCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ApplyTransformationDialog)
    {
        if (ApplyTransformationDialog->objectName().isEmpty())
            ApplyTransformationDialog->setObjectName(QString::fromUtf8("ApplyTransformationDialog"));
        ApplyTransformationDialog->resize(687, 415);
        verticalLayout_4 = new QVBoxLayout(ApplyTransformationDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(ApplyTransformationDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fromFileToolButton = new QToolButton(tab);
        fromFileToolButton->setObjectName(QString::fromUtf8("fromFileToolButton"));

        horizontalLayout->addWidget(fromFileToolButton);

        fromClipboardToolButton = new QToolButton(tab);
        fromClipboardToolButton->setObjectName(QString::fromUtf8("fromClipboardToolButton"));

        horizontalLayout->addWidget(fromClipboardToolButton);

        fromDipDipDirToolButton = new QToolButton(tab);
        fromDipDipDirToolButton->setObjectName(QString::fromUtf8("fromDipDipDirToolButton"));

        horizontalLayout->addWidget(fromDipDipDirToolButton);

        helpToolButton = new QToolButton(tab);
        helpToolButton->setObjectName(QString::fromUtf8("helpToolButton"));
        helpToolButton->setCheckable(true);

        horizontalLayout->addWidget(helpToolButton);


        verticalLayout->addLayout(horizontalLayout);

        helpTextEdit = new QPlainTextEdit(tab);
        helpTextEdit->setObjectName(QString::fromUtf8("helpTextEdit"));
        helpTextEdit->setMinimumSize(QSize(0, 150));
        helpTextEdit->setMaximumSize(QSize(16777215, 150));
        QPalette palette;
        QBrush brush(QColor(202, 202, 202, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        helpTextEdit->setPalette(palette);
        helpTextEdit->setReadOnly(true);

        verticalLayout->addWidget(helpTextEdit);

        matrixTextEdit = new QPlainTextEdit(tab);
        matrixTextEdit->setObjectName(QString::fromUtf8("matrixTextEdit"));
        matrixTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        matrixTextEdit->setPlainText(QString::fromUtf8("1.000000	0.000000	0.000000	0.000000\n"
"0.000000	1.000000	0.000000	0.000000\n"
"0.000000	0.000000	1.000000	0.000000\n"
"0.000000	0.000000	0.000000	1.000000"));

        verticalLayout->addWidget(matrixTextEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rotAxisGroupBox = new QGroupBox(tab_2);
        rotAxisGroupBox->setObjectName(QString::fromUtf8("rotAxisGroupBox"));
        rotAxisGroupBox->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(rotAxisGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        rxAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        rxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("rxAxisDoubleSpinBox"));
        rxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        rxAxisDoubleSpinBox->setDecimals(8);
        rxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(rxAxisDoubleSpinBox);

        ryAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        ryAxisDoubleSpinBox->setObjectName(QString::fromUtf8("ryAxisDoubleSpinBox"));
        ryAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        ryAxisDoubleSpinBox->setDecimals(8);
        ryAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ryAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(ryAxisDoubleSpinBox);

        rzAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        rzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("rzAxisDoubleSpinBox"));
        rzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        rzAxisDoubleSpinBox->setDecimals(8);
        rzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(rzAxisDoubleSpinBox);

        setIAxisToolButton = new QToolButton(rotAxisGroupBox);
        setIAxisToolButton->setObjectName(QString::fromUtf8("setIAxisToolButton"));

        horizontalLayout_2->addWidget(setIAxisToolButton);

        setJAxisToolButton = new QToolButton(rotAxisGroupBox);
        setJAxisToolButton->setObjectName(QString::fromUtf8("setJAxisToolButton"));

        horizontalLayout_2->addWidget(setJAxisToolButton);

        setKAxisToolButton = new QToolButton(rotAxisGroupBox);
        setKAxisToolButton->setObjectName(QString::fromUtf8("setKAxisToolButton"));

        horizontalLayout_2->addWidget(setKAxisToolButton);

        pasteAxisToolButton = new QToolButton(rotAxisGroupBox);
        pasteAxisToolButton->setObjectName(QString::fromUtf8("pasteAxisToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAxisToolButton->setIcon(icon);

        horizontalLayout_2->addWidget(pasteAxisToolButton);


        verticalLayout_2->addWidget(rotAxisGroupBox);

        rotAngleGroupBox = new QGroupBox(tab_2);
        rotAngleGroupBox->setObjectName(QString::fromUtf8("rotAngleGroupBox"));
        rotAngleGroupBox->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(rotAngleGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        rAngleDoubleSpinBox = new QDoubleSpinBox(rotAngleGroupBox);
        rAngleDoubleSpinBox->setObjectName(QString::fromUtf8("rAngleDoubleSpinBox"));
        rAngleDoubleSpinBox->setDecimals(4);
        rAngleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rAngleDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_3->addWidget(rAngleDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(rotAngleGroupBox);

        transGroupBox = new QGroupBox(tab_2);
        transGroupBox->setObjectName(QString::fromUtf8("transGroupBox"));
        transGroupBox->setFlat(true);
        horizontalLayout_4 = new QHBoxLayout(transGroupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        txAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        txAxisDoubleSpinBox->setObjectName(QString::fromUtf8("txAxisDoubleSpinBox"));
        txAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        txAxisDoubleSpinBox->setDecimals(8);
        txAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        txAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(txAxisDoubleSpinBox);

        tyAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        tyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("tyAxisDoubleSpinBox"));
        tyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        tyAxisDoubleSpinBox->setDecimals(8);
        tyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        tyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(tyAxisDoubleSpinBox);

        tzAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        tzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("tzAxisDoubleSpinBox"));
        tzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        tzAxisDoubleSpinBox->setDecimals(8);
        tzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        tzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(tzAxisDoubleSpinBox);

        pasteTransToolButton = new QToolButton(transGroupBox);
        pasteTransToolButton->setObjectName(QString::fromUtf8("pasteTransToolButton"));
        pasteTransToolButton->setIcon(icon);

        horizontalLayout_4->addWidget(pasteTransToolButton);


        verticalLayout_2->addWidget(transGroupBox);

        rotAngleGroupBox_2 = new QGroupBox(tab_2);
        rotAngleGroupBox_2->setObjectName(QString::fromUtf8("rotAngleGroupBox_2"));
        rotAngleGroupBox_2->setFlat(true);
        horizontalLayout_11 = new QHBoxLayout(rotAngleGroupBox_2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, -1, 0, -1);
        scaleDoubleSpinBox = new QDoubleSpinBox(rotAngleGroupBox_2);
        scaleDoubleSpinBox->setObjectName(QString::fromUtf8("scaleDoubleSpinBox"));
        scaleDoubleSpinBox->setDecimals(6);
        scaleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        scaleDoubleSpinBox->setMaximum(1000000000.000000000000000);
        scaleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_11->addWidget(scaleDoubleSpinBox);

        horizontalSpacer_3 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(rotAngleGroupBox_2);

        verticalSpacer = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        eulerAnglesGroupBox = new QGroupBox(tab_3);
        eulerAnglesGroupBox->setObjectName(QString::fromUtf8("eulerAnglesGroupBox"));
        eulerAnglesGroupBox->setFlat(true);
        horizontalLayout_6 = new QHBoxLayout(eulerAnglesGroupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        ePhiDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        ePhiDoubleSpinBox->setObjectName(QString::fromUtf8("ePhiDoubleSpinBox"));
        ePhiDoubleSpinBox->setPrefix(QString::fromUtf8("Phi: "));
        ePhiDoubleSpinBox->setDecimals(8);
        ePhiDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ePhiDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(ePhiDoubleSpinBox);

        eThetaDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        eThetaDoubleSpinBox->setObjectName(QString::fromUtf8("eThetaDoubleSpinBox"));
        eThetaDoubleSpinBox->setPrefix(QString::fromUtf8("Theta: "));
        eThetaDoubleSpinBox->setDecimals(8);
        eThetaDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        eThetaDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(eThetaDoubleSpinBox);

        ePsiDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        ePsiDoubleSpinBox->setObjectName(QString::fromUtf8("ePsiDoubleSpinBox"));
        ePsiDoubleSpinBox->setPrefix(QString::fromUtf8("Psi: "));
        ePsiDoubleSpinBox->setDecimals(8);
        ePsiDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ePsiDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(ePsiDoubleSpinBox);

        pasteEulerAnglesToolButton = new QToolButton(eulerAnglesGroupBox);
        pasteEulerAnglesToolButton->setObjectName(QString::fromUtf8("pasteEulerAnglesToolButton"));
        pasteEulerAnglesToolButton->setIcon(icon);

        horizontalLayout_6->addWidget(pasteEulerAnglesToolButton);


        verticalLayout_3->addWidget(eulerAnglesGroupBox);

        eulerTransGroupBox = new QGroupBox(tab_3);
        eulerTransGroupBox->setObjectName(QString::fromUtf8("eulerTransGroupBox"));
        eulerTransGroupBox->setFlat(true);
        horizontalLayout_5 = new QHBoxLayout(eulerTransGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        etxAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etxAxisDoubleSpinBox"));
        etxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        etxAxisDoubleSpinBox->setDecimals(8);
        etxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etxAxisDoubleSpinBox);

        etyAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etyAxisDoubleSpinBox"));
        etyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        etyAxisDoubleSpinBox->setDecimals(8);
        etyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etyAxisDoubleSpinBox);

        etzAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etzAxisDoubleSpinBox"));
        etzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        etzAxisDoubleSpinBox->setDecimals(8);
        etzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etzAxisDoubleSpinBox);

        pasteEulerTransToolButton = new QToolButton(eulerTransGroupBox);
        pasteEulerTransToolButton->setObjectName(QString::fromUtf8("pasteEulerTransToolButton"));
        pasteEulerTransToolButton->setIcon(icon);

        horizontalLayout_5->addWidget(pasteEulerTransToolButton);


        verticalLayout_3->addWidget(eulerTransGroupBox);

        rotAngleGroupBox_3 = new QGroupBox(tab_3);
        rotAngleGroupBox_3->setObjectName(QString::fromUtf8("rotAngleGroupBox_3"));
        rotAngleGroupBox_3->setFlat(true);
        horizontalLayout_12 = new QHBoxLayout(rotAngleGroupBox_3);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, -1, 0, -1);
        eScaleDoubleSpinBox = new QDoubleSpinBox(rotAngleGroupBox_3);
        eScaleDoubleSpinBox->setObjectName(QString::fromUtf8("eScaleDoubleSpinBox"));
        eScaleDoubleSpinBox->setDecimals(6);
        eScaleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        eScaleDoubleSpinBox->setMaximum(1000000000.000000000000000);
        eScaleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_12->addWidget(eScaleDoubleSpinBox);

        horizontalSpacer_4 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(rotAngleGroupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 139, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fromGroupBox = new QGroupBox(tab_4);
        fromGroupBox->setObjectName(QString::fromUtf8("fromGroupBox"));
        fromGroupBox->setFlat(true);
        horizontalLayout_7 = new QHBoxLayout(fromGroupBox);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        fromXAxisDoubleSpinBox = new QDoubleSpinBox(fromGroupBox);
        fromXAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromXAxisDoubleSpinBox"));
        fromXAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        fromXAxisDoubleSpinBox->setDecimals(8);
        fromXAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromXAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_7->addWidget(fromXAxisDoubleSpinBox);

        fromYAxisDoubleSpinBox = new QDoubleSpinBox(fromGroupBox);
        fromYAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromYAxisDoubleSpinBox"));
        fromYAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        fromYAxisDoubleSpinBox->setDecimals(8);
        fromYAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromYAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_7->addWidget(fromYAxisDoubleSpinBox);

        fromZAxisDoubleSpinBox = new QDoubleSpinBox(fromGroupBox);
        fromZAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromZAxisDoubleSpinBox"));
        fromZAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        fromZAxisDoubleSpinBox->setDecimals(8);
        fromZAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromZAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_7->addWidget(fromZAxisDoubleSpinBox);

        setFromAxisIToolButton = new QToolButton(fromGroupBox);
        setFromAxisIToolButton->setObjectName(QString::fromUtf8("setFromAxisIToolButton"));

        horizontalLayout_7->addWidget(setFromAxisIToolButton);

        setFromAxisJToolButton = new QToolButton(fromGroupBox);
        setFromAxisJToolButton->setObjectName(QString::fromUtf8("setFromAxisJToolButton"));

        horizontalLayout_7->addWidget(setFromAxisJToolButton);

        setFromAxisKToolButton = new QToolButton(fromGroupBox);
        setFromAxisKToolButton->setObjectName(QString::fromUtf8("setFromAxisKToolButton"));

        horizontalLayout_7->addWidget(setFromAxisKToolButton);

        pasteFromAxisToolButton = new QToolButton(fromGroupBox);
        pasteFromAxisToolButton->setObjectName(QString::fromUtf8("pasteFromAxisToolButton"));
        pasteFromAxisToolButton->setIcon(icon);

        horizontalLayout_7->addWidget(pasteFromAxisToolButton);


        verticalLayout_5->addWidget(fromGroupBox);

        toGroupBox = new QGroupBox(tab_4);
        toGroupBox->setObjectName(QString::fromUtf8("toGroupBox"));
        toGroupBox->setFlat(true);
        horizontalLayout_9 = new QHBoxLayout(toGroupBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, -1, 0, -1);
        toXAxisDoubleSpinBox = new QDoubleSpinBox(toGroupBox);
        toXAxisDoubleSpinBox->setObjectName(QString::fromUtf8("toXAxisDoubleSpinBox"));
        toXAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        toXAxisDoubleSpinBox->setDecimals(8);
        toXAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        toXAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_9->addWidget(toXAxisDoubleSpinBox);

        toYAxisDoubleSpinBox = new QDoubleSpinBox(toGroupBox);
        toYAxisDoubleSpinBox->setObjectName(QString::fromUtf8("toYAxisDoubleSpinBox"));
        toYAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        toYAxisDoubleSpinBox->setDecimals(8);
        toYAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        toYAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_9->addWidget(toYAxisDoubleSpinBox);

        toZAxisDoubleSpinBox = new QDoubleSpinBox(toGroupBox);
        toZAxisDoubleSpinBox->setObjectName(QString::fromUtf8("toZAxisDoubleSpinBox"));
        toZAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        toZAxisDoubleSpinBox->setDecimals(8);
        toZAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        toZAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_9->addWidget(toZAxisDoubleSpinBox);

        setToAxisIToolButton = new QToolButton(toGroupBox);
        setToAxisIToolButton->setObjectName(QString::fromUtf8("setToAxisIToolButton"));

        horizontalLayout_9->addWidget(setToAxisIToolButton);

        setToAxisJToolButton = new QToolButton(toGroupBox);
        setToAxisJToolButton->setObjectName(QString::fromUtf8("setToAxisJToolButton"));

        horizontalLayout_9->addWidget(setToAxisJToolButton);

        setToAxisKToolButton = new QToolButton(toGroupBox);
        setToAxisKToolButton->setObjectName(QString::fromUtf8("setToAxisKToolButton"));

        horizontalLayout_9->addWidget(setToAxisKToolButton);

        pasteToAxisToolButton = new QToolButton(toGroupBox);
        pasteToAxisToolButton->setObjectName(QString::fromUtf8("pasteToAxisToolButton"));
        pasteToAxisToolButton->setIcon(icon);

        horizontalLayout_9->addWidget(pasteToAxisToolButton);


        verticalLayout_5->addWidget(toGroupBox);

        fromToTransGroupBox = new QGroupBox(tab_4);
        fromToTransGroupBox->setObjectName(QString::fromUtf8("fromToTransGroupBox"));
        fromToTransGroupBox->setFlat(true);
        horizontalLayout_10 = new QHBoxLayout(fromToTransGroupBox);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, -1, 0, -1);
        fromToTxAxisDoubleSpinBox = new QDoubleSpinBox(fromToTransGroupBox);
        fromToTxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromToTxAxisDoubleSpinBox"));
        fromToTxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        fromToTxAxisDoubleSpinBox->setDecimals(8);
        fromToTxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromToTxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_10->addWidget(fromToTxAxisDoubleSpinBox);

        fromToTyAxisDoubleSpinBox = new QDoubleSpinBox(fromToTransGroupBox);
        fromToTyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromToTyAxisDoubleSpinBox"));
        fromToTyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        fromToTyAxisDoubleSpinBox->setDecimals(8);
        fromToTyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromToTyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_10->addWidget(fromToTyAxisDoubleSpinBox);

        fromToTzAxisDoubleSpinBox = new QDoubleSpinBox(fromToTransGroupBox);
        fromToTzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("fromToTzAxisDoubleSpinBox"));
        fromToTzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        fromToTzAxisDoubleSpinBox->setDecimals(8);
        fromToTzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromToTzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_10->addWidget(fromToTzAxisDoubleSpinBox);

        pasteFromToTransToolButton = new QToolButton(fromToTransGroupBox);
        pasteFromToTransToolButton->setObjectName(QString::fromUtf8("pasteFromToTransToolButton"));
        pasteFromToTransToolButton->setIcon(icon);

        horizontalLayout_10->addWidget(pasteFromToTransToolButton);


        verticalLayout_5->addWidget(fromToTransGroupBox);

        rotAngleGroupBox_4 = new QGroupBox(tab_4);
        rotAngleGroupBox_4->setObjectName(QString::fromUtf8("rotAngleGroupBox_4"));
        rotAngleGroupBox_4->setFlat(true);
        horizontalLayout_13 = new QHBoxLayout(rotAngleGroupBox_4);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, -1, 0, -1);
        fromToScaleDoubleSpinBox = new QDoubleSpinBox(rotAngleGroupBox_4);
        fromToScaleDoubleSpinBox->setObjectName(QString::fromUtf8("fromToScaleDoubleSpinBox"));
        fromToScaleDoubleSpinBox->setDecimals(6);
        fromToScaleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        fromToScaleDoubleSpinBox->setMaximum(1000000000.000000000000000);
        fromToScaleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_13->addWidget(fromToScaleDoubleSpinBox);

        horizontalSpacer_5 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);


        verticalLayout_5->addWidget(rotAngleGroupBox_4);

        verticalSpacer_3 = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_4->addWidget(tabWidget);

        frame = new QFrame(ApplyTransformationDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        inverseCheckBox = new QCheckBox(frame);
        inverseCheckBox->setObjectName(QString::fromUtf8("inverseCheckBox"));

        horizontalLayout_8->addWidget(inverseCheckBox);

        applyToGlobalCheckBox = new QCheckBox(frame);
        applyToGlobalCheckBox->setObjectName(QString::fromUtf8("applyToGlobalCheckBox"));

        horizontalLayout_8->addWidget(applyToGlobalCheckBox);


        verticalLayout_4->addWidget(frame);

        buttonBox = new QDialogButtonBox(ApplyTransformationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_4->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(fromGroupBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ApplyTransformationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ApplyTransformationDialog, SLOT(reject()));
        QObject::connect(helpToolButton, SIGNAL(toggled(bool)), helpTextEdit, SLOT(setVisible(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ApplyTransformationDialog);
    } // setupUi

    void retranslateUi(QDialog *ApplyTransformationDialog)
    {
        ApplyTransformationDialog->setWindowTitle(QCoreApplication::translate("ApplyTransformationDialog", "Apply transformation", nullptr));
        label->setText(QCoreApplication::translate("ApplyTransformationDialog", "Enter 4x4 matrix values:", nullptr));
#if QT_CONFIG(tooltip)
        fromFileToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Load matrix from ascii file", nullptr));
#endif // QT_CONFIG(tooltip)
        fromFileToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "ASCII file", nullptr));
#if QT_CONFIG(tooltip)
        fromClipboardToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste clipboard contents", nullptr));
#endif // QT_CONFIG(tooltip)
        fromClipboardToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "clipboard", nullptr));
#if QT_CONFIG(tooltip)
        fromDipDipDirToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Inits the matrix from dip/dip direction values\n"
"--> assuming an initial position of (0,0)", nullptr));
#endif // QT_CONFIG(tooltip)
        fromDipDipDirToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "dip / dip direction", nullptr));
        helpToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "help", nullptr));
        helpTextEdit->setPlainText(QCoreApplication::translate("ApplyTransformationDialog", "Matrix should be of the form:\n"
"R11   R12   R13   Tx\n"
"R21   R22   R23   Ty\n"
"R31   R32   R33   Tz\n"
"0       0        0       1\n"
"\n"
"Where R is a standard 3x3 rotation matrix and T is a translation vector.\n"
"\n"
"Let P be a 3D point, the transformed point P' will be such that: P' = R.P + T.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ApplyTransformationDialog", "Matrix 4x4", nullptr));
        rotAxisGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Rotation axis", nullptr));
#if QT_CONFIG(tooltip)
        setIAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (1, 0, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setIAxisToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "I", nullptr));
#if QT_CONFIG(tooltip)
        setJAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 1, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setJAxisToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "J", nullptr));
#if QT_CONFIG(tooltip)
        setKAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 0, 1)", nullptr));
#endif // QT_CONFIG(tooltip)
        setKAxisToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "K", nullptr));
#if QT_CONFIG(tooltip)
        pasteAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        rotAngleGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Rotation angle (degrees)", nullptr));
        rAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("ApplyTransformationDialog", " deg.", nullptr));
        transGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Translation", nullptr));
#if QT_CONFIG(tooltip)
        pasteTransToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        rotAngleGroupBox_2->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Scale", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ApplyTransformationDialog", "Axis, Angle", nullptr));
        eulerAnglesGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Angles", nullptr));
#if QT_CONFIG(tooltip)
        pasteEulerAnglesToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        eulerTransGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Translation", nullptr));
#if QT_CONFIG(tooltip)
        pasteEulerTransToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        rotAngleGroupBox_3->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Scale", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ApplyTransformationDialog", "Euler angles", nullptr));
        fromGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "From axis", nullptr));
#if QT_CONFIG(tooltip)
        setFromAxisIToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (1, 0, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setFromAxisIToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "I", nullptr));
#if QT_CONFIG(tooltip)
        setFromAxisJToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 1, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setFromAxisJToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "J", nullptr));
#if QT_CONFIG(tooltip)
        setFromAxisKToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 0, 1)", nullptr));
#endif // QT_CONFIG(tooltip)
        setFromAxisKToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "K", nullptr));
#if QT_CONFIG(tooltip)
        pasteFromAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        toGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "To axis", nullptr));
#if QT_CONFIG(tooltip)
        setToAxisIToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (1, 0, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setToAxisIToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "I", nullptr));
#if QT_CONFIG(tooltip)
        setToAxisJToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 1, 0)", nullptr));
#endif // QT_CONFIG(tooltip)
        setToAxisJToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "J", nullptr));
#if QT_CONFIG(tooltip)
        setToAxisKToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Shortcut to set the rotation axis to (0, 0, 1)", nullptr));
#endif // QT_CONFIG(tooltip)
        setToAxisKToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "K", nullptr));
#if QT_CONFIG(tooltip)
        pasteToAxisToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        fromToTransGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Translation", nullptr));
#if QT_CONFIG(tooltip)
        pasteFromToTransToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        rotAngleGroupBox_4->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Scale", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("ApplyTransformationDialog", "From > To axes", nullptr));
        inverseCheckBox->setText(QCoreApplication::translate("ApplyTransformationDialog", "Apply inverse transformation", nullptr));
#if QT_CONFIG(tooltip)
        applyToGlobalCheckBox->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Applies the transformation to global coordinates\n"
"(may trigger an update of the Global Shift)", nullptr));
#endif // QT_CONFIG(tooltip)
        applyToGlobalCheckBox->setText(QCoreApplication::translate("ApplyTransformationDialog", "Apply to global coordinates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplyTransformationDialog: public Ui_ApplyTransformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYTRANSFORMATIONDLG_H
