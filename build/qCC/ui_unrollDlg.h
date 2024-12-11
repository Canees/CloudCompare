/********************************************************************************
** Form generated from reading UI file 'unrollDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNROLLDLG_H
#define UI_UNROLLDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnrollDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *comboBoxUnrollShapeType;
    QToolButton *fromEntityToolButton;
    QSpacerItem *spacerItem;
    QCheckBox *exportDeviationSFCheckBox;
    QCheckBox *arbitraryCSCheckBox;
    QFrame *conicalProjectionFrame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxProjectionType;
    QFrame *spanRatioFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QDoubleSpinBox *conicalProjSpanRatioDoubleSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *shapeGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *comboBoxAxisDimension;
    QFrame *axisFrame;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *axisXDoubleSpinBox;
    QDoubleSpinBox *axisYDoubleSpinBox;
    QDoubleSpinBox *axisZDoubleSpinBox;
    QToolButton *flipxAxisToolButton;
    QToolButton *pasteAxisToolButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QFrame *angleFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAngle;
    QDoubleSpinBox *halfAngleDoubleSpinBox;
    QFrame *radiusFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *radiusLabel;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *axisPositionGroupBox;
    QVBoxLayout *vboxLayout1;
    QFrame *axisCenterFrame;
    QHBoxLayout *hboxLayout1;
    QLabel *label1;
    QDoubleSpinBox *axisCenterXDoubleSpinBox;
    QLabel *label2;
    QDoubleSpinBox *axisCenterYDoubleSpinBox;
    QLabel *label3;
    QDoubleSpinBox *axisCenterZDoubleSpinBox;
    QToolButton *pasteCenterToolButton;
    QSpacerItem *horizontalSpacer;
    QFrame *autoCenterFrame;
    QHBoxLayout *hboxLayout2;
    QCheckBox *checkBoxAuto;
    QSpacerItem *spacerItem1;
    QGroupBox *unrollRangeGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *startAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QDoubleSpinBox *stopAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UnrollDialog)
    {
        if (UnrollDialog->objectName().isEmpty())
            UnrollDialog->setObjectName(QString::fromUtf8("UnrollDialog"));
        UnrollDialog->resize(610, 360);
        vboxLayout = new QVBoxLayout(UnrollDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(UnrollDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        comboBoxUnrollShapeType = new QComboBox(UnrollDialog);
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->setObjectName(QString::fromUtf8("comboBoxUnrollShapeType"));

        hboxLayout->addWidget(comboBoxUnrollShapeType);

        fromEntityToolButton = new QToolButton(UnrollDialog);
        fromEntityToolButton->setObjectName(QString::fromUtf8("fromEntityToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/dbContainerSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        fromEntityToolButton->setIcon(icon);

        hboxLayout->addWidget(fromEntityToolButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        exportDeviationSFCheckBox = new QCheckBox(UnrollDialog);
        exportDeviationSFCheckBox->setObjectName(QString::fromUtf8("exportDeviationSFCheckBox"));

        hboxLayout->addWidget(exportDeviationSFCheckBox);

        arbitraryCSCheckBox = new QCheckBox(UnrollDialog);
        arbitraryCSCheckBox->setObjectName(QString::fromUtf8("arbitraryCSCheckBox"));

        hboxLayout->addWidget(arbitraryCSCheckBox);


        vboxLayout->addLayout(hboxLayout);

        conicalProjectionFrame = new QFrame(UnrollDialog);
        conicalProjectionFrame->setObjectName(QString::fromUtf8("conicalProjectionFrame"));
        conicalProjectionFrame->setFrameShape(QFrame::StyledPanel);
        conicalProjectionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(conicalProjectionFrame);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(conicalProjectionFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        comboBoxProjectionType = new QComboBox(conicalProjectionFrame);
        comboBoxProjectionType->addItem(QString());
        comboBoxProjectionType->addItem(QString());
        comboBoxProjectionType->addItem(QString());
        comboBoxProjectionType->setObjectName(QString::fromUtf8("comboBoxProjectionType"));

        horizontalLayout_7->addWidget(comboBoxProjectionType);

        spanRatioFrame = new QFrame(conicalProjectionFrame);
        spanRatioFrame->setObjectName(QString::fromUtf8("spanRatioFrame"));
        horizontalLayout_8 = new QHBoxLayout(spanRatioFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(6, 0, 0, 0);
        label_6 = new QLabel(spanRatioFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        conicalProjSpanRatioDoubleSpinBox = new QDoubleSpinBox(spanRatioFrame);
        conicalProjSpanRatioDoubleSpinBox->setObjectName(QString::fromUtf8("conicalProjSpanRatioDoubleSpinBox"));
        conicalProjSpanRatioDoubleSpinBox->setMinimum(0.100000000000000);
        conicalProjSpanRatioDoubleSpinBox->setMaximum(10.000000000000000);
        conicalProjSpanRatioDoubleSpinBox->setSingleStep(0.100000000000000);
        conicalProjSpanRatioDoubleSpinBox->setValue(0.250000000000000);

        horizontalLayout_8->addWidget(conicalProjSpanRatioDoubleSpinBox);


        horizontalLayout_7->addWidget(spanRatioFrame);

        horizontalSpacer_6 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        vboxLayout->addWidget(conicalProjectionFrame);

        shapeGroupBox = new QGroupBox(UnrollDialog);
        shapeGroupBox->setObjectName(QString::fromUtf8("shapeGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shapeGroupBox->sizePolicy().hasHeightForWidth());
        shapeGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(shapeGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(shapeGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label);

        comboBoxAxisDimension = new QComboBox(shapeGroupBox);
        comboBoxAxisDimension->addItem(QString::fromUtf8("X"));
        comboBoxAxisDimension->addItem(QString::fromUtf8("Y"));
        comboBoxAxisDimension->addItem(QString::fromUtf8("Z"));
        comboBoxAxisDimension->addItem(QString());
        comboBoxAxisDimension->setObjectName(QString::fromUtf8("comboBoxAxisDimension"));

        horizontalLayout_5->addWidget(comboBoxAxisDimension);

        axisFrame = new QFrame(shapeGroupBox);
        axisFrame->setObjectName(QString::fromUtf8("axisFrame"));
        axisFrame->setFrameShape(QFrame::StyledPanel);
        axisFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(axisFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        axisXDoubleSpinBox = new QDoubleSpinBox(axisFrame);
        axisXDoubleSpinBox->setObjectName(QString::fromUtf8("axisXDoubleSpinBox"));
        axisXDoubleSpinBox->setEnabled(true);
        axisXDoubleSpinBox->setDecimals(6);
        axisXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(axisXDoubleSpinBox);

        axisYDoubleSpinBox = new QDoubleSpinBox(axisFrame);
        axisYDoubleSpinBox->setObjectName(QString::fromUtf8("axisYDoubleSpinBox"));
        axisYDoubleSpinBox->setEnabled(true);
        axisYDoubleSpinBox->setDecimals(6);
        axisYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(axisYDoubleSpinBox);

        axisZDoubleSpinBox = new QDoubleSpinBox(axisFrame);
        axisZDoubleSpinBox->setObjectName(QString::fromUtf8("axisZDoubleSpinBox"));
        axisZDoubleSpinBox->setEnabled(true);
        axisZDoubleSpinBox->setDecimals(6);
        axisZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisZDoubleSpinBox->setMaximum(1000000000.000000000000000);
        axisZDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(axisZDoubleSpinBox);

        flipxAxisToolButton = new QToolButton(axisFrame);
        flipxAxisToolButton->setObjectName(QString::fromUtf8("flipxAxisToolButton"));

        horizontalLayout_4->addWidget(flipxAxisToolButton);

        pasteAxisToolButton = new QToolButton(axisFrame);
        pasteAxisToolButton->setObjectName(QString::fromUtf8("pasteAxisToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAxisToolButton->setIcon(icon1);

        horizontalLayout_4->addWidget(pasteAxisToolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        horizontalLayout_5->addWidget(axisFrame);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        angleFrame = new QFrame(shapeGroupBox);
        angleFrame->setObjectName(QString::fromUtf8("angleFrame"));
        angleFrame->setFrameShape(QFrame::StyledPanel);
        angleFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(angleFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAngle = new QLabel(angleFrame);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));

        horizontalLayout->addWidget(labelAngle);

        halfAngleDoubleSpinBox = new QDoubleSpinBox(angleFrame);
        halfAngleDoubleSpinBox->setObjectName(QString::fromUtf8("halfAngleDoubleSpinBox"));
        halfAngleDoubleSpinBox->setDecimals(2);
        halfAngleDoubleSpinBox->setMaximum(180.000000000000000);
        halfAngleDoubleSpinBox->setValue(15.000000000000000);

        horizontalLayout->addWidget(halfAngleDoubleSpinBox);


        horizontalLayout_6->addWidget(angleFrame);

        radiusFrame = new QFrame(shapeGroupBox);
        radiusFrame->setObjectName(QString::fromUtf8("radiusFrame"));
        horizontalLayout_2 = new QHBoxLayout(radiusFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radiusLabel = new QLabel(radiusFrame);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(radiusLabel);

        radiusDoubleSpinBox = new QDoubleSpinBox(radiusFrame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1000000000.000000000000000);
        radiusDoubleSpinBox->setValue(100.000000000000000);

        horizontalLayout_2->addWidget(radiusDoubleSpinBox);


        horizontalLayout_6->addWidget(radiusFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);


        vboxLayout->addWidget(shapeGroupBox);

        axisPositionGroupBox = new QGroupBox(UnrollDialog);
        axisPositionGroupBox->setObjectName(QString::fromUtf8("axisPositionGroupBox"));
        vboxLayout1 = new QVBoxLayout(axisPositionGroupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        axisCenterFrame = new QFrame(axisPositionGroupBox);
        axisCenterFrame->setObjectName(QString::fromUtf8("axisCenterFrame"));
        hboxLayout1 = new QHBoxLayout(axisCenterFrame);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(axisCenterFrame);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setText(QString::fromUtf8("X"));
        label1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(label1);

        axisCenterXDoubleSpinBox = new QDoubleSpinBox(axisCenterFrame);
        axisCenterXDoubleSpinBox->setObjectName(QString::fromUtf8("axisCenterXDoubleSpinBox"));
        axisCenterXDoubleSpinBox->setEnabled(true);
        axisCenterXDoubleSpinBox->setDecimals(6);
        axisCenterXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisCenterXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        hboxLayout1->addWidget(axisCenterXDoubleSpinBox);

        label2 = new QLabel(axisCenterFrame);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setText(QString::fromUtf8("Y"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(label2);

        axisCenterYDoubleSpinBox = new QDoubleSpinBox(axisCenterFrame);
        axisCenterYDoubleSpinBox->setObjectName(QString::fromUtf8("axisCenterYDoubleSpinBox"));
        axisCenterYDoubleSpinBox->setEnabled(true);
        axisCenterYDoubleSpinBox->setDecimals(6);
        axisCenterYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisCenterYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        hboxLayout1->addWidget(axisCenterYDoubleSpinBox);

        label3 = new QLabel(axisCenterFrame);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setText(QString::fromUtf8("Z"));
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(label3);

        axisCenterZDoubleSpinBox = new QDoubleSpinBox(axisCenterFrame);
        axisCenterZDoubleSpinBox->setObjectName(QString::fromUtf8("axisCenterZDoubleSpinBox"));
        axisCenterZDoubleSpinBox->setEnabled(true);
        axisCenterZDoubleSpinBox->setDecimals(6);
        axisCenterZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        axisCenterZDoubleSpinBox->setMaximum(1000000000.000000000000000);

        hboxLayout1->addWidget(axisCenterZDoubleSpinBox);

        pasteCenterToolButton = new QToolButton(axisCenterFrame);
        pasteCenterToolButton->setObjectName(QString::fromUtf8("pasteCenterToolButton"));
        pasteCenterToolButton->setIcon(icon1);

        hboxLayout1->addWidget(pasteCenterToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);


        vboxLayout1->addWidget(axisCenterFrame);

        autoCenterFrame = new QFrame(axisPositionGroupBox);
        autoCenterFrame->setObjectName(QString::fromUtf8("autoCenterFrame"));
        hboxLayout2 = new QHBoxLayout(autoCenterFrame);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        checkBoxAuto = new QCheckBox(autoCenterFrame);
        checkBoxAuto->setObjectName(QString::fromUtf8("checkBoxAuto"));
        checkBoxAuto->setEnabled(true);
        checkBoxAuto->setChecked(false);

        hboxLayout2->addWidget(checkBoxAuto);

        spacerItem1 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout1->addWidget(autoCenterFrame);


        vboxLayout->addWidget(axisPositionGroupBox);

        unrollRangeGroupBox = new QGroupBox(UnrollDialog);
        unrollRangeGroupBox->setObjectName(QString::fromUtf8("unrollRangeGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(unrollRangeGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(unrollRangeGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        startAngleDoubleSpinBox = new QDoubleSpinBox(unrollRangeGroupBox);
        startAngleDoubleSpinBox->setObjectName(QString::fromUtf8("startAngleDoubleSpinBox"));
        startAngleDoubleSpinBox->setMinimum(-3600.000000000000000);
        startAngleDoubleSpinBox->setMaximum(3600.000000000000000);
        startAngleDoubleSpinBox->setSingleStep(15.000000000000000);

        horizontalLayout_3->addWidget(startAngleDoubleSpinBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_4 = new QLabel(unrollRangeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        stopAngleDoubleSpinBox = new QDoubleSpinBox(unrollRangeGroupBox);
        stopAngleDoubleSpinBox->setObjectName(QString::fromUtf8("stopAngleDoubleSpinBox"));
        stopAngleDoubleSpinBox->setMinimum(-3600.000000000000000);
        stopAngleDoubleSpinBox->setMaximum(3600.000000000000000);
        stopAngleDoubleSpinBox->setSingleStep(15.000000000000000);
        stopAngleDoubleSpinBox->setValue(360.000000000000000);

        horizontalLayout_3->addWidget(stopAngleDoubleSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        vboxLayout->addWidget(unrollRangeGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UnrollDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(UnrollDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UnrollDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UnrollDialog, SLOT(reject()));

        comboBoxAxisDimension->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UnrollDialog);
    } // setupUi

    void retranslateUi(QDialog *UnrollDialog)
    {
        UnrollDialog->setWindowTitle(QCoreApplication::translate("UnrollDialog", "Unroll", nullptr));
        label_3->setText(QCoreApplication::translate("UnrollDialog", "Shape", nullptr));
        comboBoxUnrollShapeType->setItemText(0, QCoreApplication::translate("UnrollDialog", "Cylinder", nullptr));
        comboBoxUnrollShapeType->setItemText(1, QCoreApplication::translate("UnrollDialog", "Cone", nullptr));

#if QT_CONFIG(tooltip)
        fromEntityToolButton->setToolTip(QCoreApplication::translate("UnrollDialog", "Load parameters from a cylinder or a cone in the DB tree", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exportDeviationSFCheckBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Deviation from the theoretical shape (i.e. cone or cylinder)", nullptr));
#endif // QT_CONFIG(tooltip)
        exportDeviationSFCheckBox->setText(QCoreApplication::translate("UnrollDialog", "Export deviation scalar field", nullptr));
#if QT_CONFIG(tooltip)
        arbitraryCSCheckBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Output cloud will use an arbitrary coordinate system\n"
"(instead of being related to the original cloud coordinate system)", nullptr));
#endif // QT_CONFIG(tooltip)
        arbitraryCSCheckBox->setText(QCoreApplication::translate("UnrollDialog", "output to arbitrary CS", nullptr));
        label_5->setText(QCoreApplication::translate("UnrollDialog", "Projection", nullptr));
        comboBoxProjectionType->setItemText(0, QCoreApplication::translate("UnrollDialog", "Conical", nullptr));
        comboBoxProjectionType->setItemText(1, QCoreApplication::translate("UnrollDialog", "Cylindrical (fixed radius)", nullptr));
        comboBoxProjectionType->setItemText(2, QCoreApplication::translate("UnrollDialog", "Cylindrical (adaptive radius)", nullptr));

        label_6->setText(QCoreApplication::translate("UnrollDialog", "Span ratio", nullptr));
        shapeGroupBox->setTitle(QCoreApplication::translate("UnrollDialog", "Shape", nullptr));
        label->setText(QCoreApplication::translate("UnrollDialog", "Axis", nullptr));
        comboBoxAxisDimension->setItemText(3, QCoreApplication::translate("UnrollDialog", "Custom", nullptr));

        flipxAxisToolButton->setText(QCoreApplication::translate("UnrollDialog", "flip", nullptr));
#if QT_CONFIG(tooltip)
        pasteAxisToolButton->setToolTip(QCoreApplication::translate("UnrollDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelAngle->setToolTip(QCoreApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelAngle->setText(QCoreApplication::translate("UnrollDialog", "Half angle", nullptr));
#if QT_CONFIG(tooltip)
        halfAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        halfAngleDoubleSpinBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        halfAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
#if QT_CONFIG(tooltip)
        radiusLabel->setToolTip(QCoreApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", nullptr));
#endif // QT_CONFIG(tooltip)
        radiusLabel->setText(QCoreApplication::translate("UnrollDialog", "Radius", nullptr));
#if QT_CONFIG(tooltip)
        radiusDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", nullptr));
#endif // QT_CONFIG(tooltip)
        axisPositionGroupBox->setTitle(QCoreApplication::translate("UnrollDialog", "Axis position", nullptr));
#if QT_CONFIG(tooltip)
        pasteCenterToolButton->setToolTip(QCoreApplication::translate("UnrollDialog", "Paste from clipboard (3 values expected, separated by a comma, a semicolon or whitespaces)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAuto->setText(QCoreApplication::translate("UnrollDialog", "Auto (gravity center)", nullptr));
#if QT_CONFIG(tooltip)
        unrollRangeGroupBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Unroll range (can do multiple turns)", nullptr));
#endif // QT_CONFIG(tooltip)
        unrollRangeGroupBox->setTitle(QCoreApplication::translate("UnrollDialog", "Unroll range", nullptr));
        label_2->setText(QCoreApplication::translate("UnrollDialog", "Start angle", nullptr));
#if QT_CONFIG(tooltip)
        startAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Starting angle (can be negative)", nullptr));
#endif // QT_CONFIG(tooltip)
        startAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
        label_4->setText(QCoreApplication::translate("UnrollDialog", "Stop angle", nullptr));
#if QT_CONFIG(tooltip)
        stopAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Stop angle (can be negative)", nullptr));
#endif // QT_CONFIG(tooltip)
        stopAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnrollDialog: public Ui_UnrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNROLLDLG_H
