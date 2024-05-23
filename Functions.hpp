//
// Created by Scooter on 5/18/2024.
//

#ifndef DNDCHARACTERS_FUNCTIONS_HPP
#define DNDCHARACTERS_FUNCTIONS_HPP

#include <iostream>
#include "Player.hpp"

// Required functions
int getInteger();
int getInteger(int min, int max);
Player* createPlayer(const std::string &firstName, std::string &lastName, int &age, int playerType);
Player** createPlayers(int& count);
void displayPlayers(Player** players, int party);

// Helper functions
bool isAllChars(const std::string& str);
bool isNumeric(const std::string& str);
std::string getFirst();
std::string getLast();
std::string getCharClass();
int classSelect();


#endif //DNDCHARACTERS_FUNCTIONS_HPP
