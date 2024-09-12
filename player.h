#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
protected:
    std::string name;
    std::string position;
    int skillLevel;

public:
    Player(std::string n, std::string p, int s);
    virtual void printStats();
    virtual void play();
    std::string getName() { return name; }
    std::string getPosition() { return position; }
    int getSkillLevel() { return skillLevel; }
};

// Derived Classes
class Forward : public Player {
public:
    Forward(std::string n, int s);
    void play() override;
};

class Midfielder : public Player {
public:
    Midfielder(std::string n, int s);
    void play() override;
};

class Defender : public Player {
public:
    Defender(std::string n, int s);
    void play() override;
};

#endif
