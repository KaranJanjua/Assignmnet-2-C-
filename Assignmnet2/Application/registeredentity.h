#ifndef REGISTEREDENTITY_H
#define REGISTEREDENTITY_H

#include <QObject>

class RegisteredEntity : public QObject
{
    Q_OBJECT
private:
    QString _id;
    QDateTime _lastEditTime;
    QString _lastEditedBy;

public:
    explicit RegisteredEntity(QObject *parent = nullptr);
    QString getId() const;
    QDateTime getLastEditTime() const;
    QString getLastEditedBy() const;

protected:
    RegisteredEntity( QObject *parent, QString id);
    void setId(const QString &value);
    void setLastEditTime(const QDateTime &value);
    void setLastEditedBy(const QString &value);
};

#endif // REGISTEREDENTITY_H
