#ifndef MYITEM_H
#define MYITEM_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

class MyItem : public QWidget
{
    Q_OBJECT
public:
    explicit MyItem(QWidget *parent = nullptr);
public:
    void setIndexAndValue(QString index,QString value,QString interval);
signals:

public slots:
private:
    QHBoxLayout *layout;
    QLabel *indexLabel;
    QLabel *valueLabel;
    QLabel *intervalLabel;
};

#endif // MYITEM_H
