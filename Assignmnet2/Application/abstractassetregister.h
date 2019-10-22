#ifndef ABSTRACTASSETREGISTER_H
#define ABSTRACTASSETREGISTER_H

#include <QObject>

class AbstractAssetRegister : public QObject
{
    Q_OBJECT
public:
    explicit AbstractAssetRegister(QObject *parent = nullptr);

signals:

public slots:
};

#endif // ABSTRACTASSETREGISTER_H