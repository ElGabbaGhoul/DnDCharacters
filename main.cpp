#include <iostream>
#include "Functions.hpp"

int main() {
    int party = getInteger(5,10);
    if (!party == 0) {
        Player** players = createPlayers(party);
        displayPlayers(players, party);
    } else {
        std::cerr << "Error entering party value. Please try again." << std::endl;
    }


// Ask how many players are in the game
// GetInteger to enter a value between 5 and 10
// Create dynamic array of player variables

// Forloop that calls create player and fills array with returned Player objects

// displayPlayers to list each player's full name, age, class and action

    return 0;
}
