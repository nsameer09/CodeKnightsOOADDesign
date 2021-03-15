#ifndef ICOMMENTATOR_H
#define ICOMMENTATOR_H

#include <iostream>

class ICommentator
{
public:
    virtual void makeComments() = 0;
};


class Commentator : public ICommentator
{
public:
    virtual void makeComments() override
    {
        std::cout << "\nMaking comments...\n";
    }
};

#endif // ICOMMENTATOR_H
