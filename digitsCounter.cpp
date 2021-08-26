// digitsCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

	// Count digits of a number
	
	// receives whole number from user
	int num;
	std::cout << "Enter whole number: ";
	std::cin >> num;

	/*
	if (num == 0)
		std::cout << "You have entered 0.\n";
	else {
		int counter = 0;
		while (num > 0)
			num = num / 10;
			counter++;
	}
	*/
	std::string numToString = std::to_string(num);
	int numLength = numToString.size();

	std::cout << "There are "<< numLength << " digits in number";

	return 0;
}
