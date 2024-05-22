//
// Created by Scooter on 5/18/2024.
//

#ifndef DNDCHARACTERS_PERSON_HPP
#define DNDCHARACTERS_PERSON_HPP

#include <iostream>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age = 0;
public:
    // Constructors
    Person()  = default;
    Person(const std::string& firstName, const std::string& lastName, int age)\
    : firstName(firstName), lastName(lastName), age(age) {}

    // Destructor
    ~Person() {};

    // Getters
    std::string getFirst() const {
        return firstName;
    }
    std::string getLast() const {
        return lastName;
    }
    int getAge() const {
        return age;
    }

    // Setters
    void setFirst(const std::string& setFirst) {
        firstName = setFirst;
    }
    void setLast(const std::string& setLast) {
        this->lastName = setLast;
    };
    void setAge(int setAge) {
        this->age = setAge;
    }

};


#endif //DNDCHARACTERS_PERSON_HPP
