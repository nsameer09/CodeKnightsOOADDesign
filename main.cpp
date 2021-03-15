#include <iostream>
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
#include "GameManager.h"
#include "utilities.h"

int main()
{
    std::cout << "\nHello Object oriented design...\n";

    GameManager* game = new GameManager(Utilities::MatchType::OneDay);
    game->startGame();
    return 0;
}

