#ifndef USERPROPERTY_H
#define USERPROPERTY_H

#include <QObject>

class UserProperty : public QObject
{
    Q_OBJECT
public:
    explicit UserProperty(QObject *parent = nullptr);

signals:

public slots:
};

#endif // USERPROPERTY_H