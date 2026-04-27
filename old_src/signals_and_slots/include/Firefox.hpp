#pragma once
#include <QMetaObject>
#include <QObject>
class Firefox : public QObject {
  Q_OBJECT
public:
  virtual ~Firefox() = default;
  Firefox(QObject *parent = nullptr);
public slots:
  void browse(const QString &phrase);
};
