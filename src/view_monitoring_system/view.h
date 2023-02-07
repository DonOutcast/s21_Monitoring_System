#pragma once

#include "../controller/controller.h"
#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileSystemWatcher>
#include <QTimer>
#include <QDateTime>
#include <QActionGroup>
#include <QDebug>
#include <QFileDialog>
#include <QDir>


QT_BEGIN_NAMESPACE
namespace Ui {
class view;
}
QT_END_NAMESPACE

class view : public QMainWindow {
  Q_OBJECT

public:
  view(QWidget *parent = nullptr);
  ~view();

  auto groupingActionUpperToolBar() ->void;
  auto setSlots() -> void ;
  auto action_memory_agent() -> void;
  auto action_network_agent() -> void;
  auto action_cpu_agent() -> void;
  auto action_special_agent() -> void;
  auto action_start_all() -> void;
  auto action_timer() -> void;
  QActionGroup *groupActionUpper_;

private slots:
  auto triggeredGroupActionUpper(QAction *action) -> void;

private slots:
  void watcher_file();
  void settext();
  auto start_slot() -> void;
  void on_logs_txt_clicked();
  void on_config_conf_clicked();

private:
  Ui::view *ui;
  s21::Controller *controller = nullptr;
  QFileSystemWatcher *fsWatcher;
  QTimer *timer_;
  vector<int> agents{0, 0, 0, 0, 6000};
  QString path_logs;
  QString path_config;
};

