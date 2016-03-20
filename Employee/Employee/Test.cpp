#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float totSal;

	SalaryEmployee *salaryEmp = new SalaryEmployee("Anderson", 360306);
	HourlyEmployee *houryEmp = new HourlyEmployee("Michael", 211015);
	CommissionEmployee *commissionEmp = new CommissionEmployee("Joachim", 130714);

	cout <<"Salary employye: "<< salaryEmp->name()<<" "<< salaryEmp->staffNumber() << endl;
	cout << "Hourly employye: " << houryEmp->name() << " " << houryEmp->staffNumber() << endl;
	cout <<"Commission employye: " << commissionEmp->name() << " " << commissionEmp->staffNumber() << endl;

	cout << "Total number of Employees: " << Employee::numEmployees << endl;  

	return 0;
}