#include "view.h"
#include "ui_view.h"

view::view(QWidget *parent) : QMainWindow(parent), ui(new Ui::view),  groupActionUpper_(new QActionGroup(this)) {
  ui->setupUi(this);
  timer_ = new QTimer(this);
  /*---группировка actions находящихся на верхнем toolBar---*/
  this->groupingActionUpperToolBar();
  /*-------------------------------------------------------*/
  this->setSlots();



}

view::~view() {
    delete ui;
    delete this->groupActionUpper_;
}

//Запуск ядра
void view::on_start_clicked() {
  checker();
  watcher_file();
  controller->starting_project(agents);
  connect(timer_, SIGNAL(timeout()), this, SLOT(on_start_clicked()));
  timer_->setInterval(agents[4]);
  timer_->start();
}

//Слежка файла
void view::watcher_file() {
  //Создаем наследника
  fsWatcher = new QFileSystemWatcher(this);
  //устанавливаем слежку на файл
  fsWatcher->addPath("/Users/luigiket/MonitoringSystem/logs.txt");
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

//Проверка метрик
void view::checker() {
  agents[0] = (ui->cpu_on->isChecked()) ? 1 : 0;
  agents[1] = (ui->mem_on->isChecked()) ? 1 : 0;
  agents[2] = (ui->net_on->isChecked()) ? 1 : 0;
  agents[3] = (ui->dop_on->isChecked()) ? 1 : 0;
  agents[4] = ui->time_upd->text().toInt();
}

//Остановка ядра
void view::on_stop_clicked() {
  connect(timer_, SIGNAL(timeout()), this, SLOT(on_stop_clicked()));
  timer_->stop();
}



auto view::setSlots() -> void {
    // группа QAction верхнего toolBar
    connect(groupActionUpper_, SIGNAL(triggered(QAction *)), this,
            SLOT(triggeredGroupActionUpper(QAction *)));
    /*----------------------------------------*/
}


auto view::groupingActionUpperToolBar() ->void {
  groupActionUpper_->addAction(ui->actionMemory_Agent);
//  this->groupActionUpper_->addAction(ui->action_upload_images);
//  this->groupActionUpper_->addAction(ui->actionSettings);
//  this->groupActionUpper_->addAction(ui->actionUpload_weights);
//  this->groupActionUpper_->addAction(ui->actionDownload_weights);
//  this->groupActionUpper_->addAction(ui->actionTrain);
//  this->groupActionUpper_->addAction(ui->actionTest);
}

auto view::triggeredGroupActionUpper(QAction *action) -> void {
  if (action == ui->actionMemory_Agent) {
    this->action_memory_agent();
  }
//  else if (action == ui->action_upload_images) {
//    this->action_upload_images();
//  } else if (action == ui->actionSettings) {
//    this->settings_on_off();
//  } else if (action == ui->actionUpload_weights) {
//      this->action_upload_weights();
//  } else if (action == ui->actionDownload_weights) {
//      this->action_download_weights();
//  } else if (action == ui->actionTrain) {
//      this->action_train();
//  } else if (action == ui->actionTest) {
//      this->action_test();
//  }
}

auto view::action_memory_agent() -> void {
    if (ui->actionMemory_Agent->iconText() == "Memory_Agent_on") {
        ui->actionMemory_Agent->setIcon(QIcon(":/images/agent_1_off.png"));
        ui->actionMemory_Agent->setIconText("Memory_Agent_off");
    } else {
      ui->actionMemory_Agent->setIcon(QIcon(":/images/agent_1_on.png"));
      ui->actionMemory_Agent->setIconText("Memory_Agent_on");

    }


 }
