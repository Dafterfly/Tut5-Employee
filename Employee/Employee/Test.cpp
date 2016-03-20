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


	Employee *ptrEmp[3];  // Can't create it the usual way because of the abstract pure virt function

	salaryEmp->setSalary(50000);

	houryEmp->setHourlyRate(1000);
	houryEmp->setHoursWorked(30);

	commissionEmp->setBaseSalary(10000);
	commissionEmp->setRate(0.80);
	commissionEmp->setRevenue(16000.80);

	//Fill out array with object of derived class
	ptrEmp[0] = salaryEmp;
	ptrEmp[1] = houryEmp;
	ptrEmp[2] = commissionEmp;

	//Display salary
	cout << endl;
	cout << salaryEmp->name() << "'s monthly salary is " << ptrEmp[0]->salary() << endl;
	cout << houryEmp->name() << "'s monthly salary is " << ptrEmp[1]->salary() << endl;
	cout << commissionEmp->name() << "'s monthly salary is " << ptrEmp[2]->salary() << endl;
	cout << endl;

	//Get the total monthly salary to be paid

	totalSalary = 0;

	int i;
	for (i = 0; i<3; i++)
	{
		ptrEmp[i]->salary()
	}
	cout << "Total Salary for All Employees is: " << totalSalary << endl;

	//testing destroying employees

	cout << endl;
	cout << "Firing " << ptrEmp[2]->name() << endl;
	delete ptrEmp[2];
	cout << "Employee count: " << Employee::numEmployees << endl;


	return 0;
}