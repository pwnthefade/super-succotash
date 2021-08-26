// rectangleShape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Draw a rectangle
    // Recieves rectangle dimensions from user and prints
    // shape to console using given character

    int height, width;
    char symbol;

    cout << "~~~~~ Draw a Rectangle ~~~~~" << endl;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    cout << "Enter symbol: ";
    cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        cout << endl;

        for (int j = 0; j < width; j++)
            cout << std::setw(3)<<symbol;
    }
    cout << endl;

    cin.get();
    return 0;
}

