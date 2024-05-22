//
// Created by Scooter on 5/18/2024.
//

#include "Functions.hpp"
#include <iostream>

int getInteger() {
    int age;
    bool validAge = false;

    while (!validAge) {
        std::cout << "How old are you? You must be between 5 and 90 to play this game." << std::endl;
        std::cin >> age;

        // type check
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(50000, '\n');
            std::cerr << "Error: Invalid input type." << std::endl;
            std::cerr << "Please enter an INTEGER between 5 and 90." << std::endl;
        } else if (age < 5 || age > 90) {
            // range check
            std::cin.clear();
            std::cin.ignore(50000, '\n');
            std::cerr << "Error: input out of range." << std::endl;
            std::cerr << "Please ensure your input is within range: 5 <= age <= 90." << std::endl;
        } else {
            // valid age
            validAge = true;
        }
    }

    return age;
}
