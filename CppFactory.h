#ifndef SOMEFACTORY_H
#define SOMEFACTORY_H

#include "ifactory.h"

class CppFactory : public IFactory
{
public:
    CppFactory() = default;

    std::shared_ptr<CppUnit> createClassUnit(const std::string& name) override
    {
        return std::make_shared<CppUnit>(name);
    }

    std::shared_ptr<CppMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override
    {
        return std::make_shared<CppMethodUnit>(name, returnType, flags);
    }

    std::shared_ptr<CppPrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override
    {
        return std::make_shared<CppPrintOperatorUnit>(text);
    }
};


#endif // SOMEFACTORY_H
