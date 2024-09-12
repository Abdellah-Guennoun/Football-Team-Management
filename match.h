#ifndef MATCH_H
#define MATCH_H

#include <string>
#include <iostream>

class Match {
protected:
    std::string opponent;
    std::string date;
    std::string venue;
    std::string type;
    std::string result;

public:
    Match(std::string o, std::string d, std::string v, std::string t);
    virtual void simulateMatch(int teamSkillLevel);
    virtual void displayResult();
    std::string getOpponent() { return opponent; }
    std::string getDate() { return date; }
    std::string getVenue() { return venue; }
    std::string getType() { return type; }
};

class LeagueMatch : public Match {
public:
    LeagueMatch(std::string o, std::string d, std::string v);
    void simulateMatch(int teamSkillLevel) override;
};

class FriendlyMatch : public Match {
public:
    FriendlyMatch(std::string o, std::string d, std::string v);
    void simulateMatch(int teamSkillLevel) override;
};

#endif
