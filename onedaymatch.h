#ifndef ONEDAYMATCH_H
#define ONEDAYMATCH_H

#include <IMatch.h>

class OneDayMatch : public IMatch
{
public:
    OneDayMatch();
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

#endif // ONEDAYMATCH_H
