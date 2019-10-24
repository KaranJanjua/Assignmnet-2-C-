#include "abstractentityfactory.h"

AbstractEntityFactory::AbstractEntityFactory()
{

}

Custodian AbstractEntityFactory::createCustonian(QString ID, QMap<QString, QVariant> parameters, QObject *parent)
{

}

AssetType AbstractEntityFactory::createAssetType(QString ID, QMap<QString, QVariant> parameters, QObject *parent)
{

}

Asset AbstractEntityFactory::createAsset(AssetType type, QString ID, QMap<QString, QVariant> parameters, QObject *parent)
{

}

UserPropertyDefinition AbstractEntityFactory::createPropertyDefinition(QString ID, QMap<QString, QVariant> parameters, QObject *parent)
{

}

UserProperty AbstractEntityFactory::createProperty(UserPropertyDefinition definition, QString ID, QMap<QString, QVariant> parameters, QObject *parent)
{

}
