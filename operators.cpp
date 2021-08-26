// tutorial5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
/**
	// +, -, /, %
	cout << "5 + 2 = " << 5 + 2 << endl;
	cout << "5 - 2 = " << 5 - 2 << endl;
	cout << "5 / 2 = " << 5 / 2 << endl;
	cout << "5 % 2 = " << 5 % 2 << endl;
	

	// ++, --
	int counter = 7;
	cout << "\n\ncounter = " << counter << endl;
	cout << "counter++ = " << counter++ << endl;
	counter = 7;
	cout << "++counter = " << ++counter << endl;
	counter = 7;
	cout << "counter-- = " << counter-- << endl;
	counter = 7;
	cout << "--counter = " << --counter << endl;

	// <, >, <=, >=, ==, !=
	int a = 5, b = 5;
	cout << "a = " << a << ", = " << b << endl << endl;
	cout << "a < b = " << (a < b) << endl;
	cout << "a > b = " << (a > b) << endl;
	cout << "a <= b = " << (a <= b) << endl;
	cout << "a >= b = " << (a >= b) << endl;
	cout << "a == b = " << (a == b) << endl;
	cout << "a != b = " << (a != b) << endl;

	// &&, ||, !
	int a = 5, b = 8;
	cout << !(a == 5 && b == 5) << endl;
	cout << (a == 5 && b == 5+3) << endl;
	cout << (a == 5 || b == 5) << endl << endl;


	// =, +=, -=, *=, /=; %=
	int x = 20;
	cout << "x = " << x << endl;
	x += 5;
	cout << "x += 5: " << x << endl;
	x -= 5;
	cout << "x -= 5: " << x << endl;
	x *= 5;
	cout << "x *= 5: " << x << endl;
	x /= 5;
	cout << "x /= 5: " << x << endl;
	x %= 5;
	cout << "x %= 5: " << x << endl;
*/
	// ~~~~~Extra Practice ~~~~~~

	// What is going to be the result of the following lines?

	int a = 5, b = 4;
	cout << a + (b++) << endl; // 9
	cout << (--a) + b << endl; // 8 -> 9

	cout << !(true && false) << endl; // true
	cout << (true && false || true) << endl; // true

	int x = 7;
	cout << (++x <= 9 && x + 2 >= 10) << endl; // true
	
	int y = 3;
	cout << (y == y++) << endl; // true

	float z = 8;
	z += 2;
	cout << z << endl; // 10
	z /= 2;
	cout << z << endl; // 5

	system("pause>0");
	//return 0;
}

