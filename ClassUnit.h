#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <vector>
#include "Unit.h"

class ClassUnit: public Unit
{
public:
    enum AccessModifier
        {
            PUBLIC=1,
            PROTECTED=1<<1,
            PRIVATE=1<<2,
            INTERNAL=1<<4,
            PRIVATE_PROTECTED=1<<3,
            PROTECTED_INTERNAL=1<<5
        };
 static const std::vector<std::string> ACCESS_MODIFIERS;
 explicit ClassUnit( const std::string& name);
 using Flags = unsigned int;
 virtual ~ClassUnit() = default;
 virtual std::string compile(unsigned int level = 0) const=0;
 virtual void add( const std::shared_ptr< Unit >& unit, Flags flags = 0 );
protected:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};



#endif // CLASSUNIT_H
