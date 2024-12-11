/********************************************************************************
** Form generated from reading UI file 'graphicalSegmentationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALSEGMENTATIONDLG_H
#define UI_GRAPHICALSEGMENTATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_GraphicalSegmentationDlg
{
public:
    QAction *actionSetRectangularSelection;
    QAction *actionSetPolylineSelection;
    QAction *actionUseExistingPolyline;
    QAction *actionExportSegmentationPolyline;
    QHBoxLayout *horizontalLayout_2;
    QFrame *buttonsFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *pauseButton;
    QToolButton *loadSaveToolButton;
    QToolButton *selectionModelButton;
    QToolButton *inButton;
    QToolButton *outButton;
    QToolButton *razButton;
    QToolButton *addClassToolButton;
    QToolButton *exportSelectionButton;
    QPushButton *optionsButton;
    QToolButton *validButton;
    QToolButton *validAndDeleteButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *GraphicalSegmentationDlg)
    {
        if (GraphicalSegmentationDlg->objectName().isEmpty())
            GraphicalSegmentationDlg->setObjectName(QString::fromUtf8("GraphicalSegmentationDlg"));
        GraphicalSegmentationDlg->resize(411, 26);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicalSegmentationDlg->sizePolicy().hasHeightForWidth());
        GraphicalSegmentationDlg->setSizePolicy(sizePolicy);
        actionSetRectangularSelection = new QAction(GraphicalSegmentationDlg);
        actionSetRectangularSelection->setObjectName(QString::fromUtf8("actionSetRectangularSelection"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetRectangularSelection->setIcon(icon);
        actionSetPolylineSelection = new QAction(GraphicalSegmentationDlg);
        actionSetPolylineSelection->setObjectName(QString::fromUtf8("actionSetPolylineSelection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPolylineSelection->setIcon(icon1);
        actionUseExistingPolyline = new QAction(GraphicalSegmentationDlg);
        actionUseExistingPolyline->setObjectName(QString::fromUtf8("actionUseExistingPolyline"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUseExistingPolyline->setIcon(icon2);
        actionExportSegmentationPolyline = new QAction(GraphicalSegmentationDlg);
        actionExportSegmentationPolyline->setObjectName(QString::fromUtf8("actionExportSegmentationPolyline"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportSegmentationPolyline->setIcon(icon3);
        horizontalLayout_2 = new QHBoxLayout(GraphicalSegmentationDlg);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonsFrame = new QFrame(GraphicalSegmentationDlg);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        buttonsFrame->setFrameShape(QFrame::StyledPanel);
        buttonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(buttonsFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pauseButton = new QToolButton(buttonsFrame);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallPause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon4);
        pauseButton->setCheckable(true);
        pauseButton->setChecked(false);

        horizontalLayout->addWidget(pauseButton);

        loadSaveToolButton = new QToolButton(buttonsFrame);
        loadSaveToolButton->setObjectName(QString::fromUtf8("loadSaveToolButton"));
        loadSaveToolButton->setIcon(icon2);
        loadSaveToolButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(loadSaveToolButton);

        selectionModelButton = new QToolButton(buttonsFrame);
        selectionModelButton->setObjectName(QString::fromUtf8("selectionModelButton"));
        selectionModelButton->setIcon(icon1);
        selectionModelButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(selectionModelButton);

        inButton = new QToolButton(buttonsFrame);
        inButton->setObjectName(QString::fromUtf8("inButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/smallSegmentIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        inButton->setIcon(icon5);

        horizontalLayout->addWidget(inButton);

        outButton = new QToolButton(buttonsFrame);
        outButton->setObjectName(QString::fromUtf8("outButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallSegmentOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        outButton->setIcon(icon6);

        horizontalLayout->addWidget(outButton);

        razButton = new QToolButton(buttonsFrame);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        razButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon7);

        horizontalLayout->addWidget(razButton);

        addClassToolButton = new QToolButton(buttonsFrame);
        addClassToolButton->setObjectName(QString::fromUtf8("addClassToolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/hashtag.png"), QSize(), QIcon::Normal, QIcon::Off);
        addClassToolButton->setIcon(icon8);

        horizontalLayout->addWidget(addClassToolButton);

        exportSelectionButton = new QToolButton(buttonsFrame);
        exportSelectionButton->setObjectName(QString::fromUtf8("exportSelectionButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/exportIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportSelectionButton->setIcon(icon9);

        horizontalLayout->addWidget(exportSelectionButton);

        optionsButton = new QPushButton(buttonsFrame);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        sizePolicy.setHeightForWidth(optionsButton->sizePolicy().hasHeightForWidth());
        optionsButton->setSizePolicy(sizePolicy);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccGear.png"), QSize(), QIcon::Normal, QIcon::On);
        optionsButton->setIcon(icon10);

        horizontalLayout->addWidget(optionsButton);

        validButton = new QToolButton(buttonsFrame);
        validButton->setObjectName(QString::fromUtf8("validButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon11);

        horizontalLayout->addWidget(validButton);

        validAndDeleteButton = new QToolButton(buttonsFrame);
        validAndDeleteButton->setObjectName(QString::fromUtf8("validAndDeleteButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        validAndDeleteButton->setIcon(icon12);

        horizontalLayout->addWidget(validAndDeleteButton);

        cancelButton = new QToolButton(buttonsFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon13);

        horizontalLayout->addWidget(cancelButton);


        horizontalLayout_2->addWidget(buttonsFrame);


        retranslateUi(GraphicalSegmentationDlg);

        QMetaObject::connectSlotsByName(GraphicalSegmentationDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalSegmentationDlg)
    {
        GraphicalSegmentationDlg->setWindowTitle(QCoreApplication::translate("GraphicalSegmentationDlg", "Segmentation", nullptr));
        actionSetRectangularSelection->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "Rectangular selection", nullptr));
#if QT_CONFIG(tooltip)
        actionSetRectangularSelection->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Activate rectangular selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetPolylineSelection->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "Polygonal selection", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPolylineSelection->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Activate polyline selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUseExistingPolyline->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "Use existing polyline", nullptr));
#if QT_CONFIG(tooltip)
        actionUseExistingPolyline->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Import polyline from DB for segmentation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportSegmentationPolyline->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline", nullptr));
#if QT_CONFIG(tooltip)
        actionExportSegmentationPolyline->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline as new entity", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pauseButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Pause segmentation (Space)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pauseButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Pause segmentation  (allow rotation/panning of 3D view)", nullptr));
#endif // QT_CONFIG(statustip)
        pauseButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "pause", nullptr));
#if QT_CONFIG(tooltip)
        loadSaveToolButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Load / save segmentation polyline", nullptr));
#endif // QT_CONFIG(tooltip)
        loadSaveToolButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "load/save segmentation polyline", nullptr));
#if QT_CONFIG(tooltip)
        selectionModelButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Polyline selection mode (Tab)", nullptr));
#endif // QT_CONFIG(tooltip)
        selectionModelButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "polyline selection", nullptr));
#if QT_CONFIG(tooltip)
        inButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Segment In (I)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        inButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Segment (keep points inside)", nullptr));
#endif // QT_CONFIG(statustip)
        inButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "in", nullptr));
#if QT_CONFIG(tooltip)
        outButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Segment Out (O)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        outButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Segment (keep points outside)", nullptr));
#endif // QT_CONFIG(statustip)
        outButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "out", nullptr));
#if QT_CONFIG(tooltip)
        razButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        razButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", nullptr));
#endif // QT_CONFIG(statustip)
        razButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "raz", nullptr));
#if QT_CONFIG(tooltip)
        addClassToolButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Set the class of points inside the polyline (C).\n"
"The classification SF will be directly updated (and created if needed).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        addClassToolButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Set the class of points inside the polyline (C)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        exportSelectionButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "<html><head/><body><p>Export selection (E)</p><p>Note: the original cloud/mesh is not modified.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        exportSelectionButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "...", nullptr));
#if QT_CONFIG(tooltip)
        optionsButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Segmentation Options", nullptr));
#endif // QT_CONFIG(tooltip)
        optionsButton->setText(QString());
#if QT_CONFIG(tooltip)
        validButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation (Enter)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        validButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", nullptr));
#endif // QT_CONFIG(statustip)
        validButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "OK", nullptr));
#if QT_CONFIG(tooltip)
        validAndDeleteButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points (Del)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        validAndDeleteButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Cancel (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cancelButton->setStatusTip(QCoreApplication::translate("GraphicalSegmentationDlg", "Cancel segentation", nullptr));
#endif // QT_CONFIG(statustip)
        cancelButton->setText(QCoreApplication::translate("GraphicalSegmentationDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicalSegmentationDlg: public Ui_GraphicalSegmentationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALSEGMENTATIONDLG_H
