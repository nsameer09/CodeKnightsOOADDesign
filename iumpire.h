#ifndef IUMPIRE_H
#define IUMPIRE_H

#include <iostream>

class IUmpire
{
public:
    virtual void makeDecisions() = 0;
};

class Umpire : public IUmpire
{
public:
    virtual void makeDecisions() override
    {
        std::cout << "\nMaking Decisions...\n";
    }
};

#endif // IUMPIRE_H
