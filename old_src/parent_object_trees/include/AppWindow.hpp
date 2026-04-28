#pragma once

#include "qobject.h"
#include <QMetaObject>
#include <QObject>
class AppWindow : public QObject {
  Q_OBJECT

public:
  explicit AppWindow(const QString &m_title, QObject *parent = nullptr);
  virtual ~AppWindow();

signals:

private:
  QString m_title;
};