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

// SalaryEmployee functions:
SalaryEmployee::SalaryEmployee(){

	empName = "Monthly";
	employeeNumber = "0";
	numEmployees++;
	sal = 0.00;
}

SalaryEmployee::SalaryEmployee(string empNameIn, int numberIn)
{
	empName = empNameIn;

	if (numberIn >= 0){
		employeeNumber = numberIn;
	}
	else
	{
		cout << "Invalid staff number. Please try again: " << endl;
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

string SalaryEmployee::staffNumber(){
	return employeeNumber;
}

//HourlyEmployee functions
HourlyEmployee::HourlyEmployee(){
	empName = "Hourly";
	employeeNumber = "0";
	numEmployees++;
	sal = 0.00;
}

HourlyEmployee::HourlyEmployee(string empNameIn, int numberIn)
{
	empName = empNameIn;

	if (numberIn >= 0){
		employeeNumber = numberIn;
	}
	else
	{
		cout << "Invalid staff number. Please try again: ";
		cin >> employeeNumber;
	}

	numEmployees++;
	sal = 0.00;
}

HourlyEmployee::~HourlyEmployee()
{
	numEmployees--;
}

float HourlyEmployee::setHourlyRate(float ihourlySalary)
{
	hourlySalary = ihourlySalary;
	return hourlySalary;
}

int HourlyEmployee::setHoursWorked(int ihours)
{
	hoursWorked = ihours;
	return hoursWorked;
}

float HourlyEmployee::salary()
{
	sal = hourlySalary*hoursWorked;
	return sal;
}

string HourlyEmployee::name()
{
	return empName;
}

string HourlyEmployee::staffNumber()
{
	return employeeNumber;
}


// CommissionEmployee functions:
CommissionEmployee::CommissionEmployee()
{
	empName = "Commission";
	employeeNumber = "0";
	numEmployees++;
	sal = 0.00;
}

CommissionEmployee::CommissionEmployee(string NameIn, int numberIn)
{
	empName = NameIn;

	if (numberIn >= 0){
		employeeNumber = numberIn;
	}
	else
	{
		cout << "Invalid staff number. Please try again: ";
		cin >> employeeNumber;
	}

	numEmployees++;
	sal = 0.00;
}

CommissionEmployee::~CommissionEmployee(){
	numEmployees--;
}

float CommissionEmployee::setBaseSalary(float baseIn)
{
	baseSalary = baseIn;
	return baseSalary;
}

float CommissionEmployee::setRate(float irate)
{
	commRate = irate; //NB Send a decimal percentage value
	return commRate;
}

float CommissionEmployee::setRevenue(float revIn)
{
	revGenerated = revIn;
	return revGenerated;
}

float CommissionEmployee::salary()
{
	sal = baseSalary + commRate*revGenerated;
	return sal;
}

string CommissionEmployee::name()
{
	return empName;
}

string CommissionEmployee::staffNumber()
{
	return employeeNumber;
}
