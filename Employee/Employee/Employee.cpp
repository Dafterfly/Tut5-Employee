#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int Employee::numEmployees = 0;

Employee::Employee()
{
}


Employee::~Employee()
{
	numEmployees--; // Number of emloyees decrease when any one is destroyed
}


SalaryEmployee::SalaryEmployee(){

	empName = "Monthly";
	employeeNumber = 0;
	numEmployees++;
	sal = 0.00;
}

SalaryEmployee::SalaryEmployee(string iempName, int inumber)
{
	empName = iempName;

	if (inumber >= 0){
		employeeNumber = inumber;
	}
	else
	{
		cout << "Invalid Staff Number input. Ensure a positive number now" << endl;
		cin >> employeeNumber;
	}

	numEmployees++;
	sal = 0.00;
}

SalaryEmployee::~SalaryEmployee(){
	numEmployees--;
}

float SalaryEmployee::setSalary(const float salaryIn){
	monthlySalary = salaryIn;
	return monthlySalary;
}

float SalaryEmployee::salary(){
	return monthlySalary;
}

string SalaryEmployee::name(){
	return empName;
}

int SalaryEmployee::staffNumber(){
	return employeeNumber;
}