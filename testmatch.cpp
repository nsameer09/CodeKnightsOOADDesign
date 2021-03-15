#include "testmatch.h"

TestMatch::TestMatch()
{

}

void TestMatch::addTeams(ITeam *first, ITeam *second)
{
    m_teams.first = first;
    m_teams.second = second;
}

void TestMatch::addUmpire(IUmpire *ump)
{
    std::cout << "\nAdding the umpire...\n";
    m_umpires.push_back(ump);
}

bool TestMatch::isMatchFinished() const
{
    return false;
}

void TestMatch::addCommentator(ICommentator *comm)
{
    std::cout << "\nAdding the commentator...\n";
    m_commentators.push_back(comm);
}

void TestMatch::start()
{
    std::cout << "\nStarting the match...\n";
}
