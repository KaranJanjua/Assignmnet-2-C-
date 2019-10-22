#ifndef REGISTEREDENTITY_H
#define REGISTEREDENTITY_H

#include <QObject>

class RegisteredEntity : public QObject
{
    Q_OBJECT
public:
    explicit RegisteredEntity(QObject *parent = nullptr);

signals:

public slots:
};

#endif // REGISTEREDENTITY_H