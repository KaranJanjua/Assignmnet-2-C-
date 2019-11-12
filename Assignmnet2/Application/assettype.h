#ifndef ASSETTYPE_H
#define ASSETTYPE_H

#include "registeredentity.h"
#include "asset.h"
#include "userpropertydefinition.h"


class AssetType : public RegisteredEntity
{
public:
    AssetType(QString id, QObject *parent);

    QString name() const;
    void setName(const QString &name);

private:
    QString _name;
    QVector <Asset> instances;

private slots:
//error
    void instanceDestroyed(Asset instance);

};


#endif // ASSETTYPE_H
