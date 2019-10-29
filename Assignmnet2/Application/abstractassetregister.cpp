#include "abstractassetregister.h"
#include "QObject"
#include <cstdlib>
#include <QUuid>
#include "asset.h"

//adding a parameter to get the name
QString AbstractAssetRegister::username()
{
    return this->username();
}
void AbstractAssetRegister::getUsername(QString x)
{
    _name = x;
}

QString AbstractAssetRegister::setUsername()
{
    return _name;
}

void AbstractAssetRegister::getId(QString id)
{
    _id=id;
}

QString AbstractAssetRegister::setId()
{
    return _id;
}

QString AbstractAssetRegister::generateID()

{
    _id = QUuid::createUuid().toString();
    return _id;

}

AbstractEntityFactory AbstractAssetRegister::getFactory()
{
    AbstractEntityFactory *ab_entity_factory=new AbstractEntityFactory;
    return *ab_entity_factory;
}

QVector<QString> AbstractAssetRegister::allEntities()
{
}

bool AbstractAssetRegister::storeEntity(std::shared_ptr<Asset> asset)
{
    if(!_asset.count(asset->id())){
        _asset[asset->id()] = std::shared_ptr<Asset>{asset};
        return true;
    }
    return false;
}

/*
bool AbstractAssetRegister::storeEntity(QSharedPointer<Asset> asset)
{    if(!_asset.count(asset->id())){
        _asset[asset->id()] = QSharedPointer<Asset>{asset};
        return true;
    }
    return false;
}
*/

//return type should be entity(Asset,AssetType,Custodian)
//return nullptr if not found
bool AbstractAssetRegister::retrieveEntity(QString id)
{
    auto _id = _asset.find(id);
    if(id != id.end()){
        // _id->second;
        return true;
    }
    return false;
}

bool AbstractAssetRegister::deleteEntity(QString id)
{
    auto _id= _asset.find(id);
    _asset.erase(_id);
    return true;
}

template<class T>
AbstractAssetRegister *AbstractAssetRegister::instance()
{
    if (_instance == nullptr){
        _instance = new AbstractAssetRegister();
    }
    return _instance;
}
