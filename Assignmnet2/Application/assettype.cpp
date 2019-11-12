#include "assettype.h"

AssetType::AssetType(QString id, QObject *parent): RegisteredEntity (id, parent)
{

}

/**
 * @brief AssetType::name
 * @return the name of the asset
 */
QString AssetType::name() const
{
    return _name;
}

void AssetType::setName(const QString &name)
{
    _name = name;
}
