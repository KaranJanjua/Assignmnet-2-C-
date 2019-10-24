#include "abstractassetregister.h"
#include "QVariant"

QString AbstractAssetRegister::username()
{

}

QString AbstractAssetRegister::setUsername(QString)
{

}

QString AbstractAssetRegister::generateID()
{

}

AbstractEntityFactory AbstractAssetRegister::getFactory()
{

}

bool AbstractAssetRegister::storeEntity()
{

}

bool AbstractAssetRegister::deleteEntity(QString id)
{

}

bool AbstractAssetRegister::persist(QMap<QString, QVariant> options)
{

}

bool AbstractAssetRegister::restore(QMap<QString, QVariant> options)
{

}

AbstractAssetRegister::AbstractAssetRegister(QObject *parent) : QObject(parent)
{

}

template<class T>
AbstractAssetRegister *AbstractAssetRegister::instance()
{

}
