#pragma once

#include <QMetaObject>
#include <QObject>
class UserInteractor : public QObject {
  Q_OBJECT
public:
  UserInteractor(QObject *parent = nullptr);
  virtual ~UserInteractor() = default;
  void getInput();
signals:
  void phraseTyped(const QString &phrase);
};
