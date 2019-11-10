#ifndef TYPEDUSERPROPERTY_H
#define TYPEDUSERPROPERTY_H
#include <userproperty.h>

template< class T>
class TypedUserProperty : public UserProperty
{
public:
    TypedUserProperty()
    {

    }

    T getValue() const
    {
        return _value;
    }

    void setValue(const T &value)
    {
       _value = value;
    }

private:
    T _value;
};

#endif // TYPEDUSERPROPERTY_H
