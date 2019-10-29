#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H
#include "asset.h"
#include "assettype.h"
#include "custodian.h"
#include "userproperty.h"
#include "userpropertydefinition.h"
#include <QString>
#include <QMap>
#include <QVariant>

class AbstractEntityFactory
{
public:
    AbstractEntityFactory();
    // TODO: need to choose appropriate pointer types across the application
    Custodian* createCustodian(QString id,QMap<QString,QVariant> parameters=QMap<QString, QVariant>{},QObject* parent=nullptr);
    AssetType* createAssetType(QString id,QMap<QString, QVariant> parametrs= QMap<QString, QVariant>{},QObject* parent=nullptr);
    Asset* createAsset(AssetType* type,QString,QMap<QString,QVariant> parameters=QMap<QString, QVariant>{},QObject* parent=nullptr);
    UserPropertyDefinition* createPropertyDefination(QString id,QMap<QString, QVariant> parametrs= QMap<QString, QVariant>{},QObject* parent=nullptr);
    UserProperty* createProperty(UserPropertyDefinition* definition,QString id,QMap<QString, QVariant> parametrs= QMap<QString, QVariant>{},QObject* parent=nullptr);
};


#endif // ABSTRACTENTITYFACTORY_H
