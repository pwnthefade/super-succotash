// numberOfDaysProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// receives year and month from user
	int year, month;
	std::cout << "Year, month (yyyy m): ";
	std::cin >> year >> month;

	// determines if year is a leap year
	// ((year % 4 == 0) && (year % 100 != 0) || (year % 400 ==0))
		
	// prints to console number of day in specified month, according to year
	switch (month)
	{
	case 2: ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ?
		std::cout << "29 days in month\n" : std::cout <<"28 days in month\n"; break;
	case 4: 
	case 6: 
	case 9: 
	case 11: std::cout << "30 days in month\n"; break;
	case 1: 
	case 3: 
	case 5: 
	case 7: 
	case 8: 
	case 10: 
	case 12: std::cout << "31 days in month\n"; break;
	default:
		std::cout << "Invalid\n"; break;
	}


	std::cin.get();
	return 0;
}
