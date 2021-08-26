// factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Factorial of a number

    int num, factorial = 1;
    std::cout << "Enter whole number: ";
    std::cin >> num;
    
    for (int i = num; i > 0; i--) {
        factorial *= i;
    }

    std::cout << "\n" << num << "! = " << factorial << "\n";

    return 0;
}

