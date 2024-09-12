#include "Player.h"

//  implementation players mothods
Player::Player(std::string n, std::string p, int s) : name(n), position(p), skillLevel(s)
{}

void Player::printStats() {
    std::cout << "Name: " << name << ", Position: " << position << ", Skill Level: " << skillLevel << std::endl;
}

void Player::play() {
    std::cout << name << " is playing." << std::endl;
}

//
//
Forward::Forward(std::string n, int s) : Player(n, "Forward", s) {}

void Forward::play() {
    std::cout << name << " is attacking." << std::endl;
}

//
//
Midfielder::Midfielder(std::string n, int s) : Player(n, "Midfielder", s) {}

void Midfielder::play() {
    std::cout << name << " is controlling the midfield." << std::endl;
}

//
//
Defender::Defender(std::string n, int s) : Player(n, "Defender", s) {}

void Defender::play() {
    std::cout << name << " is defending." << std::endl;
}
