#include "../include/AppWindow.hpp"
#include "fmt/base.h"

AppWindow::AppWindow(const QString &title, QObject *parent)
    : m_title(title), QObject(parent) {
  fmt::println("Window created - \"{}\"", title.toStdString());
}

AppWindow::~AppWindow() {
  fmt::println("Window deleted - \"{}\"", m_title.toStdString());
}