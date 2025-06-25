/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *setupTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *setupTabSimNameLabel;
    QLineEdit *setupTabSimNameLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *numFloorLabel;
    QSpinBox *numFloorSpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *numElevatorLabel;
    QSpinBox *numElevatorSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *numPassengersLabel;
    QSpinBox *numPassengerSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *passengersLabel;
    QTableWidget *passengerTableWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *startButton;
    QPushButton *clearPushButton;
    QRadioButton *clearRadioButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *passengerActionsLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *passengerActionAddRowButton;
    QPushButton *passengerActionRemoveRowButton;
    QTableWidget *passengerActionTableWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *safetyEventsLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *safetyEventAddRowButton;
    QPushButton *safetyEventRemoveRowButton;
    QTableWidget *safetyEventTableWidget;
    QWidget *logTab;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logTabSimNameLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *timeStepLabel;
    QPushButton *resumeButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *logLabel;
    QTableWidget *logTableWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *statesLabel;
    QTableWidget *statesTableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(979, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-1, -1, 981, 581));
        setupTab = new QWidget();
        setupTab->setObjectName("setupTab");
        verticalLayoutWidget = new QWidget(setupTab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 9, 251, 511));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        setupTabSimNameLabel = new QLabel(verticalLayoutWidget);
        setupTabSimNameLabel->setObjectName("setupTabSimNameLabel");

        verticalLayout_7->addWidget(setupTabSimNameLabel);

        setupTabSimNameLineEdit = new QLineEdit(verticalLayoutWidget);
        setupTabSimNameLineEdit->setObjectName("setupTabSimNameLineEdit");

        verticalLayout_7->addWidget(setupTabSimNameLineEdit);


        verticalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        numFloorLabel = new QLabel(verticalLayoutWidget);
        numFloorLabel->setObjectName("numFloorLabel");

        horizontalLayout_10->addWidget(numFloorLabel);

        numFloorSpinBox = new QSpinBox(verticalLayoutWidget);
        numFloorSpinBox->setObjectName("numFloorSpinBox");
        numFloorSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(numFloorSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        numElevatorLabel = new QLabel(verticalLayoutWidget);
        numElevatorLabel->setObjectName("numElevatorLabel");

        horizontalLayout_9->addWidget(numElevatorLabel);

        numElevatorSpinBox = new QSpinBox(verticalLayoutWidget);
        numElevatorSpinBox->setObjectName("numElevatorSpinBox");
        numElevatorSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(numElevatorSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        numPassengersLabel = new QLabel(verticalLayoutWidget);
        numPassengersLabel->setObjectName("numPassengersLabel");

        horizontalLayout->addWidget(numPassengersLabel);

        numPassengerSpinBox = new QSpinBox(verticalLayoutWidget);
        numPassengerSpinBox->setObjectName("numPassengerSpinBox");
        numPassengerSpinBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(numPassengerSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        passengersLabel = new QLabel(verticalLayoutWidget);
        passengersLabel->setObjectName("passengersLabel");

        horizontalLayout_7->addWidget(passengersLabel);


        verticalLayout_3->addLayout(horizontalLayout_7);

        passengerTableWidget = new QTableWidget(verticalLayoutWidget);
        if (passengerTableWidget->columnCount() < 3)
            passengerTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        passengerTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        passengerTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        passengerTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        passengerTableWidget->setObjectName("passengerTableWidget");

        verticalLayout_3->addWidget(passengerTableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName("startButton");
        startButton->setMaximumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(startButton);

        clearPushButton = new QPushButton(verticalLayoutWidget);
        clearPushButton->setObjectName("clearPushButton");

        horizontalLayout_4->addWidget(clearPushButton);

        clearRadioButton = new QRadioButton(verticalLayoutWidget);
        clearRadioButton->setObjectName("clearRadioButton");

        horizontalLayout_4->addWidget(clearRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        layoutWidget = new QWidget(setupTab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 10, 691, 511));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        passengerActionsLabel = new QLabel(layoutWidget);
        passengerActionsLabel->setObjectName("passengerActionsLabel");

        horizontalLayout_5->addWidget(passengerActionsLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        passengerActionAddRowButton = new QPushButton(layoutWidget);
        passengerActionAddRowButton->setObjectName("passengerActionAddRowButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(passengerActionAddRowButton->sizePolicy().hasHeightForWidth());
        passengerActionAddRowButton->setSizePolicy(sizePolicy);
        passengerActionAddRowButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_5->addWidget(passengerActionAddRowButton);

        passengerActionRemoveRowButton = new QPushButton(layoutWidget);
        passengerActionRemoveRowButton->setObjectName("passengerActionRemoveRowButton");
        sizePolicy.setHeightForWidth(passengerActionRemoveRowButton->sizePolicy().hasHeightForWidth());
        passengerActionRemoveRowButton->setSizePolicy(sizePolicy);
        passengerActionRemoveRowButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_5->addWidget(passengerActionRemoveRowButton);


        verticalLayout->addLayout(horizontalLayout_5);

        passengerActionTableWidget = new QTableWidget(layoutWidget);
        if (passengerActionTableWidget->columnCount() < 3)
            passengerActionTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        passengerActionTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        passengerActionTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        passengerActionTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        passengerActionTableWidget->setObjectName("passengerActionTableWidget");
        passengerActionTableWidget->setCornerButtonEnabled(true);

        verticalLayout->addWidget(passengerActionTableWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        safetyEventsLabel = new QLabel(layoutWidget);
        safetyEventsLabel->setObjectName("safetyEventsLabel");

        horizontalLayout_6->addWidget(safetyEventsLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        safetyEventAddRowButton = new QPushButton(layoutWidget);
        safetyEventAddRowButton->setObjectName("safetyEventAddRowButton");
        sizePolicy.setHeightForWidth(safetyEventAddRowButton->sizePolicy().hasHeightForWidth());
        safetyEventAddRowButton->setSizePolicy(sizePolicy);
        safetyEventAddRowButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(safetyEventAddRowButton);

        safetyEventRemoveRowButton = new QPushButton(layoutWidget);
        safetyEventRemoveRowButton->setObjectName("safetyEventRemoveRowButton");
        sizePolicy.setHeightForWidth(safetyEventRemoveRowButton->sizePolicy().hasHeightForWidth());
        safetyEventRemoveRowButton->setSizePolicy(sizePolicy);
        safetyEventRemoveRowButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(safetyEventRemoveRowButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        safetyEventTableWidget = new QTableWidget(layoutWidget);
        if (safetyEventTableWidget->columnCount() < 3)
            safetyEventTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        safetyEventTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        safetyEventTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        safetyEventTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        safetyEventTableWidget->setObjectName("safetyEventTableWidget");

        verticalLayout_2->addWidget(safetyEventTableWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);

        tabWidget->addTab(setupTab, QString());
        logTab = new QWidget();
        logTab->setObjectName("logTab");
        horizontalLayoutWidget_3 = new QWidget(logTab);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(9, 9, 951, 27));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        logTabSimNameLabel = new QLabel(horizontalLayoutWidget_3);
        logTabSimNameLabel->setObjectName("logTabSimNameLabel");

        horizontalLayout_3->addWidget(logTabSimNameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        timeStepLabel = new QLabel(horizontalLayoutWidget_3);
        timeStepLabel->setObjectName("timeStepLabel");

        horizontalLayout_3->addWidget(timeStepLabel);

        resumeButton = new QPushButton(horizontalLayoutWidget_3);
        resumeButton->setObjectName("resumeButton");

        horizontalLayout_3->addWidget(resumeButton);

        pauseButton = new QPushButton(horizontalLayoutWidget_3);
        pauseButton->setObjectName("pauseButton");

        horizontalLayout_3->addWidget(pauseButton);

        stopButton = new QPushButton(horizontalLayoutWidget_3);
        stopButton->setObjectName("stopButton");

        horizontalLayout_3->addWidget(stopButton);

        verticalLayoutWidget_3 = new QWidget(logTab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 40, 671, 481));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        logLabel = new QLabel(verticalLayoutWidget_3);
        logLabel->setObjectName("logLabel");

        verticalLayout_5->addWidget(logLabel);

        logTableWidget = new QTableWidget(verticalLayoutWidget_3);
        if (logTableWidget->columnCount() < 2)
            logTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        logTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        logTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        logTableWidget->setObjectName("logTableWidget");
        logTableWidget->setMinimumSize(QSize(500, 0));

        verticalLayout_5->addWidget(logTableWidget);

        verticalLayoutWidget_4 = new QWidget(logTab);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(688, 40, 271, 481));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        statesLabel = new QLabel(verticalLayoutWidget_4);
        statesLabel->setObjectName("statesLabel");

        verticalLayout_6->addWidget(statesLabel);

        statesTableWidget = new QTableWidget(verticalLayoutWidget_4);
        if (statesTableWidget->columnCount() < 2)
            statesTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        statesTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        statesTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        statesTableWidget->setObjectName("statesTableWidget");

        verticalLayout_6->addWidget(statesTableWidget);

        tabWidget->addTab(logTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 979, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName("toolBar_3");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName("toolBar_4");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_4);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        setupTabSimNameLabel->setText(QCoreApplication::translate("MainWindow", "Name of Simulation: ", nullptr));
        numFloorLabel->setText(QCoreApplication::translate("MainWindow", "Number of floors:", nullptr));
        numElevatorLabel->setText(QCoreApplication::translate("MainWindow", "Number of Elevators:", nullptr));
        numPassengersLabel->setText(QCoreApplication::translate("MainWindow", "Number of Passengers:", nullptr));
        passengersLabel->setText(QCoreApplication::translate("MainWindow", "Passengers:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = passengerTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = passengerTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Starting Floor", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = passengerTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Target Floor", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        clearPushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        clearRadioButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        passengerActionsLabel->setText(QCoreApplication::translate("MainWindow", "Passenger Actions:", nullptr));
        passengerActionAddRowButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        passengerActionRemoveRowButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = passengerActionTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = passengerActionTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Time Step", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = passengerActionTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Behaviour", nullptr));
        safetyEventsLabel->setText(QCoreApplication::translate("MainWindow", "Safety Events:", nullptr));
        safetyEventAddRowButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        safetyEventRemoveRowButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = safetyEventTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = safetyEventTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Time Step", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = safetyEventTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(setupTab), QCoreApplication::translate("MainWindow", "Setup", nullptr));
        logTabSimNameLabel->setText(QCoreApplication::translate("MainWindow", "Name of Sim: ", nullptr));
        timeStepLabel->setText(QCoreApplication::translate("MainWindow", "Time Step: 0:00", nullptr));
        resumeButton->setText(QCoreApplication::translate("MainWindow", "Resume", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        logLabel->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = logTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "System Event", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = logTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "System Response", nullptr));
        statesLabel->setText(QCoreApplication::translate("MainWindow", "States", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = statesTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = statesTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Floor #", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(logTab), QCoreApplication::translate("MainWindow", "Log", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
