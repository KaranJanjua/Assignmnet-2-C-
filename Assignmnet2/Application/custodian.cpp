#include "custodian.h"

Custodian::Custodian(QString id, QObject *parent): RegisteredEntity (parent, id)
{

}

QString Custodian::name() const
{
    return _name;
}

void Custodian::setName(const QString &name)
{
    _name = name;
}
