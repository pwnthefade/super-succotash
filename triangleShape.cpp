// triangleShape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Triangle Shape
    
    int length;
    char symbol;

    cout << "~~~~~ Isosceles Triangle Shape ~~~~~\n";
    cout << "Equal sides: ";
    cin >> length;
    cout << "Symbol: ";
    cin >> symbol;

    // draws isosceles triangle shape using given symbol
    for (int i = 0; i <= length; i++)
    {
        cout << endl;
        
        for (int j = 0; j <= i; j++)
            cout << std::setw(3) << symbol;
    }

    cin.get();
    return 0;
    }
