/*
	Program: Pay Stub
	Purpose: To calculate employee gross wages, subtracting taxes,
			union dues, and additional health insurance
			costs (if applicable)
*/

#include <iostream>
#include <istream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	const float hourlyRate = 16.78;
	float hoursWorked;
	float overtimeHours = 0, overtimePay = 0;
	float grossPay, ssTaxTotal, fedTaxTotal, stateTaxTotal;
	const int unionDues = 10;
	int healthInsurance = 0;
	int dependents;
	float netPay;
	
	// Magic formula -- finance calculations
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	// receives employee's hours worked and number of dependents
	cout << "Enter total numbers of hours worked this week: ";
	cin >> hoursWorked;
	cout << endl;
	
	cout << "Enter total number of dependents: ";
	cin >> dependents;
	cout << endl;
	
	// calculates overtime hours and overtime pay
	if (hoursWorked > 40) {
		overtimeHours = hoursWorked - 40;
		overtimePay = overtimeHours * (hourlyRate * 1.5);
	}
	
	// calculates gross pay, including overtime pay
	grossPay = (hourlyRate * hoursWorked) + overtimePay;
	
	// calculates employee deductions
	ssTaxTotal = grossPay * 0.06;
	fedTaxTotal = grossPay * 0.14;
	stateTaxTotal = grossPay * 0.05;
	
	// calculates employees additional health insurance costs
	if (dependents >= 3) {
		healthInsurance = 35;
	}
	
	// calculates employee net take-home pay
	netPay = grossPay - (ssTaxTotal + fedTaxTotal + stateTaxTotal + unionDues + healthInsurance);
	
	// prints employees pay stub
	cout << "\n\n";
	cout << "~~~~~~~~~~ Employee Pay Stub ~~~~~~~~~~\n" << endl;
    cout << "Total Hours: \t\t" << hoursWorked << endl;
    cout << "Overtime Hours: \t" << overtimeHours << endl;
    cout << "Hourly Pay Rate: \t$" << hourlyRate << endl;
    cout << "Regular Pay: \t\t$" << (hourlyRate * hoursWorked) << endl;
    cout << "Overtime Pay: \t\t$" << overtimePay << endl;
    cout << "Soc. Sec. Tax: \t\t$" << ssTaxTotal << endl;
	cout << "Fed. Tax: \t\t$" << fedTaxTotal << endl;
	cout << "State Tax: \t\t$" << stateTaxTotal << endl;
	cout << "Health Insurance: \t$" << healthInsurance << endl;
	cout << "Union Dues: \t\t$" << unionDues << endl;
	cout << "Gross Pay: \t\t$" << grossPay << endl;
	cout << "Net Pay: \t\t$" << netPay << endl;
	
	return 0;
}


