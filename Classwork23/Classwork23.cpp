// Classwork23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "validateID.h"
int main()
{

    std::string ID;
    std::cout << "Please input your ID in the format of 2 Alphanumeric Charachters and 4 Numeric Didgits, with no spaces.\n";
    std::cin >> ID;

    bool check = validateID::validateID(ID);

    if (check == 1) {
        std::cout << "ID is valid";
    }
    else {
        std::cout << "ID is not valid";
    }

    return 0;
}

