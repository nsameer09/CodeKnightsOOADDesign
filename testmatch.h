#ifndef TESTMATCH_H
#define TESTMATCH_H

#include <IMatch.h>

class TestMatch : public IMatch
{
public:
    TestMatch();
    virtual void addTeams(ITeam* first, ITeam* second) override;
    virtual void addUmpire(IUmpire*) override;
    virtual bool isMatchFinished() const override;
    virtual void addCommentator(ICommentator*) override;
    virtual void start() override;

private:
    std::pair<ITeam*, ITeam*> m_teams;
    std::vector<ICommentator*> m_commentators;
    std::vector<IUmpire*> m_umpires;
};

#endif // TESTMATCH_H
