#ifndef ASSET_H
#define ASSET_H
#include "registeredentity.h"



class Asset : public RegisteredEntity
{
public:
    Asset();
    QString &id() const;

};

#endif // ASSET_H
