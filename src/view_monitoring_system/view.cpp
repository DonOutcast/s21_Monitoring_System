#include "view.h"
#include "ui_view.h"

view::view(QWidget *parent) : QMainWindow(parent), groupActionUpper_(new QActionGroup(this)), ui(new Ui::view) {
  ui->setupUi(this);
  timer_ = new QTimer(this);
  /*---группировка actions находящихся на верхнем toolBar---*/
  this->groupingActionUpperToolBar();
  /*-------------------------------------------------------*/
  this->setFixedSize(1290, 1005);
  this->setSlots();
  ui->groupBox_Memory_Agent->hide();
  ui->groupBox_Network_Agent->hide();
  ui->groupBox_Cpu_Agent->hide();
  ui->groupBox_Special_Agent->hide();
  ui->groupBox_Timer->hide();
}

view::~view() {
    delete ui;
    delete this->groupActionUpper_;
    delete controller;
    delete timer_;
}

//Слежка файла
void view::watcher_file() {
  //Создаем наследника
  fsWatcher = new QFileSystemWatcher(this);
  //устанавливаем слежку на файл
  fsWatcher->addPath("../../../../logs.txt");
  qDebug() << "watcher";
  //Связываем сигнал со слотом, как только файл будет изменен
  //произойдет вызов слота changed(QString)
  connect(fsWatcher, SIGNAL(fileChanged(QString)), this, SLOT(settext()));
}

//Вывод содержимого файла
void view::settext() {
  std::string output = controller->print_last_strings();
  QByteArray byteArray(output.c_str(), output.length());
  ui->textBrowser->setText(byteArray);
  ui->textBrowser->show();
}

auto view::setSlots() -> void {
    // группа QAction верхнего toolBar
    connect(groupActionUpper_, SIGNAL(triggered(QAction *)), this,
            SLOT(triggeredGroupActionUpper(QAction *)));
    /*----------------------------------------*/
}


auto view::groupingActionUpperToolBar() ->void {
  this->groupActionUpper_->addAction(ui->actionMemory_Agent);
  this->groupActionUpper_->addAction(ui->actionNetwork_Agent);
  this->groupActionUpper_->addAction(ui->actionCpu_Agent);
  this->groupActionUpper_->addAction(ui->actionSpecial_Agent);
  this->groupActionUpper_->addAction(ui->actionStart_all);
  this->groupActionUpper_->addAction(ui->actionTimer);
}

auto view::triggeredGroupActionUpper(QAction *action) -> void {
  if (action == ui->actionMemory_Agent) {
    this->action_memory_agent();
  }
  else if (action == ui->actionNetwork_Agent) {
    this->action_network_agent();
  } else if (action == ui->actionCpu_Agent) {
    this->action_cpu_agent();
  } else if (action == ui->actionSpecial_Agent) {
      this->action_special_agent();
  } else if (action == ui->actionStart_all) {
      this->action_start_all();
  } else if (action == ui->actionTimer) {
      this->action_timer();
  }
}

auto view::action_memory_agent() -> void {
    if (ui->actionMemory_Agent->iconText() == "Memory_Agent_on") {
        ui->actionMemory_Agent->setIcon(QIcon(":/images/agent_1_off.png"));
        ui->groupBox_Memory_Agent->hide();
        ui->actionMemory_Agent->setIconText("Memory_Agent_off");
        agents[1] = 0;
    } else {
      ui->actionMemory_Agent->setIcon(QIcon(":/images/agent_1_on.png"));
      ui->actionMemory_Agent->setIconText("Memory_Agent_on");
      ui->groupBox_Memory_Agent->show();
      agents[1] = 1;
    }
 }

auto view::action_network_agent() -> void {
    if (ui->actionNetwork_Agent->iconText() == "Network_Agent_on") {
        ui->actionNetwork_Agent->setIcon(QIcon(":/images/agent_2_off.png"));
        ui->groupBox_Network_Agent->hide();
        ui->actionNetwork_Agent->setIconText("Network_Agent_off");
        agents[2] = 0;
    } else {
      ui->actionNetwork_Agent->setIcon(QIcon(":/images/agent_2_on.png"));
      ui->actionNetwork_Agent->setIconText("Network_Agent_on");
      ui->groupBox_Network_Agent->show();
    agents[2] = 1;
    }
 }

auto view::action_cpu_agent() -> void {
    if (ui->actionCpu_Agent->iconText() == "Network_Agent_on") {
        ui->actionCpu_Agent->setIcon(QIcon(":/images/agent_3_off.png"));
        ui->groupBox_Cpu_Agent->hide();
        agents[0] = 0;
        ui->actionCpu_Agent->setIconText("Network_Agent_off");
    } else {
      ui->actionCpu_Agent->setIcon(QIcon(":/images/agent_3_on.png"));
      ui->actionCpu_Agent->setIconText("Network_Agent_on");
      ui->groupBox_Cpu_Agent->show();
      agents[0] = 1;
    }
 }

auto view::action_special_agent() -> void {
    if (ui->actionSpecial_Agent->iconText() == "Network_Agent_on") {
        ui->actionSpecial_Agent->setIcon(QIcon(":/images/agent_4_off.png"));
        ui->groupBox_Special_Agent->hide();
        ui->actionSpecial_Agent->setIconText("Network_Agent_off");
        agents[3] = 0;
    } else {
      ui->actionSpecial_Agent->setIcon(QIcon(":/images/agent_4_on.png"));
      ui->actionSpecial_Agent->setIconText("Network_Agent_on");
      ui->groupBox_Special_Agent->show();
        agents[3] = 1;
    }
 }

auto view::action_start_all() -> void {
    if (ui->actionStart_all->iconText() == "Start_all_on") {
        ui->actionStart_all->setIcon(QIcon(":/images/start_off.png"));
        ui->actionStart_all->setIconText("Start_all_off");
        timer_->stop();
    } else {
      ui->actionStart_all->setIcon(QIcon(":/images/start_on.png"));
      ui->actionStart_all->setIconText("Start_all_on");
      watcher_file();
      this->start_slot();
    }
 }

auto view::start_slot() -> void {
          controller->starting_project(agents);
          connect(timer_, SIGNAL(timeout()), this, SLOT(start_slot()));
          timer_->start();
          timer_->setInterval(agents[4]);
}

auto view::action_timer() -> void {
    if (ui->actionTimer->iconText() == "Start_all_on") {
        ui->actionTimer->setIcon(QIcon(":/images/timer_off.png"));
        ui->groupBox_Timer->hide();
        ui->actionTimer->setIconText("Start_all_off");
    } else {
      ui->actionTimer->setIcon(QIcon(":/images/timer_on.png"));
      ui->actionTimer->setIconText("Start_all_on");
      ui->groupBox_Timer->show();
      agents[4] = ui->time_upd->text().toInt();
    }
 }
