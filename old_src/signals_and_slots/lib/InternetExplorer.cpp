#include "../include/InternetExplorer.hpp"
#include "qobject.h"
#include "qoverload.h"
#include <QDebug>
#include <fmt/core.h>

InternetExplorer::InternetExplorer(QObject *parent) : QObject(parent) {
  m_timer.setInterval(10000);
  m_timer.setSingleShot(true);

  connect(this, &InternetExplorer::browseRequested, &m_timer,
          qOverload<>(&QTimer::start));
  connect(&m_timer, &QTimer::timeout, this, &InternetExplorer::browse);
}

void InternetExplorer::browse() {
  fmt::println("EXP: Result 1...");
  fmt::println("EXP: Result 2...");
  fmt::println("EXP: Result 3...");
}
