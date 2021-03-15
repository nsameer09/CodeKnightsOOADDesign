#ifndef ITEAM_H
#define ITEAM_H

#include "iplayer.h"
#include "string"

class ITeam
{
public:
    virtual void addPlayer(IPlayer*) = 0;
    virtual std::string getTeamName() const = 0;
    virtual int getNumOfPlayers() const = 0;
    virtual IPlayer* getTeamCaptain() const = 0;
};

#endif // ITEAM_H
