#include "onedaymatch.h"

OneDayMatch::OneDayMatch()
{

}

void OneDayMatch::addTeams(ITeam *first, ITeam *second)
{
    m_teams.first = first;
    m_teams.second = second;
}

void OneDayMatch::addUmpire(IUmpire *ump)
{
    std::cout << "\nAdding the umpire...\n";
    m_umpires.push_back(ump);
}

bool OneDayMatch::isMatchFinished() const
{
    return false;
}

void OneDayMatch::addCommentator(ICommentator *comm)
{
    std::cout << "\nAdding the commentator...\n";
    m_commentators.push_back(comm);
}

void OneDayMatch::start()
{
    std::cout << "\nStarting the match...\n";
}
