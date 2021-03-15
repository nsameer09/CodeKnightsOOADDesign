#ifndef TEAM_H
#define TEAM_H

#include "iteam.h"
#include <vector>

class Team : public ITeam
{
public:
    Team();

public:
    virtual void addPlayer(IPlayer*) override;
    virtual std::string getTeamName() const override;
    virtual int getNumOfPlayers() const override;
    virtual IPlayer* getTeamCaptain() const override;

private:
    std::vector<IPlayer*> m_teamVec;
    int m_numOfPlayers = 0;
    IPlayer* m_captain;
    std::string m_teamName;
};

#endif // TEAM_H
