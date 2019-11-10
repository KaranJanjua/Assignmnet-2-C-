#ifndef CUSTODIAN_H
#define CUSTODIAN_H
#include <registeredentity.h>
#include <typeduserproperty.h>
class Custodian : public RegisteredEntity
{

private:
    QString _name;
    TypedUserProperty <QString> _department;
    TypedUserProperty <QString> _phoneNumber;
public:
    Custodian(QString id, QObject *parent);

    QString name() const;
    void setName(const QString &name);

    TypedUserProperty<QString> department() const;
    void setDepartment(const TypedUserProperty<QString> &department);

    TypedUserProperty<QString> phoneNumber() const;
    void setPhoneNumber(const TypedUserProperty<QString> &phoneNumber);
};

#endif // CUSTODIAN_H
