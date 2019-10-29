#ifndef ABSTRACTASSETREGISTER_H
#define ABSTRACTASSETREGISTER_H
#include "abstractentityfactory.h"
#include "asset.h"
#include <QObject>

class AbstractAssetRegister : public QObject
{
    Q_OBJECT
    QString _name;
    QString _id;
    static AbstractAssetRegister* _instance;
    QMap<QString,std::shared_ptr<Asset>> _asset;

public:
    AbstractAssetRegister();
    QString username();

    void getUsername(QString x);
    QString setUsername();

    void getId(QString id);
    QString setId();
    QString generateID();

    AbstractEntityFactory getFactory();
    QVector<QString> allEntities();

    bool storeEntity(std::shared_ptr<Asset> asset);
    bool storeEntity(QSharedPointer<Asset> asset);

    bool retrieveEntity(QString id);
    bool deleteEntity(QString id);

    bool persist(QMap<QString,QVariant> options);
    bool restore(QMap<QString,QVariant> options);

    template<class T> AbstractAssetRegister* instance();

signals:

public slots:

protected:
    explicit AbstractAssetRegister(QObject*);

};

#endif // ABSTRACTASSETREGISTER_H
