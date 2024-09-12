#ifndef TEAM_H
#define TEAM_H

#include "Player.h"
#include "Match.h"
#include <vector>

class Team {
private:
    std::vector<Player*> players;
    std::vector<Match*> matches;

public:
    Team();
    ~Team();
    void addPlayer(Player* player);
    void scheduleMatch(Match* match);
    void showPlayers();
    void simulateMatches();

};

#endif
