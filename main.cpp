#include<iostream>
#include "Player.h"
#include "Match.h"
#include "team.h"

int main(){

Team manUnited;

Player *p1 = new Player("garnacho" , "forward",85);
Player *p2 = new Player("maino" , "midfielder" , 86);
Player *p3 = new Player("Martinez" , "defender" , 82);

manUnited.addPlayer(p1);
manUnited.addPlayer(p2);
manUnited.addPlayer(p3);

// Scheduling matches
manUnited.scheduleMatch(new LeagueMatch("Liverpool", "2024-07-30", "Anfild"));
manUnited.scheduleMatch(new FriendlyMatch("Arsenal", "2024-08-05", "Oldtrafford"));

// Display players and simulate matches
manUnited.showPlayers();
manUnited.simulateMatches();

}
