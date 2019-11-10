#include "registeredentity.h"

/*
RegisteredEntity::RegisteredEntity(QObject *parent) : QObject(parent)
{

}
*/

RegisteredEntity::RegisteredEntity(QObject *parent, QString id): QObject(parent), _id{id}
{

}

/**
 * @brief RegisteredEntity::getId
 * @return the id of the register entity
 */
QString RegisteredEntity::getId() const
{
    return _id;
}


/**
 * @brief RegisteredEntity::setId
 * @param value
 */
void RegisteredEntity::setId(const QString &value)
{
    // when creating the id have to use the creatUuid() function in the
    _id = value;
}


/**
 * @brief RegisteredEntity::getLastEditTime
 * @return when the entity last edited
 */

QDateTime RegisteredEntity::getLastEditTime() const
{
    return _lastEditTime;
}

void RegisteredEntity::setLastEditTime(const QDateTime &value)
{
    _lastEditTime = value;
}

/**
 * @brief RegisteredEntity::getLastEditedBy
 * @return costodian who last edited the entity
 */
QString RegisteredEntity::getLastEditedBy() const
{
    return _lastEditedBy;
}

void RegisteredEntity::setLastEditedBy(const QString &value)
{
    _lastEditedBy = value;
}
