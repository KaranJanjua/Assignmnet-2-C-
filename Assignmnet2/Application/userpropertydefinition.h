#ifndef USERPROPERTYDEFINITION_H
#define USERPROPERTYDEFINITION_H

#include <QObject>

class UserPropertyDefinition : public QObject
{
    Q_OBJECT
public:
    explicit UserPropertyDefinition(QObject *parent = nullptr);

signals:

public slots:
};

#endif // USERPROPERTYDEFINITION_H