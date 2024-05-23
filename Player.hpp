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

class Player {
private:
    Person *person;
public:
    Player(const std::string& firstName, const std::string& lastName, int age) {
        person = new Person(firstName, lastName, age);
    }

    ~Player() {
        delete person;
    }

    virtual std::string getClassName() const = 0;
    virtual std::string getAction() const = 0;

    std::string getFirst() const {
        return person->getFirst();
    }

    std::string getLast() const {
        return person->getLast();
    }

    int getAge() const {
        return person->getAge();
    }

};

class Wizard : public Player {
public:
    Wizard(const std::string& firstName, const std::string& lastName, int age)
    : Player(firstName, lastName, age) {}

    std::string getClassName() const override {
        return "Wizard";
    }

    std::string getAction() const override {
        return "Casts Fireball";
    }
};

class Ranger : public Player {
public:
    Ranger(const std::string& firstName, const std::string& lastName, int age)
    : Player(firstName, lastName, age) {}

    std::string getClassName() const override {
        return "Ranger";
    }

    std::string getAction() const override {
        return "Shoots Arrows";
    }
};

class Rogue : public Player {
public:
    Rogue(const std::string& firstName, const std::string& lastName, int age)
    : Player(firstName, lastName, age) {}

    std::string getClassName() const override {
        return "Rogue";
    }

    std::string getAction() const override {
        return "Picks pockets";
    }
};

class Priest : public Player {
public:
    Priest(const std::string& firstName, const std::string& lastName, int age)
    : Player(firstName, lastName, age) {}

    std::string getClassName() const override {
        return "Priest";
    }

    std::string getAction() const override {
        return "Heals noobs";
    }
};



#endif //DNDCHARACTERS_PLAYER_HPP
