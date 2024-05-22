//
// Created by Scooter on 5/18/2024.
//

#ifndef DNDCHARACTERS_FUNCTIONS_HPP
#define DNDCHARACTERS_FUNCTIONS_HPP

#include <iostream>
#include "Player.hpp"

// Required functions
int getInteger();
Player* createPlayer();
void displayPlayers();

// Helper functions
bool isAllChars(const std::string& str);
std::string getFirst();
std::string getLast();
std::string getCharClass();

#endif //DNDCHARACTERS_FUNCTIONS_HPP
