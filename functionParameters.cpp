// functionParameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::string;
using std::cin;
using std::endl;


void introduceMe(string name, string city, int age = 0) {
    cout << "My name is " << name << endl;
    cout << "I live in " << city << endl;
    if (age != 0)
        cout << "I'm " << age << " years old" << endl;
    cout << endl;
}

int main()
{
    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;
    cout << endl;

    introduceMe(name, city, age);

    return 0;
}
