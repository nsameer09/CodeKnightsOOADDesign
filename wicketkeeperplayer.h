#ifndef WICKETKEEPERPLAYER_H
#define WICKETKEEPERPLAYER_H

#include "iplayer.h"
#include "IWicketKeep.h"
#include <string>

class WicketKeeperPlayer : public IPlayer, public IWicketKeep
{
public:
    WicketKeeperPlayer(std::string name): m_name(name){}

    virtual void bat() override;
    virtual void bowl() override;
    virtual void field() override;
    virtual void wicketkeep() override;

private:
    std::string m_name;
};

#endif // WICKETKEEPERPLAYER_H
