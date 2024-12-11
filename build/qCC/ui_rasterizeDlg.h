/********************************************************************************
** Form generated from reading UI file 'rasterizeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTERIZEDLG_H
#define UI_RASTERIZEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RasterizeToolDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *gridWidthLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *gridStepDoubleSpinBox;
    QToolButton *editGridToolButton;
    QLabel *label_13;
    QComboBox *activeLayerComboBox;
    QLabel *label_7;
    QLabel *gridLayerRangeLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QComboBox *dimensionComboBox;
    QLabel *warningResampleWithAverageLabel;
    QComboBox *scalarFieldProjection;
    QLabel *label_21;
    QCheckBox *projectSFCheckBox;
    QComboBox *stdDevLayerComboBox;
    QLabel *label_8;
    QComboBox *heightProjectionComboBox;
    QCheckBox *resampleCloudCheckBox;
    QGroupBox *emptyCellsFrame;
    QFormLayout *formLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *fillEmptyCellsComboBox;
    QToolButton *interpParamsToolButton;
    QLabel *label;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QPushButton *updateGridPushButton;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *exportTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *generateCloudPushButton;
    QPushButton *generateMeshPushButton;
    QFrame *exportStatsFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QCheckBox *exportHeightStatsCheckBox;
    QCheckBox *exportSFStatsCheckBox;
    QFrame *exportStatisticsFrame;
    QGridLayout *gridLayout_2;
    QCheckBox *generateStatisticsPercentileCheckBox;
    QDoubleSpinBox *generateStatisticsPercentileDoubleSpinBox;
    QCheckBox *generateStatisticsMedianCheckBox;
    QCheckBox *generateStatisticsPopulationCheckBox;
    QCheckBox *generateStatisticsAverageCheckBox;
    QCheckBox *generateStatisticsStdDevCheckBox;
    QCheckBox *generateStatisticsRangeCheckBox;
    QCheckBox *generateStatisticsMaxCheckBox;
    QCheckBox *generateStatisticsMinCheckBox;
    QCheckBox *generateStatisticsUniqueCheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *generateRasterPushButton;
    QPushButton *generateImagePushButton;
    QPushButton *generateASCIIPushButton;
    QWidget *contourTab;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_15;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *contourStartDoubleSpinBox;
    QLabel *label_10;
    QDoubleSpinBox *contourStepDoubleSpinBox;
    QLabel *label_11;
    QSpinBox *minVertexCountSpinBox;
    QLabel *label_14;
    QSpinBox *contourWidthSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *colorizeContoursCheckBox;
    QCheckBox *ignoreContourBordersCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *projectContoursOnAltCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clearContoursPushButton;
    QPushButton *exportContoursPushButton;
    QPushButton *generateContoursPushButton;
    QWidget *hillshadeTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_17;
    QFormLayout *formLayout_5;
    QLabel *label_17b;
    QSpinBox *sunZenithSpinBox;
    QLabel *label_18;
    QSpinBox *sunAzimuthSpinBox;
    QSpacerItem *verticalSpacer_3;
    QPushButton *generateHillshadePushButton;
    QWidget *volumeTab;
    QFormLayout *formLayout_6;
    QLabel *label_19;
    QLabel *volumeLabel;
    QLabel *label_20;
    QLabel *filledCellsPercentageLabel;
    QVBoxLayout *verticalLayout_6;
    QLabel *cloudNameLabel;
    QFrame *mapFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RasterizeToolDialog)
    {
        if (RasterizeToolDialog->objectName().isEmpty())
            RasterizeToolDialog->setObjectName(QString::fromUtf8("RasterizeToolDialog"));
        RasterizeToolDialog->resize(1024, 800);
        verticalLayout_7 = new QVBoxLayout(RasterizeToolDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftFrame = new QFrame(RasterizeToolDialog);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(leftFrame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gridWidthLabel = new QLabel(groupBox);
        gridWidthLabel->setObjectName(QString::fromUtf8("gridWidthLabel"));
        gridWidthLabel->setText(QString::fromUtf8("640 x 480"));

        gridLayout->addWidget(gridWidthLabel, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridStepDoubleSpinBox = new QDoubleSpinBox(groupBox);
        gridStepDoubleSpinBox->setObjectName(QString::fromUtf8("gridStepDoubleSpinBox"));
        gridStepDoubleSpinBox->setDecimals(6);
        gridStepDoubleSpinBox->setMinimum(0.000010000000000);
        gridStepDoubleSpinBox->setMaximum(100000.000000000000000);
        gridStepDoubleSpinBox->setSingleStep(0.001000000000000);
        gridStepDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(gridStepDoubleSpinBox);

        editGridToolButton = new QToolButton(groupBox);
        editGridToolButton->setObjectName(QString::fromUtf8("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        activeLayerComboBox = new QComboBox(groupBox);
        activeLayerComboBox->setObjectName(QString::fromUtf8("activeLayerComboBox"));

        gridLayout->addWidget(activeLayerComboBox, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        gridLayerRangeLabel = new QLabel(groupBox);
        gridLayerRangeLabel->setObjectName(QString::fromUtf8("gridLayerRangeLabel"));

        gridLayout->addWidget(gridLayerRangeLabel, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(leftFrame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        dimensionComboBox = new QComboBox(groupBox_2);
        dimensionComboBox->addItem(QString::fromUtf8("X"));
        dimensionComboBox->addItem(QString::fromUtf8("Y"));
        dimensionComboBox->addItem(QString::fromUtf8("Z"));
        dimensionComboBox->setObjectName(QString::fromUtf8("dimensionComboBox"));

        gridLayout_3->addWidget(dimensionComboBox, 0, 1, 1, 1);

        warningResampleWithAverageLabel = new QLabel(groupBox_2);
        warningResampleWithAverageLabel->setObjectName(QString::fromUtf8("warningResampleWithAverageLabel"));
        warningResampleWithAverageLabel->setEnabled(false);
        warningResampleWithAverageLabel->setStyleSheet(QString::fromUtf8("color:red;"));
        warningResampleWithAverageLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(warningResampleWithAverageLabel, 8, 0, 1, 2);

        scalarFieldProjection = new QComboBox(groupBox_2);
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->setObjectName(QString::fromUtf8("scalarFieldProjection"));

        gridLayout_3->addWidget(scalarFieldProjection, 6, 1, 1, 1);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        projectSFCheckBox = new QCheckBox(groupBox_2);
        projectSFCheckBox->setObjectName(QString::fromUtf8("projectSFCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectSFCheckBox->sizePolicy().hasHeightForWidth());
        projectSFCheckBox->setSizePolicy(sizePolicy1);
        projectSFCheckBox->setChecked(true);

        gridLayout_3->addWidget(projectSFCheckBox, 6, 0, 1, 1);

        stdDevLayerComboBox = new QComboBox(groupBox_2);
        stdDevLayerComboBox->setObjectName(QString::fromUtf8("stdDevLayerComboBox"));

        gridLayout_3->addWidget(stdDevLayerComboBox, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        heightProjectionComboBox = new QComboBox(groupBox_2);
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->setObjectName(QString::fromUtf8("heightProjectionComboBox"));

        gridLayout_3->addWidget(heightProjectionComboBox, 1, 1, 1, 1);

        resampleCloudCheckBox = new QCheckBox(groupBox_2);
        resampleCloudCheckBox->setObjectName(QString::fromUtf8("resampleCloudCheckBox"));
        sizePolicy1.setHeightForWidth(resampleCloudCheckBox->sizePolicy().hasHeightForWidth());
        resampleCloudCheckBox->setSizePolicy(sizePolicy1);
        resampleCloudCheckBox->setChecked(false);

        gridLayout_3->addWidget(resampleCloudCheckBox, 7, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        emptyCellsFrame = new QGroupBox(leftFrame);
        emptyCellsFrame->setObjectName(QString::fromUtf8("emptyCellsFrame"));
        formLayout = new QFormLayout(emptyCellsFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setVerticalSpacing(6);
        label_5 = new QLabel(emptyCellsFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fillEmptyCellsComboBox = new QComboBox(emptyCellsFrame);
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->addItem(QString());
        fillEmptyCellsComboBox->setObjectName(QString::fromUtf8("fillEmptyCellsComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fillEmptyCellsComboBox->sizePolicy().hasHeightForWidth());
        fillEmptyCellsComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(fillEmptyCellsComboBox);

        interpParamsToolButton = new QToolButton(emptyCellsFrame);
        interpParamsToolButton->setObjectName(QString::fromUtf8("interpParamsToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/gearIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        interpParamsToolButton->setIcon(icon);

        horizontalLayout_3->addWidget(interpParamsToolButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label = new QLabel(emptyCellsFrame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy1);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-999999999.000000000000000);
        emptyValueDoubleSpinBox->setMaximum(999999999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, emptyValueDoubleSpinBox);


        verticalLayout->addWidget(emptyCellsFrame);

        updateGridPushButton = new QPushButton(leftFrame);
        updateGridPushButton->setObjectName(QString::fromUtf8("updateGridPushButton"));
        sizePolicy1.setHeightForWidth(updateGridPushButton->sizePolicy().hasHeightForWidth());
        updateGridPushButton->setSizePolicy(sizePolicy1);
        updateGridPushButton->setStyleSheet(QString::fromUtf8("color: white; background-color:red;"));

        verticalLayout->addWidget(updateGridPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget = new QTabWidget(leftFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        exportTab = new QWidget();
        exportTab->setObjectName(QString::fromUtf8("exportTab"));
        verticalLayout_3 = new QVBoxLayout(exportTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(8, -1, 8, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        generateCloudPushButton = new QPushButton(exportTab);
        generateCloudPushButton->setObjectName(QString::fromUtf8("generateCloudPushButton"));

        horizontalLayout_6->addWidget(generateCloudPushButton);

        generateMeshPushButton = new QPushButton(exportTab);
        generateMeshPushButton->setObjectName(QString::fromUtf8("generateMeshPushButton"));

        horizontalLayout_6->addWidget(generateMeshPushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        exportStatsFrame = new QFrame(exportTab);
        exportStatsFrame->setObjectName(QString::fromUtf8("exportStatsFrame"));
        exportStatsFrame->setFrameShape(QFrame::StyledPanel);
        exportStatsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(exportStatsFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(exportStatsFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_2->addWidget(label_22);

        exportHeightStatsCheckBox = new QCheckBox(exportStatsFrame);
        exportHeightStatsCheckBox->setObjectName(QString::fromUtf8("exportHeightStatsCheckBox"));
        exportHeightStatsCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(exportHeightStatsCheckBox);

        exportSFStatsCheckBox = new QCheckBox(exportStatsFrame);
        exportSFStatsCheckBox->setObjectName(QString::fromUtf8("exportSFStatsCheckBox"));

        horizontalLayout_2->addWidget(exportSFStatsCheckBox);


        verticalLayout_3->addWidget(exportStatsFrame);

        exportStatisticsFrame = new QFrame(exportTab);
        exportStatisticsFrame->setObjectName(QString::fromUtf8("exportStatisticsFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(exportStatisticsFrame->sizePolicy().hasHeightForWidth());
        exportStatisticsFrame->setSizePolicy(sizePolicy4);
        exportStatisticsFrame->setFrameShape(QFrame::StyledPanel);
        exportStatisticsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(exportStatisticsFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        generateStatisticsPercentileCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsPercentileCheckBox->setObjectName(QString::fromUtf8("generateStatisticsPercentileCheckBox"));

        gridLayout_2->addWidget(generateStatisticsPercentileCheckBox, 3, 1, 1, 1);

        generateStatisticsPercentileDoubleSpinBox = new QDoubleSpinBox(exportStatisticsFrame);
        generateStatisticsPercentileDoubleSpinBox->setObjectName(QString::fromUtf8("generateStatisticsPercentileDoubleSpinBox"));
        generateStatisticsPercentileDoubleSpinBox->setEnabled(false);
        generateStatisticsPercentileDoubleSpinBox->setDecimals(2);
        generateStatisticsPercentileDoubleSpinBox->setMinimum(0.000000000000000);
        generateStatisticsPercentileDoubleSpinBox->setMaximum(99.989999999999995);
        generateStatisticsPercentileDoubleSpinBox->setValue(50.000000000000000);

        gridLayout_2->addWidget(generateStatisticsPercentileDoubleSpinBox, 3, 2, 1, 1);

        generateStatisticsMedianCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsMedianCheckBox->setObjectName(QString::fromUtf8("generateStatisticsMedianCheckBox"));

        gridLayout_2->addWidget(generateStatisticsMedianCheckBox, 2, 1, 1, 1);

        generateStatisticsPopulationCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsPopulationCheckBox->setObjectName(QString::fromUtf8("generateStatisticsPopulationCheckBox"));

        gridLayout_2->addWidget(generateStatisticsPopulationCheckBox, 0, 0, 1, 1);

        generateStatisticsAverageCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsAverageCheckBox->setObjectName(QString::fromUtf8("generateStatisticsAverageCheckBox"));

        gridLayout_2->addWidget(generateStatisticsAverageCheckBox, 0, 1, 1, 1);

        generateStatisticsStdDevCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsStdDevCheckBox->setObjectName(QString::fromUtf8("generateStatisticsStdDevCheckBox"));

        gridLayout_2->addWidget(generateStatisticsStdDevCheckBox, 1, 1, 1, 1);

        generateStatisticsRangeCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsRangeCheckBox->setObjectName(QString::fromUtf8("generateStatisticsRangeCheckBox"));

        gridLayout_2->addWidget(generateStatisticsRangeCheckBox, 3, 0, 1, 1);

        generateStatisticsMaxCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsMaxCheckBox->setObjectName(QString::fromUtf8("generateStatisticsMaxCheckBox"));

        gridLayout_2->addWidget(generateStatisticsMaxCheckBox, 2, 0, 1, 1);

        generateStatisticsMinCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsMinCheckBox->setObjectName(QString::fromUtf8("generateStatisticsMinCheckBox"));

        gridLayout_2->addWidget(generateStatisticsMinCheckBox, 1, 0, 1, 1);

        generateStatisticsUniqueCheckBox = new QCheckBox(exportStatisticsFrame);
        generateStatisticsUniqueCheckBox->setObjectName(QString::fromUtf8("generateStatisticsUniqueCheckBox"));

        gridLayout_2->addWidget(generateStatisticsUniqueCheckBox, 0, 2, 1, 1);


        verticalLayout_3->addWidget(exportStatisticsFrame);

        line = new QFrame(exportTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        generateRasterPushButton = new QPushButton(exportTab);
        generateRasterPushButton->setObjectName(QString::fromUtf8("generateRasterPushButton"));

        horizontalLayout_8->addWidget(generateRasterPushButton);

        generateImagePushButton = new QPushButton(exportTab);
        generateImagePushButton->setObjectName(QString::fromUtf8("generateImagePushButton"));

        horizontalLayout_8->addWidget(generateImagePushButton);

        generateASCIIPushButton = new QPushButton(exportTab);
        generateASCIIPushButton->setObjectName(QString::fromUtf8("generateASCIIPushButton"));

        horizontalLayout_8->addWidget(generateASCIIPushButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        tabWidget->addTab(exportTab, QString());
        contourTab = new QWidget();
        contourTab->setObjectName(QString::fromUtf8("contourTab"));
        verticalLayout_4 = new QVBoxLayout(contourTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(8, -1, 8, 0);
        label_15 = new QLabel(contourTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font;
        font.setItalic(true);
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: blue;"));

        verticalLayout_4->addWidget(label_15);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_6 = new QLabel(contourTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        contourStartDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStartDoubleSpinBox->setObjectName(QString::fromUtf8("contourStartDoubleSpinBox"));
        contourStartDoubleSpinBox->setDecimals(6);
        contourStartDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        contourStartDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, contourStartDoubleSpinBox);

        label_10 = new QLabel(contourTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        contourStepDoubleSpinBox = new QDoubleSpinBox(contourTab);
        contourStepDoubleSpinBox->setObjectName(QString::fromUtf8("contourStepDoubleSpinBox"));
        contourStepDoubleSpinBox->setDecimals(6);
        contourStepDoubleSpinBox->setMinimum(0.000001000000000);
        contourStepDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, contourStepDoubleSpinBox);

        label_11 = new QLabel(contourTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        minVertexCountSpinBox = new QSpinBox(contourTab);
        minVertexCountSpinBox->setObjectName(QString::fromUtf8("minVertexCountSpinBox"));
        minVertexCountSpinBox->setMinimum(3);
        minVertexCountSpinBox->setMaximum(10000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, minVertexCountSpinBox);

        label_14 = new QLabel(contourTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_14);

        contourWidthSpinBox = new QSpinBox(contourTab);
        contourWidthSpinBox->setObjectName(QString::fromUtf8("contourWidthSpinBox"));
        contourWidthSpinBox->setMinimum(1);
        contourWidthSpinBox->setMaximum(10);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, contourWidthSpinBox);


        verticalLayout_4->addLayout(formLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        colorizeContoursCheckBox = new QCheckBox(contourTab);
        colorizeContoursCheckBox->setObjectName(QString::fromUtf8("colorizeContoursCheckBox"));

        horizontalLayout_5->addWidget(colorizeContoursCheckBox);

        ignoreContourBordersCheckBox = new QCheckBox(contourTab);
        ignoreContourBordersCheckBox->setObjectName(QString::fromUtf8("ignoreContourBordersCheckBox"));
        ignoreContourBordersCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(ignoreContourBordersCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        projectContoursOnAltCheckBox = new QCheckBox(contourTab);
        projectContoursOnAltCheckBox->setObjectName(QString::fromUtf8("projectContoursOnAltCheckBox"));
        projectContoursOnAltCheckBox->setEnabled(false);

        verticalLayout_4->addWidget(projectContoursOnAltCheckBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        clearContoursPushButton = new QPushButton(contourTab);
        clearContoursPushButton->setObjectName(QString::fromUtf8("clearContoursPushButton"));
        clearContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(clearContoursPushButton);

        exportContoursPushButton = new QPushButton(contourTab);
        exportContoursPushButton->setObjectName(QString::fromUtf8("exportContoursPushButton"));
        exportContoursPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(exportContoursPushButton);

        generateContoursPushButton = new QPushButton(contourTab);
        generateContoursPushButton->setObjectName(QString::fromUtf8("generateContoursPushButton"));

        horizontalLayout_7->addWidget(generateContoursPushButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        tabWidget->addTab(contourTab, QString());
        hillshadeTab = new QWidget();
        hillshadeTab->setObjectName(QString::fromUtf8("hillshadeTab"));
        verticalLayout_5 = new QVBoxLayout(hillshadeTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_17 = new QLabel(hillshadeTab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: blue;"));

        verticalLayout_5->addWidget(label_17);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_17b = new QLabel(hillshadeTab);
        label_17b->setObjectName(QString::fromUtf8("label_17b"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_17b);

        sunZenithSpinBox = new QSpinBox(hillshadeTab);
        sunZenithSpinBox->setObjectName(QString::fromUtf8("sunZenithSpinBox"));
        sunZenithSpinBox->setMaximum(90);
        sunZenithSpinBox->setSingleStep(5);
        sunZenithSpinBox->setValue(45);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, sunZenithSpinBox);

        label_18 = new QLabel(hillshadeTab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_18);

        sunAzimuthSpinBox = new QSpinBox(hillshadeTab);
        sunAzimuthSpinBox->setObjectName(QString::fromUtf8("sunAzimuthSpinBox"));
        sunAzimuthSpinBox->setMaximum(360);
        sunAzimuthSpinBox->setSingleStep(5);
        sunAzimuthSpinBox->setValue(315);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, sunAzimuthSpinBox);


        verticalLayout_5->addLayout(formLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        generateHillshadePushButton = new QPushButton(hillshadeTab);
        generateHillshadePushButton->setObjectName(QString::fromUtf8("generateHillshadePushButton"));

        verticalLayout_5->addWidget(generateHillshadePushButton);

        tabWidget->addTab(hillshadeTab, QString());
        volumeTab = new QWidget();
        volumeTab->setObjectName(QString::fromUtf8("volumeTab"));
        formLayout_6 = new QFormLayout(volumeTab);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_19 = new QLabel(volumeTab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_19);

        volumeLabel = new QLabel(volumeTab);
        volumeLabel->setObjectName(QString::fromUtf8("volumeLabel"));
        volumeLabel->setText(QString::fromUtf8("0"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, volumeLabel);

        label_20 = new QLabel(volumeTab);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_20);

        filledCellsPercentageLabel = new QLabel(volumeTab);
        filledCellsPercentageLabel->setObjectName(QString::fromUtf8("filledCellsPercentageLabel"));
        filledCellsPercentageLabel->setText(QString::fromUtf8("0%"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, filledCellsPercentageLabel);

        tabWidget->addTab(volumeTab, QString());

        verticalLayout->addWidget(tabWidget);

        verticalLayout->setStretch(3, 1);

        horizontalLayout->addWidget(leftFrame);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        cloudNameLabel = new QLabel(RasterizeToolDialog);
        cloudNameLabel->setObjectName(QString::fromUtf8("cloudNameLabel"));
        cloudNameLabel->setMinimumSize(QSize(0, 20));
        cloudNameLabel->setAlignment(Qt::AlignCenter);
        cloudNameLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_6->addWidget(cloudNameLabel);

        mapFrame = new QFrame(RasterizeToolDialog);
        mapFrame->setObjectName(QString::fromUtf8("mapFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mapFrame->sizePolicy().hasHeightForWidth());
        mapFrame->setSizePolicy(sizePolicy5);
        mapFrame->setMinimumSize(QSize(512, 512));

        verticalLayout_6->addWidget(mapFrame);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RasterizeToolDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(RasterizeToolDialog);
        QObject::connect(projectSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));
        QObject::connect(generateStatisticsPercentileCheckBox, SIGNAL(toggled(bool)), generateStatisticsPercentileDoubleSpinBox, SLOT(setEnabled(bool)));

        dimensionComboBox->setCurrentIndex(0);
        scalarFieldProjection->setCurrentIndex(0);
        heightProjectionComboBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RasterizeToolDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterizeToolDialog)
    {
        RasterizeToolDialog->setWindowTitle(QCoreApplication::translate("RasterizeToolDialog", "Rasterize", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RasterizeToolDialog", "Grid", nullptr));
        label_4->setText(QCoreApplication::translate("RasterizeToolDialog", "size", nullptr));
        label_2->setText(QCoreApplication::translate("RasterizeToolDialog", "step", nullptr));
#if QT_CONFIG(tooltip)
        gridStepDoubleSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "grid cell size (in the same units as the coordinates of the point cloud)", nullptr));
#endif // QT_CONFIG(tooltip)
        editGridToolButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Edit grid", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Active layer (or 'scalar field')", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("RasterizeToolDialog", "active layer", nullptr));
#if QT_CONFIG(tooltip)
        activeLayerComboBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Visible layer", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("RasterizeToolDialog", "range", nullptr));
        gridLayerRangeLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("RasterizeToolDialog", "Projection", nullptr));
        label_9->setText(QCoreApplication::translate("RasterizeToolDialog", "direction", nullptr));

#if QT_CONFIG(tooltip)
        dimensionComboBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Projection direction", nullptr));
#endif // QT_CONFIG(tooltip)
        warningResampleWithAverageLabel->setText(QCoreApplication::translate("RasterizeToolDialog", "Warning: the original point's height will be\n"
"replaced by the cell's average height!", nullptr));
        scalarFieldProjection->setItemText(0, QCoreApplication::translate("RasterizeToolDialog", "minimum value", nullptr));
        scalarFieldProjection->setItemText(1, QCoreApplication::translate("RasterizeToolDialog", "average value", nullptr));
        scalarFieldProjection->setItemText(2, QCoreApplication::translate("RasterizeToolDialog", "maximum value", nullptr));
        scalarFieldProjection->setItemText(3, QCoreApplication::translate("RasterizeToolDialog", "median value", nullptr));
        scalarFieldProjection->setItemText(4, QCoreApplication::translate("RasterizeToolDialog", "inverse var", nullptr));

#if QT_CONFIG(tooltip)
        scalarFieldProjection->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "SF projection method", nullptr));
#endif // QT_CONFIG(tooltip)
        label_21->setText(QCoreApplication::translate("RasterizeToolDialog", "Std. dev. layer", nullptr));
#if QT_CONFIG(tooltip)
        projectSFCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Project SF(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        projectSFCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "project SF(s)", nullptr));
#if QT_CONFIG(tooltip)
        stdDevLayerComboBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Std. dev. scalar field used for inverse variance weighted average", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("RasterizeToolDialog", "cell height", nullptr));
        heightProjectionComboBox->setItemText(0, QCoreApplication::translate("RasterizeToolDialog", "minimum", nullptr));
        heightProjectionComboBox->setItemText(1, QCoreApplication::translate("RasterizeToolDialog", "average", nullptr));
        heightProjectionComboBox->setItemText(2, QCoreApplication::translate("RasterizeToolDialog", "maximum", nullptr));
        heightProjectionComboBox->setItemText(3, QCoreApplication::translate("RasterizeToolDialog", "median", nullptr));
        heightProjectionComboBox->setItemText(4, QCoreApplication::translate("RasterizeToolDialog", "inverse var", nullptr));

#if QT_CONFIG(tooltip)
        heightProjectionComboBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "<html><head/><body>Per-cell height computation method:<ul>\n"
"<li>minimum = lowest point in the cell</li>\n"
"<li>average = mean height of all points inside the cell</li>\n"
"<li>maximum = highest point in the cell</li>\n"
"<li>median = median height of all points inside the cell</li>\n"
"<li>inverse var = inverse variance weighted average. Calculate variance from std. dev. SF.</li>\n"
"</ul>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resampleCloudCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Use the nearest point of the input cloud in each cell instead of the cell center", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleCloudCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "resample input cloud", nullptr));
        emptyCellsFrame->setTitle(QCoreApplication::translate("RasterizeToolDialog", "Empty cells", nullptr));
        label_5->setText(QCoreApplication::translate("RasterizeToolDialog", "Fill with", nullptr));
        fillEmptyCellsComboBox->setItemText(0, QCoreApplication::translate("RasterizeToolDialog", "leave empty", nullptr));
        fillEmptyCellsComboBox->setItemText(1, QCoreApplication::translate("RasterizeToolDialog", "minimum height", nullptr));
        fillEmptyCellsComboBox->setItemText(2, QCoreApplication::translate("RasterizeToolDialog", "average height", nullptr));
        fillEmptyCellsComboBox->setItemText(3, QCoreApplication::translate("RasterizeToolDialog", "maximum height", nullptr));
        fillEmptyCellsComboBox->setItemText(4, QCoreApplication::translate("RasterizeToolDialog", "user specified value", nullptr));
        fillEmptyCellsComboBox->setItemText(5, QCoreApplication::translate("RasterizeToolDialog", "interpolate", nullptr));
        fillEmptyCellsComboBox->setItemText(6, QCoreApplication::translate("RasterizeToolDialog", "kriging", nullptr));

#if QT_CONFIG(tooltip)
        fillEmptyCellsComboBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "<html><head/><body>Strategy to fill empty cells:\n"
"<ul>\n"
"<li>minimum height</li>\n"
"<li>average height</li>\n"
"<li>maximum height</li>\n"
"<li>user specified height</li>\n"
"<li>interpolation</li>\n"
"</ul>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RasterizeToolDialog", "Empty cell value", nullptr));
#if QT_CONFIG(tooltip)
        emptyValueDoubleSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Custom value for empty cells", nullptr));
#endif // QT_CONFIG(tooltip)
        updateGridPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Update grid", nullptr));
#if QT_CONFIG(tooltip)
        generateCloudPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export grid as a point cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        generateCloudPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Cloud", nullptr));
#if QT_CONFIG(tooltip)
        generateMeshPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export grid as a mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        generateMeshPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Mesh", nullptr));
        label_22->setText(QCoreApplication::translate("RasterizeToolDialog", "Export statistics:", nullptr));
#if QT_CONFIG(tooltip)
        exportHeightStatsCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "When exporting to a cloud or a mesh,\n"
"adds one scalar field for each metric checked below,\n"
"applied to the height values", nullptr));
#endif // QT_CONFIG(tooltip)
        exportHeightStatsCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "height", nullptr));
#if QT_CONFIG(tooltip)
        exportSFStatsCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "When exporting to a cloud or a mesh,\n"
"adds one scalar field for each metric checked below,\n"
"applied to all existing scalar fields", nullptr));
#endif // QT_CONFIG(tooltip)
        exportSFStatsCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "scalar fields", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsPercentileCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Percentile (customizable) of values in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsPercentileCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "percentile", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsPercentileDoubleSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Percentile value 0-99.99", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsPercentileDoubleSpinBox->setSuffix(QCoreApplication::translate("RasterizeToolDialog", "%", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsMedianCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Median of values in each cell (= p50 percentile)", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsMedianCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "median", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsPopulationCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Number of points in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsPopulationCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "population", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsAverageCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Average of values in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsAverageCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "average", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsStdDevCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Standard deviation of values in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsStdDevCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "std. dev.", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsRangeCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Range of values in each cell (= max - min)", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsRangeCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "range", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsMaxCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Maximum value in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsMaxCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "max", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsMinCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Minimum value in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsMinCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "min", nullptr));
#if QT_CONFIG(tooltip)
        generateStatisticsUniqueCheckBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Number of unique values in each cell", nullptr));
#endif // QT_CONFIG(tooltip)
        generateStatisticsUniqueCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "unique val.", nullptr));
#if QT_CONFIG(tooltip)
        generateRasterPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export grid as a raster (geotiff)", nullptr));
#endif // QT_CONFIG(tooltip)
        generateRasterPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Raster", nullptr));
#if QT_CONFIG(tooltip)
        generateImagePushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export grid as an image", nullptr));
#endif // QT_CONFIG(tooltip)
        generateImagePushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Image", nullptr));
#if QT_CONFIG(tooltip)
        generateASCIIPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export grid as a matrix (text file)", nullptr));
#endif // QT_CONFIG(tooltip)
        generateASCIIPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Matrix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(exportTab), QCoreApplication::translate("RasterizeToolDialog", "Export", nullptr));
        label_15->setText(QCoreApplication::translate("RasterizeToolDialog", "The contour plot is computed on the active layer", nullptr));
        label_6->setText(QCoreApplication::translate("RasterizeToolDialog", "Start value", nullptr));
        label_10->setText(QCoreApplication::translate("RasterizeToolDialog", "step", nullptr));
        label_11->setText(QCoreApplication::translate("RasterizeToolDialog", "Min. vertex count", nullptr));
#if QT_CONFIG(tooltip)
        minVertexCountSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Min vertex count per iso-line (to ignore the smallest ones)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("RasterizeToolDialog", "Line width", nullptr));
#if QT_CONFIG(tooltip)
        contourWidthSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Default contour lines width", nullptr));
#endif // QT_CONFIG(tooltip)
        colorizeContoursCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "colorize", nullptr));
        ignoreContourBordersCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "ignore borders", nullptr));
        projectContoursOnAltCheckBox->setText(QCoreApplication::translate("RasterizeToolDialog", "project contours on the altitude layer", nullptr));
#if QT_CONFIG(tooltip)
        clearContoursPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Remove all contour lines", nullptr));
#endif // QT_CONFIG(tooltip)
        clearContoursPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        exportContoursPushButton->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Export contour lines to the DB tree", nullptr));
#endif // QT_CONFIG(tooltip)
        exportContoursPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Export", nullptr));
        generateContoursPushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(contourTab), QCoreApplication::translate("RasterizeToolDialog", "Contour plot", nullptr));
        label_17->setText(QCoreApplication::translate("RasterizeToolDialog", "Hillshade is computed on the height layer", nullptr));
        label_17b->setText(QCoreApplication::translate("RasterizeToolDialog", "Sun zenith", nullptr));
#if QT_CONFIG(tooltip)
        sunZenithSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Zenith angle (in degrees) = 90 - altitude angle", nullptr));
#endif // QT_CONFIG(tooltip)
        sunZenithSpinBox->setSuffix(QCoreApplication::translate("RasterizeToolDialog", " deg.", nullptr));
        label_18->setText(QCoreApplication::translate("RasterizeToolDialog", "Sun azimuth", nullptr));
#if QT_CONFIG(tooltip)
        sunAzimuthSpinBox->setToolTip(QCoreApplication::translate("RasterizeToolDialog", "Azimuth angle (in degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
        sunAzimuthSpinBox->setSuffix(QCoreApplication::translate("RasterizeToolDialog", " deg.", nullptr));
        generateHillshadePushButton->setText(QCoreApplication::translate("RasterizeToolDialog", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(hillshadeTab), QCoreApplication::translate("RasterizeToolDialog", "Hillshade", nullptr));
        label_19->setText(QCoreApplication::translate("RasterizeToolDialog", "Volume", nullptr));
        label_20->setText(QCoreApplication::translate("RasterizeToolDialog", "Non empty cells", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(volumeTab), QCoreApplication::translate("RasterizeToolDialog", "Volume", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RasterizeToolDialog: public Ui_RasterizeToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTERIZEDLG_H
