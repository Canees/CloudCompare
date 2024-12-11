/********************************************************************************
** Form generated from reading UI file 'displaySettingsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSETTINGSDLG_H
#define UI_DISPLAYSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplaySettingsDlg
{
public:
    QVBoxLayout *verticalLayout_5;
    QToolBox *toolBox;
    QWidget *pageColorAndMatOptions;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *sunLightGroup;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *ambientColorButton;
    QLabel *label_3;
    QHBoxLayout *hboxLayout1;
    QToolButton *specularColorButton;
    QLabel *label_4;
    QHBoxLayout *hboxLayout2;
    QToolButton *diffuseColorButton;
    QLabel *label_5;
    QCheckBox *doubleSidedCheckBox;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *sunLightGroup_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout3;
    QToolButton *meshFrontColorButton;
    QLabel *label_6;
    QHBoxLayout *hboxLayout4;
    QToolButton *meshBackColorButton;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *meshSpecularColorButton;
    QLabel *label_12;
    QHBoxLayout *hboxLayout5;
    QToolButton *pointsColorButton;
    QLabel *label_8;
    QGroupBox *othersGroup;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout6;
    QToolButton *bkgColorButton;
    QLabel *label_2;
    QHBoxLayout *hboxLayout7;
    QToolButton *bbColorButton;
    QLabel *label_9;
    QHBoxLayout *hboxLayout8;
    QToolButton *textColorButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *enableGradientCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *pageSFOptions;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *colorScaleShowHistogramCheckBox;
    QCheckBox *useColorScaleShaderCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QSpinBox *colorRampWidthSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageLabelsOptions;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QSpinBox *labelOpacitySpinBox;
    QLabel *label_16;
    QSpinBox *labelFontSizeSpinBox;
    QLabel *label_20;
    QToolButton *labelBkgColorButton;
    QLabel *label_15;
    QSpinBox *labelMarkerSizeSpinBox;
    QLabel *label_18;
    QToolButton *labelMarkerColorButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageOtherOptions;
    QFormLayout *formLayout;
    QLabel *label_11;
    QSpinBox *defaultFontSizeSpinBox;
    QLabel *label_14;
    QSpinBox *numberPrecisionSpinBox;
    QLabel *label_17;
    QDoubleSpinBox *zoomSpeedDoubleSpinBox;
    QCheckBox *decimateCloudBox;
    QDoubleSpinBox *maxCloudSizeDoubleSpinBox;
    QCheckBox *decimateMeshBox;
    QDoubleSpinBox *maxMeshSizeDoubleSpinBox;
    QLabel *label_22;
    QComboBox *autoComputeOctreeComboBox;
    QCheckBox *autoDisplayNormalsCheckBox;
    QCheckBox *drawRoundedPointsCheckBox;
    QCheckBox *showCrossCheckBox;
    QCheckBox *useVBOCheckBox;
    QCheckBox *useNativeDialogsCheckBox;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *singleClickPickingCheckBox;
    QLabel *label_19;
    QComboBox *appStyleComboBox;
    QLabel *label_21;
    QComboBox *pickingCursorComboBox;
    QCheckBox *confirmQuitCheckBox;
    QLabel *label_23;
    QComboBox *logVerbosityComboBox;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *applyButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DisplaySettingsDlg)
    {
        if (DisplaySettingsDlg->objectName().isEmpty())
            DisplaySettingsDlg->setObjectName(QString::fromUtf8("DisplaySettingsDlg"));
        DisplaySettingsDlg->resize(514, 580);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplaySettingsDlg->sizePolicy().hasHeightForWidth());
        DisplaySettingsDlg->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Old/images/old_cc/cc_lightParamsIcon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        DisplaySettingsDlg->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(DisplaySettingsDlg);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        toolBox = new QToolBox(DisplaySettingsDlg);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        pageColorAndMatOptions = new QWidget();
        pageColorAndMatOptions->setObjectName(QString::fromUtf8("pageColorAndMatOptions"));
        pageColorAndMatOptions->setGeometry(QRect(0, 0, 496, 423));
        verticalLayout_6 = new QVBoxLayout(pageColorAndMatOptions);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        frame = new QFrame(pageColorAndMatOptions);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        sunLightGroup = new QGroupBox(frame);
        sunLightGroup->setObjectName(QString::fromUtf8("sunLightGroup"));
        vboxLayout = new QVBoxLayout(sunLightGroup);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ambientColorButton = new QToolButton(sunLightGroup);
        ambientColorButton->setObjectName(QString::fromUtf8("ambientColorButton"));
        ambientColorButton->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(ambientColorButton);

        label_3 = new QLabel(sunLightGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        specularColorButton = new QToolButton(sunLightGroup);
        specularColorButton->setObjectName(QString::fromUtf8("specularColorButton"));
        specularColorButton->setText(QString::fromUtf8("..."));

        hboxLayout1->addWidget(specularColorButton);

        label_4 = new QLabel(sunLightGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout1->addWidget(label_4);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        diffuseColorButton = new QToolButton(sunLightGroup);
        diffuseColorButton->setObjectName(QString::fromUtf8("diffuseColorButton"));
        diffuseColorButton->setText(QString::fromUtf8("..."));

        hboxLayout2->addWidget(diffuseColorButton);

        label_5 = new QLabel(sunLightGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout2->addWidget(label_5);


        vboxLayout->addLayout(hboxLayout2);

        doubleSidedCheckBox = new QCheckBox(sunLightGroup);
        doubleSidedCheckBox->setObjectName(QString::fromUtf8("doubleSidedCheckBox"));
        doubleSidedCheckBox->setChecked(true);

        vboxLayout->addWidget(doubleSidedCheckBox);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_5);


        horizontalLayout_6->addWidget(sunLightGroup);

        sunLightGroup_2 = new QGroupBox(frame);
        sunLightGroup_2->setObjectName(QString::fromUtf8("sunLightGroup_2"));
        verticalLayout_4 = new QVBoxLayout(sunLightGroup_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        meshFrontColorButton = new QToolButton(sunLightGroup_2);
        meshFrontColorButton->setObjectName(QString::fromUtf8("meshFrontColorButton"));
        meshFrontColorButton->setText(QString::fromUtf8("..."));

        hboxLayout3->addWidget(meshFrontColorButton);

        label_6 = new QLabel(sunLightGroup_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout3->addWidget(label_6);


        verticalLayout_4->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        meshBackColorButton = new QToolButton(sunLightGroup_2);
        meshBackColorButton->setObjectName(QString::fromUtf8("meshBackColorButton"));
        meshBackColorButton->setText(QString::fromUtf8("..."));

        hboxLayout4->addWidget(meshBackColorButton);

        label_7 = new QLabel(sunLightGroup_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout4->addWidget(label_7);


        verticalLayout_4->addLayout(hboxLayout4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        meshSpecularColorButton = new QToolButton(sunLightGroup_2);
        meshSpecularColorButton->setObjectName(QString::fromUtf8("meshSpecularColorButton"));
        meshSpecularColorButton->setText(QString::fromUtf8("..."));

        horizontalLayout_2->addWidget(meshSpecularColorButton);

        label_12 = new QLabel(sunLightGroup_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);


        verticalLayout_4->addLayout(horizontalLayout_2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        pointsColorButton = new QToolButton(sunLightGroup_2);
        pointsColorButton->setObjectName(QString::fromUtf8("pointsColorButton"));
        pointsColorButton->setText(QString::fromUtf8("..."));

        hboxLayout5->addWidget(pointsColorButton);

        label_8 = new QLabel(sunLightGroup_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        hboxLayout5->addWidget(label_8);


        verticalLayout_4->addLayout(hboxLayout5);


        horizontalLayout_6->addWidget(sunLightGroup_2);

        othersGroup = new QGroupBox(frame);
        othersGroup->setObjectName(QString::fromUtf8("othersGroup"));
        vboxLayout1 = new QVBoxLayout(othersGroup);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        bkgColorButton = new QToolButton(othersGroup);
        bkgColorButton->setObjectName(QString::fromUtf8("bkgColorButton"));
        bkgColorButton->setText(QString::fromUtf8("..."));
        bkgColorButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout6->addWidget(bkgColorButton);

        label_2 = new QLabel(othersGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout6->addWidget(label_2);


        vboxLayout1->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        bbColorButton = new QToolButton(othersGroup);
        bbColorButton->setObjectName(QString::fromUtf8("bbColorButton"));
        bbColorButton->setText(QString::fromUtf8("..."));
        bbColorButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout7->addWidget(bbColorButton);

        label_9 = new QLabel(othersGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout7->addWidget(label_9);


        vboxLayout1->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        textColorButton = new QToolButton(othersGroup);
        textColorButton->setObjectName(QString::fromUtf8("textColorButton"));
        textColorButton->setText(QString::fromUtf8("..."));

        hboxLayout8->addWidget(textColorButton);

        label = new QLabel(othersGroup);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout8->addWidget(label);


        vboxLayout1->addLayout(hboxLayout8);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacer_6);


        horizontalLayout_6->addWidget(othersGroup);


        verticalLayout_6->addWidget(frame);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        enableGradientCheckBox = new QCheckBox(pageColorAndMatOptions);
        enableGradientCheckBox->setObjectName(QString::fromUtf8("enableGradientCheckBox"));
        enableGradientCheckBox->setChecked(true);

        horizontalLayout_7->addWidget(enableGradientCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        toolBox->addItem(pageColorAndMatOptions, QString::fromUtf8("Colors and Materials"));
        pageSFOptions = new QWidget();
        pageSFOptions->setObjectName(QString::fromUtf8("pageSFOptions"));
        pageSFOptions->setGeometry(QRect(0, 0, 496, 423));
        verticalLayout_7 = new QVBoxLayout(pageSFOptions);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        colorScaleShowHistogramCheckBox = new QCheckBox(pageSFOptions);
        colorScaleShowHistogramCheckBox->setObjectName(QString::fromUtf8("colorScaleShowHistogramCheckBox"));
        colorScaleShowHistogramCheckBox->setChecked(true);

        verticalLayout_7->addWidget(colorScaleShowHistogramCheckBox);

        useColorScaleShaderCheckBox = new QCheckBox(pageSFOptions);
        useColorScaleShaderCheckBox->setObjectName(QString::fromUtf8("useColorScaleShaderCheckBox"));

        verticalLayout_7->addWidget(useColorScaleShaderCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(pageSFOptions);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        colorRampWidthSpinBox = new QSpinBox(pageSFOptions);
        colorRampWidthSpinBox->setObjectName(QString::fromUtf8("colorRampWidthSpinBox"));
        colorRampWidthSpinBox->setMinimum(10);
        colorRampWidthSpinBox->setMaximum(200);
        colorRampWidthSpinBox->setValue(50);

        horizontalLayout->addWidget(colorRampWidthSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        toolBox->addItem(pageSFOptions, QString::fromUtf8("Color scale (scalar field)"));
        pageLabelsOptions = new QWidget();
        pageLabelsOptions->setObjectName(QString::fromUtf8("pageLabelsOptions"));
        pageLabelsOptions->setGeometry(QRect(0, 0, 496, 423));
        verticalLayout = new QVBoxLayout(pageLabelsOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(pageLabelsOptions);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        labelOpacitySpinBox = new QSpinBox(frame_2);
        labelOpacitySpinBox->setObjectName(QString::fromUtf8("labelOpacitySpinBox"));
        labelOpacitySpinBox->setSuffix(QString::fromUtf8("%"));
        labelOpacitySpinBox->setMaximum(100);
        labelOpacitySpinBox->setValue(75);

        gridLayout->addWidget(labelOpacitySpinBox, 0, 1, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        labelFontSizeSpinBox = new QSpinBox(frame_2);
        labelFontSizeSpinBox->setObjectName(QString::fromUtf8("labelFontSizeSpinBox"));
        labelFontSizeSpinBox->setMinimum(6);
        labelFontSizeSpinBox->setMaximum(96);
        labelFontSizeSpinBox->setValue(8);

        gridLayout->addWidget(labelFontSizeSpinBox, 1, 1, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 1, 2, 1, 1);

        labelBkgColorButton = new QToolButton(frame_2);
        labelBkgColorButton->setObjectName(QString::fromUtf8("labelBkgColorButton"));
        labelBkgColorButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(labelBkgColorButton, 1, 3, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        labelMarkerSizeSpinBox = new QSpinBox(frame_2);
        labelMarkerSizeSpinBox->setObjectName(QString::fromUtf8("labelMarkerSizeSpinBox"));
        labelMarkerSizeSpinBox->setMinimum(1);
        labelMarkerSizeSpinBox->setValue(4);

        gridLayout->addWidget(labelMarkerSizeSpinBox, 2, 1, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 2, 2, 1, 1);

        labelMarkerColorButton = new QToolButton(frame_2);
        labelMarkerColorButton->setObjectName(QString::fromUtf8("labelMarkerColorButton"));
        labelMarkerColorButton->setText(QString::fromUtf8("..."));

        gridLayout->addWidget(labelMarkerColorButton, 2, 3, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalSpacer_4 = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        toolBox->addItem(pageLabelsOptions, QString::fromUtf8("Labels"));
        pageOtherOptions = new QWidget();
        pageOtherOptions->setObjectName(QString::fromUtf8("pageOtherOptions"));
        pageOtherOptions->setGeometry(QRect(0, 0, 496, 423));
        formLayout = new QFormLayout(pageOtherOptions);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_11 = new QLabel(pageOtherOptions);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);

        defaultFontSizeSpinBox = new QSpinBox(pageOtherOptions);
        defaultFontSizeSpinBox->setObjectName(QString::fromUtf8("defaultFontSizeSpinBox"));
        defaultFontSizeSpinBox->setMinimum(6);
        defaultFontSizeSpinBox->setMaximum(96);
        defaultFontSizeSpinBox->setValue(12);

        formLayout->setWidget(0, QFormLayout::FieldRole, defaultFontSizeSpinBox);

        label_14 = new QLabel(pageOtherOptions);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        numberPrecisionSpinBox = new QSpinBox(pageOtherOptions);
        numberPrecisionSpinBox->setObjectName(QString::fromUtf8("numberPrecisionSpinBox"));
        numberPrecisionSpinBox->setValue(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, numberPrecisionSpinBox);

        label_17 = new QLabel(pageOtherOptions);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_17);

        zoomSpeedDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        zoomSpeedDoubleSpinBox->setObjectName(QString::fromUtf8("zoomSpeedDoubleSpinBox"));
        zoomSpeedDoubleSpinBox->setDecimals(3);
        zoomSpeedDoubleSpinBox->setMaximum(1000.000000000000000);
        zoomSpeedDoubleSpinBox->setSingleStep(0.010000000000000);
        zoomSpeedDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, zoomSpeedDoubleSpinBox);

        decimateCloudBox = new QCheckBox(pageOtherOptions);
        decimateCloudBox->setObjectName(QString::fromUtf8("decimateCloudBox"));
        decimateCloudBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, decimateCloudBox);

        maxCloudSizeDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        maxCloudSizeDoubleSpinBox->setObjectName(QString::fromUtf8("maxCloudSizeDoubleSpinBox"));
        maxCloudSizeDoubleSpinBox->setPrefix(QString::fromUtf8("> "));
        maxCloudSizeDoubleSpinBox->setSuffix(QString::fromUtf8(" M. points"));
        maxCloudSizeDoubleSpinBox->setDecimals(1);
        maxCloudSizeDoubleSpinBox->setMinimum(0.100000000000000);
        maxCloudSizeDoubleSpinBox->setMaximum(10000.000000000000000);
        maxCloudSizeDoubleSpinBox->setValue(100.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, maxCloudSizeDoubleSpinBox);

        decimateMeshBox = new QCheckBox(pageOtherOptions);
        decimateMeshBox->setObjectName(QString::fromUtf8("decimateMeshBox"));
        decimateMeshBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, decimateMeshBox);

        maxMeshSizeDoubleSpinBox = new QDoubleSpinBox(pageOtherOptions);
        maxMeshSizeDoubleSpinBox->setObjectName(QString::fromUtf8("maxMeshSizeDoubleSpinBox"));
        maxMeshSizeDoubleSpinBox->setPrefix(QString::fromUtf8("> "));
        maxMeshSizeDoubleSpinBox->setSuffix(QString::fromUtf8(" M. triangles"));
        maxMeshSizeDoubleSpinBox->setDecimals(1);
        maxMeshSizeDoubleSpinBox->setMinimum(0.100000000000000);
        maxMeshSizeDoubleSpinBox->setMaximum(10000.000000000000000);
        maxMeshSizeDoubleSpinBox->setSingleStep(0.500000000000000);
        maxMeshSizeDoubleSpinBox->setValue(5.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, maxMeshSizeDoubleSpinBox);

        label_22 = new QLabel(pageOtherOptions);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_22);

        autoComputeOctreeComboBox = new QComboBox(pageOtherOptions);
        autoComputeOctreeComboBox->addItem(QString());
        autoComputeOctreeComboBox->addItem(QString());
        autoComputeOctreeComboBox->addItem(QString());
        autoComputeOctreeComboBox->setObjectName(QString::fromUtf8("autoComputeOctreeComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, autoComputeOctreeComboBox);

        autoDisplayNormalsCheckBox = new QCheckBox(pageOtherOptions);
        autoDisplayNormalsCheckBox->setObjectName(QString::fromUtf8("autoDisplayNormalsCheckBox"));

        formLayout->setWidget(9, QFormLayout::LabelRole, autoDisplayNormalsCheckBox);

        drawRoundedPointsCheckBox = new QCheckBox(pageOtherOptions);
        drawRoundedPointsCheckBox->setObjectName(QString::fromUtf8("drawRoundedPointsCheckBox"));

        formLayout->setWidget(10, QFormLayout::LabelRole, drawRoundedPointsCheckBox);

        showCrossCheckBox = new QCheckBox(pageOtherOptions);
        showCrossCheckBox->setObjectName(QString::fromUtf8("showCrossCheckBox"));
        showCrossCheckBox->setChecked(true);

        formLayout->setWidget(11, QFormLayout::LabelRole, showCrossCheckBox);

        useVBOCheckBox = new QCheckBox(pageOtherOptions);
        useVBOCheckBox->setObjectName(QString::fromUtf8("useVBOCheckBox"));
        useVBOCheckBox->setChecked(true);

        formLayout->setWidget(13, QFormLayout::LabelRole, useVBOCheckBox);

        useNativeDialogsCheckBox = new QCheckBox(pageOtherOptions);
        useNativeDialogsCheckBox->setObjectName(QString::fromUtf8("useNativeDialogsCheckBox"));
        useNativeDialogsCheckBox->setChecked(true);

        formLayout->setWidget(14, QFormLayout::LabelRole, useNativeDialogsCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(16, QFormLayout::LabelRole, verticalSpacer_3);

        singleClickPickingCheckBox = new QCheckBox(pageOtherOptions);
        singleClickPickingCheckBox->setObjectName(QString::fromUtf8("singleClickPickingCheckBox"));
        singleClickPickingCheckBox->setChecked(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, singleClickPickingCheckBox);

        label_19 = new QLabel(pageOtherOptions);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_19);

        appStyleComboBox = new QComboBox(pageOtherOptions);
        appStyleComboBox->setObjectName(QString::fromUtf8("appStyleComboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, appStyleComboBox);

        label_21 = new QLabel(pageOtherOptions);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_21);

        pickingCursorComboBox = new QComboBox(pageOtherOptions);
        pickingCursorComboBox->addItem(QString());
        pickingCursorComboBox->addItem(QString());
        pickingCursorComboBox->setObjectName(QString::fromUtf8("pickingCursorComboBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, pickingCursorComboBox);

        confirmQuitCheckBox = new QCheckBox(pageOtherOptions);
        confirmQuitCheckBox->setObjectName(QString::fromUtf8("confirmQuitCheckBox"));

        formLayout->setWidget(15, QFormLayout::LabelRole, confirmQuitCheckBox);

        label_23 = new QLabel(pageOtherOptions);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_23);

        logVerbosityComboBox = new QComboBox(pageOtherOptions);
        logVerbosityComboBox->addItem(QString());
        logVerbosityComboBox->addItem(QString());
        logVerbosityComboBox->addItem(QString());
        logVerbosityComboBox->addItem(QString());
        logVerbosityComboBox->setObjectName(QString::fromUtf8("logVerbosityComboBox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, logVerbosityComboBox);

        toolBox->addItem(pageOtherOptions, QString::fromUtf8("Other options"));

        verticalLayout_5->addWidget(toolBox);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem);

        okButton = new QPushButton(DisplaySettingsDlg);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout9->addWidget(okButton);

        applyButton = new QPushButton(DisplaySettingsDlg);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        hboxLayout9->addWidget(applyButton);

        resetButton = new QPushButton(DisplaySettingsDlg);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        hboxLayout9->addWidget(resetButton);

        cancelButton = new QPushButton(DisplaySettingsDlg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout9->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout9);


        retranslateUi(DisplaySettingsDlg);
        QObject::connect(decimateCloudBox, SIGNAL(toggled(bool)), maxCloudSizeDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(decimateMeshBox, SIGNAL(toggled(bool)), maxMeshSizeDoubleSpinBox, SLOT(setEnabled(bool)));

        toolBox->setCurrentIndex(3);
        autoComputeOctreeComboBox->setCurrentIndex(1);
        logVerbosityComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DisplaySettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *DisplaySettingsDlg)
    {
        DisplaySettingsDlg->setWindowTitle(QCoreApplication::translate("DisplaySettingsDlg", "Display Settings", nullptr));
        sunLightGroup->setTitle(QCoreApplication::translate("DisplaySettingsDlg", "Light", nullptr));
        label_3->setText(QCoreApplication::translate("DisplaySettingsDlg", "Ambient", nullptr));
        label_4->setText(QCoreApplication::translate("DisplaySettingsDlg", "Specular", nullptr));
        label_5->setText(QCoreApplication::translate("DisplaySettingsDlg", "Diffuse", nullptr));
#if QT_CONFIG(tooltip)
        doubleSidedCheckBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "<html><head/><body><p>Whether to use a double-sided light model or not</p><p>(if disabled, triangles will appear black when looked from behind)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleSidedCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "double-sided", nullptr));
        sunLightGroup_2->setTitle(QCoreApplication::translate("DisplaySettingsDlg", "Default Materials", nullptr));
        label_6->setText(QCoreApplication::translate("DisplaySettingsDlg", "Mesh Front", nullptr));
        label_7->setText(QCoreApplication::translate("DisplaySettingsDlg", "Mesh Back", nullptr));
        label_12->setText(QCoreApplication::translate("DisplaySettingsDlg", "Mesh specular", nullptr));
        label_8->setText(QCoreApplication::translate("DisplaySettingsDlg", "Points", nullptr));
        othersGroup->setTitle(QCoreApplication::translate("DisplaySettingsDlg", "Colors", nullptr));
        label_2->setText(QCoreApplication::translate("DisplaySettingsDlg", "Background", nullptr));
        label_9->setText(QCoreApplication::translate("DisplaySettingsDlg", "Bounding-box", nullptr));
        label->setText(QCoreApplication::translate("DisplaySettingsDlg", "Text", nullptr));
#if QT_CONFIG(tooltip)
        enableGradientCheckBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Gradient goes from 'background' color to inverse of 'Points' color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        enableGradientCheckBox->setStatusTip(QCoreApplication::translate("DisplaySettingsDlg", "Gradient goes from 'background' color to inverse of 'Points' color", nullptr));
#endif // QT_CONFIG(statustip)
        enableGradientCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "display gradient background", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageColorAndMatOptions), QCoreApplication::translate("DisplaySettingsDlg", "Colors and Materials", nullptr));
        colorScaleShowHistogramCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Show histogram next to color ramp", nullptr));
        useColorScaleShaderCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Enable shader for faster display (ATI cards: use at your own risk ;)", nullptr));
        label_10->setText(QCoreApplication::translate("DisplaySettingsDlg", "Ramp width", nullptr));
        colorRampWidthSpinBox->setSuffix(QCoreApplication::translate("DisplaySettingsDlg", " pixels", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageSFOptions), QCoreApplication::translate("DisplaySettingsDlg", "Color scale (scalar field)", nullptr));
        label_13->setText(QCoreApplication::translate("DisplaySettingsDlg", "Label opacity", nullptr));
        label_16->setText(QCoreApplication::translate("DisplaySettingsDlg", "Label font size", nullptr));
        label_20->setText(QCoreApplication::translate("DisplaySettingsDlg", "background color", nullptr));
        label_15->setText(QCoreApplication::translate("DisplaySettingsDlg", "Labels marker size", nullptr));
        label_18->setText(QCoreApplication::translate("DisplaySettingsDlg", "marker color", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageLabelsOptions), QCoreApplication::translate("DisplaySettingsDlg", "Labels", nullptr));
        label_11->setText(QCoreApplication::translate("DisplaySettingsDlg", "Default font size", nullptr));
        label_14->setText(QCoreApplication::translate("DisplaySettingsDlg", "Displayed numbers precision", nullptr));
        label_17->setText(QCoreApplication::translate("DisplaySettingsDlg", "Perspective mode zooming speed", nullptr));
#if QT_CONFIG(tooltip)
        zoomSpeedDoubleSpinBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Zoom/walk speed in perspective mode (default = 1.0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        decimateCloudBox->setStatusTip(QCoreApplication::translate("DisplaySettingsDlg", "Automatically decimate big point clouds when moved", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        decimateCloudBox->setWhatsThis(QCoreApplication::translate("DisplaySettingsDlg", "Automatically decimate big point clouds when moved", nullptr));
#endif // QT_CONFIG(whatsthis)
        decimateCloudBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "When moved, decimate clouds over", nullptr));
#if QT_CONFIG(tooltip)
        maxCloudSizeDoubleSpinBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Minimum number of points to activate decimation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        decimateMeshBox->setStatusTip(QCoreApplication::translate("DisplaySettingsDlg", "Automatically decimate big meshes when moved", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        decimateMeshBox->setWhatsThis(QCoreApplication::translate("DisplaySettingsDlg", "Automatically decimate big meshes when moved", nullptr));
#endif // QT_CONFIG(whatsthis)
        decimateMeshBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "When moved, decimate meshes over", nullptr));
#if QT_CONFIG(tooltip)
        maxMeshSizeDoubleSpinBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Minimum number of triangles to activate decimation", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("DisplaySettingsDlg", "Auto-compute octree for picking", nullptr));
        autoComputeOctreeComboBox->setItemText(0, QCoreApplication::translate("DisplaySettingsDlg", "Always", nullptr));
        autoComputeOctreeComboBox->setItemText(1, QCoreApplication::translate("DisplaySettingsDlg", "Ask each time", nullptr));
        autoComputeOctreeComboBox->setItemText(2, QCoreApplication::translate("DisplaySettingsDlg", "Never", nullptr));

#if QT_CONFIG(tooltip)
        autoComputeOctreeComboBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Octree computation can be long but the picking is then much faster", nullptr));
#endif // QT_CONFIG(tooltip)
        autoDisplayNormalsCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Automatically display normals at loading time (if any)", nullptr));
        drawRoundedPointsCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Draw rounded points (slower)", nullptr));
#if QT_CONFIG(tooltip)
        showCrossCheckBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "A cross is displayed in the middle of the screen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        showCrossCheckBox->setStatusTip(QCoreApplication::translate("DisplaySettingsDlg", "A cross is displayed in the middle of the screen", nullptr));
#endif // QT_CONFIG(statustip)
        showCrossCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Show middle screen cross", nullptr));
        useVBOCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Try to load clouds on GPU for faster display", nullptr));
        useNativeDialogsCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Use native load / save dialogs", nullptr));
#if QT_CONFIG(tooltip)
        singleClickPickingCheckBox->setToolTip(QCoreApplication::translate("DisplaySettingsDlg", "Can be slow on large point clouds", nullptr));
#endif // QT_CONFIG(tooltip)
        singleClickPickingCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Single Click Object Picking", nullptr));
        label_19->setText(QCoreApplication::translate("DisplaySettingsDlg", "Application style", nullptr));
        label_21->setText(QCoreApplication::translate("DisplaySettingsDlg", "Picking cursor", nullptr));
        pickingCursorComboBox->setItemText(0, QCoreApplication::translate("DisplaySettingsDlg", "Cross", nullptr));
        pickingCursorComboBox->setItemText(1, QCoreApplication::translate("DisplaySettingsDlg", "Pointing hand", nullptr));

        confirmQuitCheckBox->setText(QCoreApplication::translate("DisplaySettingsDlg", "Ask for a confirmation before quitting", nullptr));
        label_23->setText(QCoreApplication::translate("DisplaySettingsDlg", "Log/console verbosity level", nullptr));
        logVerbosityComboBox->setItemText(0, QCoreApplication::translate("DisplaySettingsDlg", "Verbose", nullptr));
        logVerbosityComboBox->setItemText(1, QCoreApplication::translate("DisplaySettingsDlg", "Standard", nullptr));
        logVerbosityComboBox->setItemText(2, QCoreApplication::translate("DisplaySettingsDlg", "Important", nullptr));
        logVerbosityComboBox->setItemText(3, QCoreApplication::translate("DisplaySettingsDlg", "Warning & errors", nullptr));

        toolBox->setItemText(toolBox->indexOf(pageOtherOptions), QCoreApplication::translate("DisplaySettingsDlg", "Other options", nullptr));
        okButton->setText(QCoreApplication::translate("DisplaySettingsDlg", "Ok", nullptr));
        applyButton->setText(QCoreApplication::translate("DisplaySettingsDlg", "Apply", nullptr));
        resetButton->setText(QCoreApplication::translate("DisplaySettingsDlg", "Reset", nullptr));
        cancelButton->setText(QCoreApplication::translate("DisplaySettingsDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplaySettingsDlg: public Ui_DisplaySettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSETTINGSDLG_H
