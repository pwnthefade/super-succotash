// multiplicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    //Multiplication Table
    // 1x1 to 1x10 ... 10x10 
    
    cout << "~~~~~ Multiplication Table ~~~~~";
    for (int i = 1; i < 11; i++)
    {
        cout << endl;

        for (int j = 1; j < 11; j++)
            cout << i << "x" << j << "= " << (i * j) << endl;
    }


    std::cin.get();
    return 0;
}

