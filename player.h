#ifndef PLAYER_H
#define PLAYER_H

#include "iplayer.h"
#include <string>

class Player : public IPlayer
{
public:
    Player(std::string name) : m_name(name){}
    virtual void bat() override;
    virtual void bowl() override;
    virtual void field() override;

private:
    std::string m_name;
};

#endif // PLAYER_H
