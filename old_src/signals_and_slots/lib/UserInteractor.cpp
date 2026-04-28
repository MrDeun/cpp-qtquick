#include "../include/UserInteractor.hpp"
#include <fmt/core.h>

#include <QDebug>
UserInteractor::UserInteractor(QObject *parent) : QObject(parent) {}

void UserInteractor::getInput() {
  fmt::println(stdout, "Search phrase: ");

  QTextStream s(stdin);

  const auto &phrase = s.readLine();

  if (!phrase.isEmpty()) {
    emit phraseTyped(phrase);
  }
}
