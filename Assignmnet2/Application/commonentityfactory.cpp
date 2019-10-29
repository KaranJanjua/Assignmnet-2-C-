#include "commonentityfactory.h"

CommonEntityFactory::CommonEntityFactory()
{

}

Custodian *AbstractEntityFactory::createCustodian(QString id, QMap<QString, QVariant> parameters, QObject *parent)
{

}

AssetType *AbstractEntityFactory::createAssetType(QString id, QMap<QString, QVariant> parametrs, QObject *parent)
{

}

Asset *AbstractEntityFactory::createAsset(AssetType *type, QString, QMap<QString, QVariant> parameters, QObject *parent)
{

}

UserPropertyDefinition* AbstractEntityFactory::createPropertyDefination(QString id, QMap<QString, QVariant> parametrs, QObject *parent)
{

}

UserProperty* AbstractEntityFactory::createProperty(UserPropertyDefinition* definition, QString id, QMap<QString, QVariant> parametrs, QObject *parent)
{

}
