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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
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
    QGroupBox *groupBox_Memory_Agent;
    QLabel *pLabel;
    QLabel *aLabel;
    QLabel *pLabel_2;
    QLabel *pLabel_3;
    QLabel *pLabel_4;
    QLabel *pLabel_5;
    QGroupBox *groupBox_Network_Agent;
    QLabel *pLabel_6;
    QLabel *aLabel_2;
    QLabel *pLabel_7;
    QGroupBox *groupBox_Cpu_Agent;
    QLabel *pLabel_8;
    QLabel *aLabel_3;
    QLabel *pLabel_9;
    QGroupBox *groupBox_Special_Agent;
    QLabel *pLabel_10;
    QLabel *aLabel_4;
    QLabel *pLabel_11;
    QLabel *pLabel_12;
    QLabel *pLabel_13;
    QLabel *pLabel_14;
    QLabel *pLabel_15;
    QLabel *pLabel_16;
    QLabel *pLabel_17;
    QLabel *pLabel_18;
    QLabel *pLabel_19;
    QGroupBox *groupBox_Timer;
    QSpinBox *time_upd;
    QToolBar *toolBar;

    void setupUi(QMainWindow *view)
    {
        if (view->objectName().isEmpty())
            view->setObjectName(QString::fromUtf8("view"));
        view->resize(1294, 1277);
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
        textBrowser->setGeometry(QRect(0, 0, 1291, 621));
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
        groupBox_Memory_Agent = new QGroupBox(centralwidget);
        groupBox_Memory_Agent->setObjectName(QString::fromUtf8("groupBox_Memory_Agent"));
        groupBox_Memory_Agent->setGeometry(QRect(270, 630, 251, 471));
        groupBox_Memory_Agent->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel = new QLabel(groupBox_Memory_Agent);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));
        pLabel->setGeometry(QRect(10, 80, 211, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
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
        aLabel = new QLabel(groupBox_Memory_Agent);
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
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0033cc stop:1 #ff3300);\n"
"}"));
        aLabel->setAlignment(Qt::AlignCenter);
        pLabel_2 = new QLabel(groupBox_Memory_Agent);
        pLabel_2->setObjectName(QString::fromUtf8("pLabel_2"));
        pLabel_2->setGeometry(QRect(10, 120, 211, 31));
        pLabel_2->setFont(font2);
        pLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_2->setAlignment(Qt::AlignCenter);
        pLabel_3 = new QLabel(groupBox_Memory_Agent);
        pLabel_3->setObjectName(QString::fromUtf8("pLabel_3"));
        pLabel_3->setGeometry(QRect(10, 160, 211, 31));
        pLabel_3->setFont(font2);
        pLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_3->setAlignment(Qt::AlignCenter);
        pLabel_4 = new QLabel(groupBox_Memory_Agent);
        pLabel_4->setObjectName(QString::fromUtf8("pLabel_4"));
        pLabel_4->setGeometry(QRect(10, 200, 211, 31));
        pLabel_4->setFont(font2);
        pLabel_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_4->setAlignment(Qt::AlignCenter);
        pLabel_5 = new QLabel(groupBox_Memory_Agent);
        pLabel_5->setObjectName(QString::fromUtf8("pLabel_5"));
        pLabel_5->setGeometry(QRect(10, 240, 211, 31));
        pLabel_5->setFont(font2);
        pLabel_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_5->setAlignment(Qt::AlignCenter);
        groupBox_Network_Agent = new QGroupBox(centralwidget);
        groupBox_Network_Agent->setObjectName(QString::fromUtf8("groupBox_Network_Agent"));
        groupBox_Network_Agent->setGeometry(QRect(530, 630, 251, 291));
        groupBox_Network_Agent->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_6 = new QLabel(groupBox_Network_Agent);
        pLabel_6->setObjectName(QString::fromUtf8("pLabel_6"));
        pLabel_6->setGeometry(QRect(10, 80, 211, 31));
        pLabel_6->setFont(font2);
        pLabel_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_6->setAlignment(Qt::AlignCenter);
        aLabel_2 = new QLabel(groupBox_Network_Agent);
        aLabel_2->setObjectName(QString::fromUtf8("aLabel_2"));
        aLabel_2->setGeometry(QRect(10, 30, 211, 31));
        aLabel_2->setFont(font2);
        aLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0033cc stop:1 #ff3300);\n"
