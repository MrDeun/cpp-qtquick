#include "../include/Firefox.hpp"

#include <QDebug>
#include <print>

Firefox::Firefox(QObject *parent) : QObject(parent) {}

void Firefox::browse(const QString &phrase) {
  std::println(stdout, "Displaying results for phrase \"{}\"",
               phrase.toStdString());
  std::println("FOX: Result 1...");
  std::println("FOX: Result 2...");
  std::println("FOX: Result 3...");
}
