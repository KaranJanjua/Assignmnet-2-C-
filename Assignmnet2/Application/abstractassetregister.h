#ifndef ABSTRACTASSETREGISTER_H
#define ABSTRACTASSETREGISTER_H
#include "abstractentityfactory.h"
#include <QObject>

class AbstractAssetRegister : public QObject
{
    Q_OBJECT

public:
    explicit AbstractAssetRegister(QObject *parent = nullptr);
    QString username();
    QString setUsername(QString);
    QString generateID();
    AbstractEntityFactory getFactory();
    bool storeEntity();
    bool deleteEntity(QString id);
    //  Qvector<> allEntities([type]);
    bool persist(QMap<QString,QVariant> options);
    bool restore(QMap<QString,QVariant> options);
    template<class T> AbstractAssetRegister* instance();

signals:

public slots:

protected:
    //  explicit AbstractAssetRegister(QObject*);

};

#endif // ABSTRACTASSETREGISTER_H
