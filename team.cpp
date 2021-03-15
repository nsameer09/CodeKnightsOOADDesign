#include "team.h"

Team::Team()
{

}

void Team::addPlayer(IPlayer *player)
{
    m_teamVec.push_back(player);
}

std::string Team::getTeamName() const
{
    return m_teamName;
}

int Team::getNumOfPlayers() const
{
    return m_numOfPlayers;
}

IPlayer* Team::getTeamCaptain() const
{
    return  m_captain;
}
