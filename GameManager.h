#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "IMatch.h"
#include "iplayer.h"
#include "player.h"
#include "wicketkeeperplayer.h"
#include "iteam.h"
#include "team.h"
#include "IMatch.h"
#include "onedaymatch.h"
#include "testmatch.h"
#include "icommentator.h"
#include "iumpire.h"
#include "utilities.h"

//This class needs to be implemented
class IGameManager
{
public:
    enum class MatchType{ OneDay, TestMatch, TwentyTwenty};

    virtual void startGame() = 0;
    virtual void stopGame() = 0;
    virtual void toss() = 0;
};

class GameManager : public IGameManager
{
public:
    GameManager(Utilities::MatchType type) : m_eMatchType(type)
    {
        if(m_eMatchType == Utilities::MatchType::OneDay)
        {
            m_match = new OneDayMatch();
        }
        else if(m_eMatchType == Utilities::MatchType::Test)
        {
            m_match = new TestMatch();
        }
    }
    virtual void startGame() override
    {
        initializeCommentators();
        //initialize Commentators
        initializeTeams();
        initializeUmpires();
        //get two captains and toss
        startMatch();

    }
    virtual void stopGame() override
    {
        //initializeTeams()
        //get two captains and toss
        //initialize Commentators
        //initialize Umpires
        //start match
    }
    virtual void toss() override
    {

    }

private:
    virtual void initializeCommentators()
    {
        ICommentator *comm1 = new Commentator();
        ICommentator *comm2 = new Commentator();

        m_match->addCommentator(comm1);
        m_match->addCommentator(comm2);
    }
    virtual void initializeTeams()
    {
        IPlayer * player1 = new Player("xyz");
        IPlayer * player2 = new Player("xyz2");
        IPlayer * player3 = new Player("xyz3");
        IPlayer * player4 = new Player("xyz4");
        IPlayer * player5 = new Player("xyz5");
        IPlayer * playerWc = new WicketKeeperPlayer("msd");

        ITeam *indianTeam = new Team();
        indianTeam->addPlayer(player1);
        indianTeam->addPlayer(player2);
        indianTeam->addPlayer(player3);
        indianTeam->addPlayer(player4);
        indianTeam->addPlayer(player5);
        indianTeam->addPlayer(playerWc);

        IPlayer * player11 = new Player("xyz11");
        IPlayer * player21 = new Player("xyz21");
        IPlayer * player31 = new Player("xyz31");
        IPlayer * player41 = new Player("xyz41");
        IPlayer * player51 = new Player("xyz51");
        IPlayer * playerWc2 = new WicketKeeperPlayer("gil");

        ITeam *australianTeam = new Team();
        australianTeam->addPlayer(player11);
        australianTeam->addPlayer(player21);
        australianTeam->addPlayer(player31);
        australianTeam->addPlayer(player41);
        australianTeam->addPlayer(player51);
        australianTeam->addPlayer(playerWc2);

        m_match->addTeams(indianTeam, australianTeam);
    }

    virtual void initializeUmpires()
    {
        IUmpire *umpire1 = new Umpire();
        IUmpire *umpire2 = new Umpire();
        IUmpire *umpire3 = new Umpire();

        m_match->addUmpire(umpire1);
        m_match->addUmpire(umpire2);
        m_match->addUmpire(umpire3);
    }

    virtual void startMatch()
    {
        m_match->start();
    }

    IMatch* m_match = nullptr;
    Utilities::MatchType m_eMatchType = Utilities::MatchType::OneDay;
};

#endif // GAMEMANAGER_H
