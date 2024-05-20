//
// Created by Scooter on 5/18/2024.
//

#include "Person.hpp"

#ifndef DNDCHARACTERS_PLAYER_HPP
#define DNDCHARACTERS_PLAYER_HPP

// Player class is an abstract class that includes an instance
// of a person which should be created dynamically and then
// deleted when player goes away

// COMPOSITION

class Player : public Person {
    Person *person;

};

#endif //DNDCHARACTERS_PLAYER_HPP
