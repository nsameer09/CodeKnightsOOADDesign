#ifndef IMATCH_H
#define IMATCH_H

#include "iteam.h"
#include "iumpire.h"
#include "icommentator.h"
#include <vector>
#include <utility>

class IMatch
{
public:
    virtual void addTeams(ITeam* first, ITeam* second) = 0;
    virtual void addUmpire(IUmpire*) = 0;
    virtual bool isMatchFinished() const = 0;
    virtual void addCommentator(ICommentator*) = 0;
    virtual void start() = 0;
};

#endif // IMATCH_H
