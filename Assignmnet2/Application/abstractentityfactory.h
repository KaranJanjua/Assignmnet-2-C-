#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H
#include "custodian.h"
#include "assettype.h"
#include "asset.h"
#include "userproperty.h"
#include "userpropertydefinition.h"
#include "QList"
#include <QObject>


class AbstractEntityFactory
{
public:
    AbstractEntityFactory();
    Custodian createCustonian(QString ID,QMap<QString,QVariant> parameters= QMap{},QObject *parent = nullptr);
    AssetType createAssetType(QString ID,QMap<QString,QVariant> parameters=QMap{},QObject *parent =nullptr);
    Asset createAsset(AssetType type,QString ID,QMap<QString,QVariant> parameters=QMap{},QObject *parent =nullptr);
    UserPropertyDefinition createPropertyDefinition(QString ID,QMap<QString,QVariant> parameters=QMap{},QObject *parent =nullptr);
    UserProperty createProperty(UserPropertyDefinition definition,QString ID,QMap<QString,QVariant> parameters=QMap{},QObject *parent =nullptr);

};

#endif // ABSTRACTENTITYFACTORY_H
