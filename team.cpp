#include "team.h"
#include"iostream"

Team::Team()
{}
Team::~Team()
{}

void Team::addPlayer(Player* player) {
    players.push_back(player);
}


void Team::scheduleMatch(Match* match) {
    matches.push_back(match);
}

void Team::showPlayers() {
    std::cout << "Team Players:" << std::endl;
    for (auto player : players) {
        player->printStats();
    }
}

void Team::simulateMatches() {
    int totalSkillLevel = 0;

    for (auto player : players) {
        totalSkillLevel += player->getSkillLevel();
    }
    int averageSkillLevel = totalSkillLevel / players.size(); // Average skill level of the team

    std::cout << "Simulating Matches:" << std::endl;
    for (auto match : matches) {
        match->simulateMatch(averageSkillLevel);
        match->displayResult();
        averageSkillLevel -= 10;
    }
}
