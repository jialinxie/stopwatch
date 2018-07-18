#include "myitem.h"

MyItem::MyItem(QWidget *parent) : QWidget(parent)
{

    layout = new QHBoxLayout;

    indexLabel = new QLabel;
    indexLabel->setObjectName(tr("indexLabel"));
    indexLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    valueLabel = new QLabel;
    valueLabel->setObjectName(tr("valueLabel"));
    valueLabel->setAlignment(Qt::AlignVCenter | Qt::AlignCenter);

    intervalLabel = new QLabel;
    intervalLabel->setObjectName(tr("intervalLable"));
    intervalLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    layout->addWidget(indexLabel);
    layout->addWidget(valueLabel);
    layout->addWidget(intervalLabel);

    this->setLayout(layout);
}

void MyItem::setIndexAndValue(QString index, QString value, QString interval)
{
    this->indexLabel->setText(index);
    this->valueLabel->setText(value);
    this->intervalLabel->setText(interval);
}