"}"));
        aLabel_2->setAlignment(Qt::AlignCenter);
        pLabel_7 = new QLabel(groupBox_Network_Agent);
        pLabel_7->setObjectName(QString::fromUtf8("pLabel_7"));
        pLabel_7->setGeometry(QRect(10, 120, 211, 31));
        pLabel_7->setFont(font2);
        pLabel_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_7->setAlignment(Qt::AlignCenter);
        groupBox_Cpu_Agent = new QGroupBox(centralwidget);
        groupBox_Cpu_Agent->setObjectName(QString::fromUtf8("groupBox_Cpu_Agent"));
        groupBox_Cpu_Agent->setGeometry(QRect(790, 630, 251, 291));
        groupBox_Cpu_Agent->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_8 = new QLabel(groupBox_Cpu_Agent);
        pLabel_8->setObjectName(QString::fromUtf8("pLabel_8"));
        pLabel_8->setGeometry(QRect(10, 70, 211, 31));
        pLabel_8->setFont(font2);
        pLabel_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_8->setAlignment(Qt::AlignCenter);
        aLabel_3 = new QLabel(groupBox_Cpu_Agent);
        aLabel_3->setObjectName(QString::fromUtf8("aLabel_3"));
        aLabel_3->setGeometry(QRect(10, 30, 211, 31));
        aLabel_3->setFont(font2);
        aLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0033cc stop:1 #ff3300);\n"
"}"));
        aLabel_3->setAlignment(Qt::AlignCenter);
        pLabel_9 = new QLabel(groupBox_Cpu_Agent);
        pLabel_9->setObjectName(QString::fromUtf8("pLabel_9"));
        pLabel_9->setGeometry(QRect(10, 110, 211, 31));
        pLabel_9->setFont(font2);
        pLabel_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_9->setAlignment(Qt::AlignCenter);
        groupBox_Special_Agent = new QGroupBox(centralwidget);
        groupBox_Special_Agent->setObjectName(QString::fromUtf8("groupBox_Special_Agent"));
        groupBox_Special_Agent->setGeometry(QRect(10, 630, 251, 471));
        groupBox_Special_Agent->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_10 = new QLabel(groupBox_Special_Agent);
        pLabel_10->setObjectName(QString::fromUtf8("pLabel_10"));
        pLabel_10->setGeometry(QRect(10, 70, 211, 31));
        pLabel_10->setFont(font2);
        pLabel_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_10->setAlignment(Qt::AlignCenter);
        aLabel_4 = new QLabel(groupBox_Special_Agent);
        aLabel_4->setObjectName(QString::fromUtf8("aLabel_4"));
        aLabel_4->setGeometry(QRect(10, 30, 211, 31));
        aLabel_4->setFont(font2);
        aLabel_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0033cc stop:1 #ff3300);\n"
"}"));
        aLabel_4->setAlignment(Qt::AlignCenter);
        pLabel_11 = new QLabel(groupBox_Special_Agent);
        pLabel_11->setObjectName(QString::fromUtf8("pLabel_11"));
        pLabel_11->setGeometry(QRect(10, 110, 211, 31));
        pLabel_11->setFont(font2);
        pLabel_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_11->setAlignment(Qt::AlignCenter);
        pLabel_12 = new QLabel(groupBox_Special_Agent);
        pLabel_12->setObjectName(QString::fromUtf8("pLabel_12"));
        pLabel_12->setGeometry(QRect(10, 150, 211, 31));
        pLabel_12->setFont(font2);
        pLabel_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_12->setAlignment(Qt::AlignCenter);
        pLabel_13 = new QLabel(groupBox_Special_Agent);
        pLabel_13->setObjectName(QString::fromUtf8("pLabel_13"));
        pLabel_13->setGeometry(QRect(10, 190, 211, 31));
        pLabel_13->setFont(font2);
        pLabel_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_13->setAlignment(Qt::AlignCenter);
        pLabel_14 = new QLabel(groupBox_Special_Agent);
        pLabel_14->setObjectName(QString::fromUtf8("pLabel_14"));
        pLabel_14->setGeometry(QRect(10, 230, 211, 31));
        pLabel_14->setFont(font2);
        pLabel_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_14->setAlignment(Qt::AlignCenter);
        pLabel_15 = new QLabel(groupBox_Special_Agent);
        pLabel_15->setObjectName(QString::fromUtf8("pLabel_15"));
        pLabel_15->setGeometry(QRect(10, 270, 211, 31));
        pLabel_15->setFont(font2);
        pLabel_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_15->setAlignment(Qt::AlignCenter);
        pLabel_16 = new QLabel(groupBox_Special_Agent);
        pLabel_16->setObjectName(QString::fromUtf8("pLabel_16"));
        pLabel_16->setGeometry(QRect(10, 310, 211, 31));
        pLabel_16->setFont(font2);
        pLabel_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_16->setAlignment(Qt::AlignCenter);
        pLabel_17 = new QLabel(groupBox_Special_Agent);
        pLabel_17->setObjectName(QString::fromUtf8("pLabel_17"));
        pLabel_17->setGeometry(QRect(10, 350, 211, 31));
        pLabel_17->setFont(font2);
        pLabel_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_17->setAlignment(Qt::AlignCenter);
        pLabel_18 = new QLabel(groupBox_Special_Agent);
        pLabel_18->setObjectName(QString::fromUtf8("pLabel_18"));
        pLabel_18->setGeometry(QRect(10, 390, 211, 31));
        pLabel_18->setFont(font2);
        pLabel_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_18->setAlignment(Qt::AlignCenter);
        pLabel_19 = new QLabel(groupBox_Special_Agent);
        pLabel_19->setObjectName(QString::fromUtf8("pLabel_19"));
        pLabel_19->setGeometry(QRect(10, 430, 211, 31));
        pLabel_19->setFont(font2);
        pLabel_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 0px 4px 0px;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        pLabel_19->setAlignment(Qt::AlignCenter);
        groupBox_Timer = new QGroupBox(centralwidget);
        groupBox_Timer->setObjectName(QString::fromUtf8("groupBox_Timer"));
        groupBox_Timer->setGeometry(QRect(530, 930, 251, 171));
        groupBox_Timer->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: 16pt ;\n"
