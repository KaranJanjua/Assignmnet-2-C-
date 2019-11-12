#ifndef ASSET_H
#define ASSET_H
#include<QDateTime>
#include "registeredentity.h"
#include "typeduserproperty.h"
#include "custodian.h"
#include "userproperty.h"

//#include "assettype.h"

class Asset : public RegisteredEntity
{
private:
    // error AssetType type;
    QString _serialNo;
    QString _brand;
    QString _model;
    TypedUserProperty <double> _purchasePrice;
    QDateTime _purchaseDate;
    QDateTime _DisposalDate;
    Custodian _custodian;
    UserProperty _userProperties;

public:
    Asset(QString id, QObject *parent);

    QString serialNo() const;
    void setSerialNo(const QString &serialNo);

    QString brand() const;
    void setBrand(const QString &brand);

    QString model() const;
    void setModel(const QString &model);

    TypedUserProperty<double> purchasePrice() const;
    void setPurchasePrice(const TypedUserProperty<double> &purchasePrice);

    QDateTime purchaseDate() const;
    void setPurchaseDate(const QDateTime &purchaseDate);

    QDateTime DisposalDate() const;
    void setDisposalDate(const QDateTime &DisposalDate);

    Custodian custodian() const;
    void setCustodian(const Custodian &custodian);

    UserProperty userProperties() const;
    void setUserProperties(const UserProperty &userProperties);

private slots:
    void userPropertyChanged(QVariant newValue, QVariant oldValue);

};

#endif // ASSET_H
