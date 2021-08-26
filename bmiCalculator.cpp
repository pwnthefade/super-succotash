// bmiCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// BMI Calculator
	// weight(kg) / (height(m) * height(m))
	// underweight ... bmi<18.5
	// normal weight ... bmi>18.5 & bmi<25
	// overweight ... bmi>25

	// receives weight and height from user
	float weight, height;
	std::cout << "Enter weight (in kg): ";
	std::cin >> weight;
	std::cout << "\nEnter height (in m): ";
	std::cin >> height;

	// calculates BMI 
	float bmi = weight / (height * height);

	// prints classification and BMI to console
	if (bmi > 25)
		std::cout << "\nOverweight";
	else if (bmi < 18.5)
		std::cout << "\nUnderweight";
	else
		std::cout << "\nNormal weight";

	std::cout << ", BMI = " << bmi;

	system("pause>0");
}

