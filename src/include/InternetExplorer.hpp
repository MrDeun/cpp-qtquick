#pragma once
#include <QMetaObject>
#include <QObject>
#include <QTimer>
class InternetExplorer : public QObject {
  Q_OBJECT
public:
  explicit InternetExplorer(QObject *parent = nullptr);
  virtual ~InternetExplorer() = default;
public slots:
  void browse();
signals:
  void browseRequested(const QString &phrase);

private:
  QTimer m_timer;
};
