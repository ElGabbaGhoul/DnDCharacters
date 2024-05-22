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

bool isAllChars(const std::string &str) {
    for (char c : str) {
        if (!std::isalpha(c)) {
            return false;
        }
    }
    return true;
}


std::string getFirst() {
    std::string firstName;
    bool validFirst = false;

    while (!validFirst) {
        std::cout << "What is your fist name?" << std::endl;
        std::cin >> firstName;

        if (!firstName.empty()) {
            if (!isAllChars(firstName)) {
                std::cin.clear();
                std::cin.ignore(50000, '\n');
                std::cerr << "Error: No special characters in your name please."<< std::endl;
                std::cerr << "Your first name should be Alphanumeric only (A-Z, a-z)." << std::endl;
            } else {
                for (char &c : firstName) {
                    c = std::tolower(static_cast<unsigned char>(c));
                }
                firstName[0] = std::toupper(static_cast<unsigned char>(firstName[0]));

                std::cout << firstName << std::endl;
                validFirst = true;
            }
        }
    }

    return firstName;
}

