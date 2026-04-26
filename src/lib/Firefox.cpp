#include "../include/Firefox.hpp"

#include <QDebug>
#include <print>

Firefox::Firefox(QObject *parent) : QObject(parent) {}

void Firefox::browse(const QString &phrase) {
  std::println(stdout, "Displaying results for phrase \"{}\"",
               phrase.toStdString());
  std::println("Result 1...");
  std::println("Result 2...");
  std::println("Result 3...");
}
