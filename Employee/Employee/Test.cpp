#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float totSal;

	SalaryEmployee *salaryEmp = new SalaryEmployee("Anderson", 360306);
	HourlyEmployee *hourlyEmp = new HourlyEmployee("Michael", 211015);
	CommissionEmployee *commissionEmp = new CommissionEmployee("Joachim", 130714);

	cout <<"Salary employee: "<< salaryEmp->name()<<" "<< salaryEmp->staffNumber() << endl;
	cout << "Hourly employee: " << hourlyEmp->name() << " " << hourlyEmp->staffNumber() << endl;
	cout <<"Commission employee: " << commissionEmp->name() << " " << commissionEmp->staffNumber() << endl;

	cout << "Total number of employees: " << Employee::numEmployees << endl;  


	Employee *ptrEmp[3];  // Can't create it the usual way because of the abstract pure virt function

	salaryEmp->setSalary(50000);

	hourlyEmp->setHourlyRate(1000);
	hourlyEmp->setHoursWorked(30);

	commissionEmp->setBaseSalary(10000);
	commissionEmp->setRate(0.80);
	commissionEmp->setRevenue(16000.80);

	//Fill out array with object of derived class
	ptrEmp[0] = salaryEmp;
	ptrEmp[1] = hourlyEmp;
	ptrEmp[2] = commissionEmp;

	//Display salary
	cout << endl;
	cout << salaryEmp->name() << "'s monthly salary is " << ptrEmp[0]->salary() << endl;
	cout << hourlyEmp->name() << "'s monthly salary is " << ptrEmp[1]->salary() << endl;
	cout << commissionEmp->name() << "'s monthly salary is " << ptrEmp[2]->salary() << endl;
	cout << endl;

	//Get the total monthly salary to be paid

	totSal = 0;

	int i;
	for (i = 0; i<3; i++)
	{
		totSal = totSal+(ptrEmp[i]->salary());
	}
	cout << "Total Salary for All Employees is: " << totSal << endl;

	//testing destroying employees
	cout << endl;
	cout << "Firing " << ptrEmp[2]->name() << endl;
	delete ptrEmp[2];
	cout << "Employee count: " << Employee::numEmployees << endl;

	return 0;
}