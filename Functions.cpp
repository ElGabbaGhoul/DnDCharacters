//
// Created by Scooter on 5/18/2024.
//

#include "Functions.hpp"
#include <iostream>

int getInteger() {
    int age = 0;
    bool validNum = false;

    while (!validNum) {
        std::cout << "How old are you??" << std::endl;
        std::cout << "(You must be between the ages of 5 and 90 to play.)" << std::endl;

        std::string input;
        std::cin >> input;

        if (isNumeric(input)) {
            try {
                age = std::stoi(input);

                if (age >= 5 && age <= 90) {
                    validNum = true;
                } else {
                    std::cerr << "Error: Invalid input type." << std::endl;
                    std::cerr << "Please enter an INTEGER between 5 and 90." << std::endl;
                }
            } catch (const std::invalid_argument&) {
                std::cerr << "Error: Invalid input type." << std::endl;
                std::cerr << "Please enter an INTEGER between 5 and 90." << std::endl;
            } catch (const std::out_of_range&) {
                std::cerr << "Error: input out of range." << std::endl;
                std::cerr << "Please enter an INTEGER between 5 and 90." << std::endl;
            }
        } else {
            std::cerr << "Error: Invalid input type." << std::endl;
            std::cerr << "Please enter an INTEGER between 5 and 90." << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(50000, '\n');
    }

    return age;
}

int getInteger(int min, int max) {
    int players = 0;
    bool validNum = false;

    while (!validNum) {
        std::cout << "How many players in your party?" << std::endl;
        std::cout << "(Party sizes must be between 5 and 10.)" << std::endl;

        std::string input;
        std::cin >> input;

        if (isNumeric(input)) {
            try {
                players = std::stoi(input);

                if (players >= min && players <= max) {
                    validNum = true;
                } else {
                    std::cerr << "Error: Invalid input type." << std::endl;
                    std::cerr << "Please enter an INTEGER between " << min << " and " << max << "." << std::endl;
                }
            } catch (const std::invalid_argument&) {
                std::cerr << "Error: Invalid input type." << std::endl;
                std::cerr << "Please enter an INTEGER between " << min << " and " << max << "." << std::endl;
            } catch (const std::out_of_range&) {
                std::cerr << "Error: input out of range." << std::endl;
                std::cerr << "Please enter an INTEGER between " << min << " and " << max << "." << std::endl;
            }
        } else {
            std::cerr << "Error: Invalid input type." << std::endl;
            std::cerr << "Please enter an INTEGER between " << min << " and " << max << "." << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(50000, '\n');
    }

    return players;
}

bool isAllChars(const std::string &str) {
    for (char c : str) {
        if (!std::isalpha(c)) {
            return false;
        }
    }
    return true;
}

bool isNumeric(const std::string &str) {
size_t start = (str[0] == '-') ? 1 : 0;
    for (size_t i = start; i < str.size(); i++) {
        if (!std::isdigit(str[i])) {
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

std::string getLast() {
    std::string lastName;
    bool validLast = false;

    while (!validLast) {
        std::cout << "What is your last name?" << std::endl;
        std::cin >> lastName;

        if (!lastName.empty()) {
            if (!isAllChars(lastName)) {
                std::cin.clear();
                std::cin.ignore(50000, '\n');
                std::cerr << "Error: No special characters in your name please."<< std::endl;
                std::cerr << "Your first name should be Alphanumeric only (A-Z, a-z)." << std::endl;
            } else {
                for (char &c : lastName) {
                    c = std::tolower(static_cast<unsigned char>(c));
                }
                lastName[0] = std::toupper(static_cast<unsigned char>(lastName[0]));

                std::cout << lastName << std::endl;
                validLast = true;
            }
        }
    }

    return lastName;
}
