#include "fmt/format.h"
#include "include/AppWindow.hpp"
#include "qdebug.h"
#include "qobject.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <cstddef>
#include <fmt/core.h>

int main(int argc, char *argv[]) {
  fmt::println("Hello world!\n");
  QCoreApplication app(argc, argv);
  // QGuiApplication app(argc, argv);

  auto win1 = new AppWindow("window 1", nullptr);
  auto win2 = new AppWindow("window 2", nullptr);

  QTextStream s(stdin);

  for (size_t i = 0; i < 3; i++) {
    QString new_title =
        QString::fromStdString(fmt::format("Child window {}", i));
    auto new_window = new AppWindow(new_title, win2);
  }

  delete win2;
  delete win1;

  // QQmlApplicationEngine engine;
  // engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  // if (engine.rootObjects().isEmpty())
  // return -1;

  return app.exec();
}
