// whileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Write out all of the numbers between 100 and 500 that
	// are divisible by 3 and 5

	// traverses through numbers from 100 to 500 and prints values
	// that are divisible by 3 and 5
	int num = 100;
	std::cout << "These numbers are divisible by 3 and 5:\n";
	while (num < 501) {
		if (num % 3 == 0 && num % 5 == 0)
			std::cout << num << " ";
	num++;
	}

	std::cin.get();
	return 0;
}
