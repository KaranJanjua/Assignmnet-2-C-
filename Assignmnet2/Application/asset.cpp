#include "asset.h"

Asset::Asset(QString id, QObject *parent): RegisteredEntity (id, parent)
{

}

QString Asset::serialNo() const
{
    return _serialNo;
}

void Asset::setSerialNo(const QString &serialNo)
{
    _serialNo = serialNo;
}

QString Asset::brand() const
{
    return _brand;
}

void Asset::setBrand(const QString &brand)
{
    _brand = brand;
}

QString Asset::model() const
{
    return _model;
}

void Asset::setModel(const QString &model)
{
    _model = model;
}

QDateTime Asset::purchaseDate() const
{
    return _purchaseDate;
}

void Asset::setPurchaseDate(const QDateTime &purchaseDate)
{
    _purchaseDate = purchaseDate;
}

QDateTime Asset::DisposalDate() const
{
    return _DisposalDate;
}

void Asset::setDisposalDate(const QDateTime &DisposalDate)
{
    _DisposalDate = DisposalDate;
}
