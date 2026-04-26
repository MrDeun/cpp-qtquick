#include "include/Firefox.hpp"
#include "include/InternetExplorer.hpp"
#include "include/UserInteractor.hpp"
#include "qcoreapplication.h"
#include "qobject.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {

  QCoreApplication app(argc, argv);
  UserInteractor interactor{};
  Firefox fox{};
  InternetExplorer exp{};

  QObject::connect(&interactor, &UserInteractor::phraseTyped, &fox,
                   &Firefox::browse);
  QObject::connect(&interactor, &UserInteractor::phraseTyped, &exp,
                   &InternetExplorer::browseRequested);

  interactor.getInput();

  // #if QT_VERSION >= 0x50601
  //     QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  // #endif

  //     QGuiApplication app(argc, argv);

  //     QQmlApplicationEngine engine;
  //     engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  //     if (engine.rootObjects().isEmpty())
  //         return -1;

  return app.exec();
}
