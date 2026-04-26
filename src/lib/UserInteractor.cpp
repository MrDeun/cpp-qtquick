#include "../include/UserInteractor.hpp"
#include <print>

#include <QDebug>
UserInteractor::UserInteractor(QObject *parent) : QObject(parent) {}

void UserInteractor::getInput() {
  std::println(stdout, "Search phrase: ");

  QTextStream s(stdin);

  const auto &phrase = s.readLine();

  if (!phrase.isEmpty()) {
    emit phraseTyped(phrase);
  }
}
