// DoWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Do While Loop
    // User gets three attempts to enter correct PIN before
    // receiving an error message that will terminate program

    int userPin = 1470, enteredPin, attemptCount = 0;
    bool unlock = false;
    
    // matches entered pin against user pin and displays console message
    // if no match, up to three incorrect attempts
    do {
        std::cout << "Enter PIN: ";
        std::cin >> enteredPin;
        std::cout << "\n";

        if (userPin != enteredPin){
            ++attemptCount;
            std::cout << "Incorrect PIN. Attempt " << attemptCount << " of 3.\n\n";
        }
    } while ((userPin != enteredPin) && attemptCount < 3);

    if (attemptCount < 3)
        std::cout << "Success!\n";
    else
        std::cout << "Locked!\n";

    std::cin.get();
    return 0;
}