"	font-weight: bold;\n"
"	color: #FFFFFF;\n"
"	border-style: solid;\n"
"	border-width: 4px 4px 4px 4px;\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #30D5C8 , stop:1 #4169E1);\n"
"}"));
        time_upd = new QSpinBox(groupBox_Timer);
        time_upd->setObjectName(QString::fromUtf8("time_upd"));
        time_upd->setGeometry(QRect(40, 60, 158, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(time_upd->sizePolicy().hasHeightForWidth());
        time_upd->setSizePolicy(sizePolicy1);
        time_upd->setMinimum(6000);
        time_upd->setMaximum(60000);
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
#if QT_CONFIG(tooltip)
        actionMemory_Agent->setToolTip(QCoreApplication::translate("view", "Memory_Agent", nullptr));
#endif // QT_CONFIG(tooltip)
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
        groupBox_Memory_Agent->setTitle(QCoreApplication::translate("view", "                Memory Agent", nullptr));
        pLabel->setText(QCoreApplication::translate("view", "Ram", nullptr));
        aLabel->setText(QCoreApplication::translate("view", "Memory Agent", nullptr));
        pLabel_2->setText(QCoreApplication::translate("view", "Ram Total", nullptr));
        pLabel_3->setText(QCoreApplication::translate("view", "Hard Volume", nullptr));
        pLabel_4->setText(QCoreApplication::translate("view", "Hard Ops", nullptr));
        pLabel_5->setText(QCoreApplication::translate("view", "Hard Throughput", nullptr));
        groupBox_Network_Agent->setTitle(QCoreApplication::translate("view", "               Network Agent", nullptr));
        pLabel_6->setText(QCoreApplication::translate("view", "Url", nullptr));
        aLabel_2->setText(QCoreApplication::translate("view", "Memory Agent", nullptr));
        pLabel_7->setText(QCoreApplication::translate("view", "Inet Throughput", nullptr));
        groupBox_Cpu_Agent->setTitle(QCoreApplication::translate("view", "               Cpu Agent", nullptr));
        pLabel_8->setText(QCoreApplication::translate("view", "Cpu", nullptr));
        aLabel_3->setText(QCoreApplication::translate("view", "Memory Agent", nullptr));
        pLabel_9->setText(QCoreApplication::translate("view", "Processes", nullptr));
        groupBox_Special_Agent->setTitle(QCoreApplication::translate("view", "               Special Agent", nullptr));
        pLabel_10->setText(QCoreApplication::translate("view", "Priveleged", nullptr));
        aLabel_4->setText(QCoreApplication::translate("view", "Memory Agent", nullptr));
        pLabel_11->setText(QCoreApplication::translate("view", "Total Swap", nullptr));
        pLabel_12->setText(QCoreApplication::translate("view", "Used Swap", nullptr));
        pLabel_13->setText(QCoreApplication::translate("view", "Processes ready to run", nullptr));
        pLabel_14->setText(QCoreApplication::translate("view", "Virtual memory voume", nullptr));
        pLabel_15->setText(QCoreApplication::translate("view", "Virtual memory free", nullptr));
        pLabel_16->setText(QCoreApplication::translate("view", "Inodes", nullptr));
        pLabel_17->setText(QCoreApplication::translate("view", "Hard read time", nullptr));
        pLabel_18->setText(QCoreApplication::translate("view", "System errors", nullptr));
        pLabel_19->setText(QCoreApplication::translate("view", "User auths", nullptr));
        groupBox_Timer->setTitle(QCoreApplication::translate("view", "               Time to update", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("view", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view: public Ui_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
