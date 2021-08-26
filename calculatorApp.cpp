// calculatorApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// User enters two numerical values and an operator

	// receives two numerical values from user
	float num1, num2;
	char calcOperator;

	std::cout << "~~ Calculator ~~\n"
		<< "Enter basic equation: ";
	std::cin >> num1 >> calcOperator >> num2;

	switch (calcOperator)
	{
	case '-': std::cout << num1 << calcOperator <<  num2 << " = " << num1 - num2; break;
	case '+': std::cout << num1 << calcOperator <<  num2 << " = " << num1 + num2; break;
	case '/': std::cout << num1 << calcOperator <<  num2 << " = " << num1 / num2; break;
	case '*': std::cout << num1 << calcOperator <<  num2 << " = " << num1 * num2; break;
	case '%':

		bool isNum1Int, isNum2Int;  
		isNum1Int = (num1 == (int)num1);
		isNum2Int = (num2 == (int)num2);

		if (isNum1Int && isNum2Int) {
			std::cout << num1 << calcOperator << num2 << " = " << (int)num1 % (int)num2;
		}
		else { 
			std::cout << "Not valid\n";
		}
		break;
	default:
		std::cout << "Error!\n";
		break;
	}
		
		system("pause>0");
}

