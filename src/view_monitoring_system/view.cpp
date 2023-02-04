#include "view.h"
#include "ui_view.h"

view::view(QWidget *parent) : QMainWindow(parent), ui(new Ui::view) {
  ui->setupUi(this);
  timer_ = new QTimer(this);
}

view::~view() { delete ui; }

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
