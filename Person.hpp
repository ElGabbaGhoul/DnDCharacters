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
    int age;
public:
    // Constructors
    Person() : firstName(""), lastName(""), age(0){};
    Person(const std::string& firstName, const std::string& lastName, int age)\
    : firstName(firstName), lastName(lastName), age(age) {};

    // Deconstructor
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
    void setFirst(const std::string& setFirst){
        this->firstName = setFirst;
    }
    void setLast(const std::string& setLast){
        this->lastName = setLast;
    };
    void setAge(int setAge){
        this->age = setAge;
    }

};


#endif //DNDCHARACTERS_PERSON_HPP
