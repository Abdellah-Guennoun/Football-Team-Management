#include "Match.h"
#include <cstdlib>  // for rand()
#include <ctime>    // for random by time

Match::Match(std::string o, std::string d, std::string v, std::string t) : opponent(o), date(d), venue(v), type(t)
{}

int reandomnumber (){
    srand(time(nullptr));//time(nullptr) : returns the current time in seconds since January 1, 1970
    int x =rand() ;
    return (x%100) + 1;
}
void Match::simulateMatch(int teamSkillLevel) {
    int opponentSkill = reandomnumber();  // Random skill level for opponent (0-100)

    // Simple win/draw/loss logic
    if (teamSkillLevel > opponentSkill) {
        result = "Win";
    } else if (teamSkillLevel < opponentSkill) {
        result = "Loss";
    } else {
        result = "Draw";
    }
}

void Match::displayResult() {
    std::cout << "Match against " << opponent << " on " << date << " at " << venue << " ended in a " << result << std::endl;
}

//
//
LeagueMatch::LeagueMatch(std::string o, std::string d, std::string v) : Match(o, d, v, "League Match") {}

void LeagueMatch::simulateMatch(int teamSkillLevel) {
    Match::simulateMatch(teamSkillLevel);  // Reuse the base class logic
}

//
//
FriendlyMatch::FriendlyMatch(std::string o, std::string d, std::string v) : Match(o, d, v, "Friendly Match") {}

void FriendlyMatch::simulateMatch(int teamSkillLevel) {
    Match::simulateMatch(teamSkillLevel);  // Reuse the base class logic
}
