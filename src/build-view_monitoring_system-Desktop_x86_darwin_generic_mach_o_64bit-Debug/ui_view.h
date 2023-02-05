/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view
{
public:
    QAction *actionMemory_Agent;
    QAction *actionNetwork_Agent;
    QAction *actionCpu_Agent;
    QAction *actionSpecial_Agent;
    QAction *actionStart_all;
    QAction *actionTimer;
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *cpu_on;
    QRadioButton *cpu_off;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QRadioButton *mem_on;
    QRadioButton *mem_of;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QRadioButton *net_on;
    QRadioButton *net_off;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QRadioButton *dop_on;
    QRadioButton *dop_off;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QSpinBox *time_upd;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *start;
    QPushButton *stop;
    QGroupBox *groupBox_Metrics;
    QLabel *tLabel;
    QLabel *recallLabel;
    QLabel *pLabel;
    QLabel *aLabel;
    QLabel *accuracyLabel;
    QLabel *timeLabel;
    QLabel *rLabel;
    QLabel *measureLabel;
    QLabel *fLabel;
    QLabel *precisionLabel;
    QLabel *label;
    QToolBar *toolBar;

    void setupUi(QMainWindow *view)
    {
        if (view->objectName().isEmpty())
            view->setObjectName(QString::fromUtf8("view"));
        view->resize(1407, 973);
        view->setMaximumSize(QSize(16777, 16778));
        view->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow{\n"
"\n"
"background-image: url(:/images/bg.png);\n"
"}"));
        view->setIconSize(QSize(24, 24));
        actionMemory_Agent = new QAction(view);
        actionMemory_Agent->setObjectName(QString::fromUtf8("actionMemory_Agent"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("Memomry_Agent");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/images/agent_1_off.png"), QSize(), QIcon::Normal, QIcon::Off);
            icon.addFile(QString::fromUtf8(":/images/agent_1_on.png"), QSize(), QIcon::Normal, QIcon::On);
        }
        actionMemory_Agent->setIcon(icon);
        QFont font;
        font.setPointSize(34);
        actionMemory_Agent->setFont(font);
        actionMemory_Agent->setShortcutContext(Qt::WindowShortcut);
        actionMemory_Agent->setAutoRepeat(true);
        actionMemory_Agent->setVisible(true);
        actionMemory_Agent->setIconVisibleInMenu(false);
        actionMemory_Agent->setShortcutVisibleInContextMenu(false);
        actionMemory_Agent->setPriority(QAction::NormalPriority);
        actionNetwork_Agent = new QAction(view);
        actionNetwork_Agent->setObjectName(QString::fromUtf8("actionNetwork_Agent"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("Network_Agent");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/images/agent_2_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNetwork_Agent->setIcon(icon1);
        actionCpu_Agent = new QAction(view);
        actionCpu_Agent->setObjectName(QString::fromUtf8("actionCpu_Agent"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("Cpu_Agent");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/images/agent_3_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCpu_Agent->setIcon(icon2);
        actionSpecial_Agent = new QAction(view);
        actionSpecial_Agent->setObjectName(QString::fromUtf8("actionSpecial_Agent"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("Special_Agent");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/images/agent_4_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSpecial_Agent->setIcon(icon3);
        actionStart_all = new QAction(view);
        actionStart_all->setObjectName(QString::fromUtf8("actionStart_all"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("Start_All");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8(":/images/start_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionStart_all->setIcon(icon4);
        actionTimer = new QAction(view);
        actionTimer->setObjectName(QString::fromUtf8("actionTimer"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("Timer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/images/timer_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTimer->setIcon(icon5);
        centralwidget = new QWidget(view);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(10, 80, 1291, 541));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        textBrowser->setFont(font1);
        textBrowser->setMouseTracking(false);
        textBrowser->setLayoutDirection(Qt::LeftToRight);
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"QTextBrowser{\n"
"\n"
"\n"
"}"));
        textBrowser->setInputMethodHints(Qt::ImhNone);
        textBrowser->setLineWidth(4);
        textBrowser->setMidLineWidth(0);
        textBrowser->setReadOnly(false);
        textBrowser->setTextInteractionFlags(Qt::TextEditable);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1039, 659, 51, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cpu_on = new QRadioButton(verticalLayoutWidget);
        cpu_on->setObjectName(QString::fromUtf8("cpu_on"));
        cpu_on->setChecked(true);

        verticalLayout->addWidget(cpu_on);

        cpu_off = new QRadioButton(verticalLayoutWidget);
        cpu_off->setObjectName(QString::fromUtf8("cpu_off"));

        verticalLayout->addWidget(cpu_off);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(280, 650, 161, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        mem_on = new QRadioButton(verticalLayoutWidget_2);
        mem_on->setObjectName(QString::fromUtf8("mem_on"));
        mem_on->setChecked(true);

        verticalLayout_2->addWidget(mem_on);

        mem_of = new QRadioButton(verticalLayoutWidget_2);
        mem_of->setObjectName(QString::fromUtf8("mem_of"));

        verticalLayout_2->addWidget(mem_of);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(460, 650, 161, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        net_on = new QRadioButton(verticalLayoutWidget_3);
        net_on->setObjectName(QString::fromUtf8("net_on"));
        net_on->setChecked(true);

        verticalLayout_3->addWidget(net_on);

        net_off = new QRadioButton(verticalLayoutWidget_3);
        net_off->setObjectName(QString::fromUtf8("net_off"));

        verticalLayout_3->addWidget(net_off);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(640, 650, 161, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        dop_on = new QRadioButton(verticalLayoutWidget_4);
        dop_on->setObjectName(QString::fromUtf8("dop_on"));
        dop_on->setChecked(true);

        verticalLayout_4->addWidget(dop_on);

        dop_off = new QRadioButton(verticalLayoutWidget_4);
        dop_off->setObjectName(QString::fromUtf8("dop_off"));

        verticalLayout_4->addWidget(dop_off);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(860, 650, 160, 111));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        time_upd = new QSpinBox(verticalLayoutWidget_5);
        time_upd->setObjectName(QString::fromUtf8("time_upd"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(time_upd->sizePolicy().hasHeightForWidth());
        time_upd->setSizePolicy(sizePolicy1);
        time_upd->setMinimum(6000);
        time_upd->setMaximum(60000);

        verticalLayout_5->addWidget(time_upd);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(1100, 650, 160, 111));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(verticalLayoutWidget_6);
        start->setObjectName(QString::fromUtf8("start"));
        sizePolicy1.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(start);

        stop = new QPushButton(verticalLayoutWidget_6);
        stop->setObjectName(QString::fromUtf8("stop"));
        sizePolicy1.setHeightForWidth(stop->sizePolicy().hasHeightForWidth());
        stop->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(stop);

        groupBox_Metrics = new QGroupBox(centralwidget);
        groupBox_Metrics->setObjectName(QString::fromUtf8("groupBox_Metrics"));
        groupBox_Metrics->setGeometry(QRect(10, 620, 261, 161));
        groupBox_Metrics->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        tLabel = new QLabel(groupBox_Metrics);
        tLabel->setObjectName(QString::fromUtf8("tLabel"));
        tLabel->setGeometry(QRect(280, 80, 211, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Umpush")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        tLabel->setFont(font2);
        tLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        tLabel->setAlignment(Qt::AlignCenter);
        recallLabel = new QLabel(groupBox_Metrics);
        recallLabel->setObjectName(QString::fromUtf8("recallLabel"));
        recallLabel->setGeometry(QRect(490, 30, 51, 31));
        recallLabel->setFont(font2);
        recallLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"}"));
        recallLabel->setAlignment(Qt::AlignCenter);
        pLabel = new QLabel(groupBox_Metrics);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));
        pLabel->setGeometry(QRect(10, 80, 211, 31));
        pLabel->setFont(font2);
        pLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel->setAlignment(Qt::AlignCenter);
        aLabel = new QLabel(groupBox_Metrics);
        aLabel->setObjectName(QString::fromUtf8("aLabel"));
        aLabel->setGeometry(QRect(10, 30, 211, 31));
        aLabel->setFont(font2);
        aLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #00cc00, stop:1 #0000ff);\n"
"}"));
        aLabel->setAlignment(Qt::AlignCenter);
        accuracyLabel = new QLabel(groupBox_Metrics);
        accuracyLabel->setObjectName(QString::fromUtf8("accuracyLabel"));
        accuracyLabel->setGeometry(QRect(220, 30, 51, 31));
        accuracyLabel->setFont(font2);
        accuracyLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"}"));
        accuracyLabel->setAlignment(Qt::AlignCenter);
        timeLabel = new QLabel(groupBox_Metrics);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(760, 30, 51, 31));
        timeLabel->setFont(font2);
        timeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"}"));
        timeLabel->setAlignment(Qt::AlignCenter);
        rLabel = new QLabel(groupBox_Metrics);
        rLabel->setObjectName(QString::fromUtf8("rLabel"));
        rLabel->setGeometry(QRect(280, 30, 211, 31));
        rLabel->setFont(font2);
        rLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        rLabel->setAlignment(Qt::AlignCenter);
        measureLabel = new QLabel(groupBox_Metrics);
        measureLabel->setObjectName(QString::fromUtf8("measureLabel"));
        measureLabel->setGeometry(QRect(490, 80, 51, 31));
        measureLabel->setFont(font2);
        measureLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"}"));
        measureLabel->setAlignment(Qt::AlignCenter);
        fLabel = new QLabel(groupBox_Metrics);
        fLabel->setObjectName(QString::fromUtf8("fLabel"));
        fLabel->setGeometry(QRect(550, 30, 211, 31));
        fLabel->setFont(font2);
        fLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        fLabel->setAlignment(Qt::AlignCenter);
        precisionLabel = new QLabel(groupBox_Metrics);
        precisionLabel->setObjectName(QString::fromUtf8("precisionLabel"));
        precisionLabel->setGeometry(QRect(220, 80, 51, 31));
        precisionLabel->setFont(font2);
        precisionLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"}"));
        precisionLabel->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(930, 650, 158, 65));
        view->setCentralWidget(centralwidget);
        toolBar = new QToolBar(view);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setIconSize(QSize(100, 50));
        view->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionMemory_Agent);
        toolBar->addAction(actionNetwork_Agent);
        toolBar->addAction(actionCpu_Agent);
        toolBar->addAction(actionSpecial_Agent);
        toolBar->addAction(actionStart_all);
        toolBar->addAction(actionTimer);

        retranslateUi(view);

        QMetaObject::connectSlotsByName(view);
    } // setupUi

    void retranslateUi(QMainWindow *view)
    {
        view->setWindowTitle(QCoreApplication::translate("view", "view", nullptr));
        actionMemory_Agent->setText(QCoreApplication::translate("view", "Memory_Agent_off", nullptr));
        actionNetwork_Agent->setText(QCoreApplication::translate("view", "Network_Agent_off", nullptr));
#if QT_CONFIG(tooltip)
        actionNetwork_Agent->setToolTip(QCoreApplication::translate("view", "Network_Agent", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCpu_Agent->setText(QCoreApplication::translate("view", "Cpu_Agent_off", nullptr));
#if QT_CONFIG(tooltip)
        actionCpu_Agent->setToolTip(QCoreApplication::translate("view", "Cpu_Agent_off", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSpecial_Agent->setText(QCoreApplication::translate("view", "Special_Agent_off", nullptr));
#if QT_CONFIG(tooltip)
        actionSpecial_Agent->setToolTip(QCoreApplication::translate("view", "Special_Agent_off", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStart_all->setText(QCoreApplication::translate("view", "Start_all_off", nullptr));
#if QT_CONFIG(tooltip)
        actionStart_all->setToolTip(QCoreApplication::translate("view", "Start_all_on", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTimer->setText(QCoreApplication::translate("view", "Timer_off", nullptr));
#if QT_CONFIG(tooltip)
        actionTimer->setToolTip(QCoreApplication::translate("view", "Timer_off", nullptr));
#endif // QT_CONFIG(tooltip)
        cpu_on->setText(QCoreApplication::translate("view", "ON", nullptr));
        cpu_off->setText(QCoreApplication::translate("view", "OFF", nullptr));
        label_2->setText(QCoreApplication::translate("view", "         MEMORY_AGENT", nullptr));
        mem_on->setText(QCoreApplication::translate("view", "ON", nullptr));
        mem_of->setText(QCoreApplication::translate("view", "OFF", nullptr));
        label_3->setText(QCoreApplication::translate("view", "       NETWORK_AGENT", nullptr));
        net_on->setText(QCoreApplication::translate("view", "ON", nullptr));
        net_off->setText(QCoreApplication::translate("view", "OFF", nullptr));
        label_4->setText(QCoreApplication::translate("view", "         DOP_AGENT", nullptr));
        dop_on->setText(QCoreApplication::translate("view", "ON", nullptr));
        dop_off->setText(QCoreApplication::translate("view", "OFF", nullptr));
        label_5->setText(QCoreApplication::translate("view", "TIME TO UPDATE", nullptr));
        start->setText(QCoreApplication::translate("view", "start", nullptr));
        stop->setText(QCoreApplication::translate("view", "stop", nullptr));
        groupBox_Metrics->setTitle(QCoreApplication::translate("view", "Metrics", nullptr));
        tLabel->setText(QCoreApplication::translate("view", "TIME", nullptr));
        recallLabel->setText(QCoreApplication::translate("view", "0", nullptr));
        pLabel->setText(QCoreApplication::translate("view", "PRECISION", nullptr));
        aLabel->setText(QCoreApplication::translate("view", "AVERAGE ACCURACY", nullptr));
        accuracyLabel->setText(QCoreApplication::translate("view", "0", nullptr));
        timeLabel->setText(QCoreApplication::translate("view", "0", nullptr));
        rLabel->setText(QCoreApplication::translate("view", "RECALL", nullptr));
        measureLabel->setText(QCoreApplication::translate("view", "0", nullptr));
        fLabel->setText(QCoreApplication::translate("view", "F-MEASURE", nullptr));
        precisionLabel->setText(QCoreApplication::translate("view", "0", nullptr));
        label->setText(QCoreApplication::translate("view", "         CPU_AGENT", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("view", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view: public Ui_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
