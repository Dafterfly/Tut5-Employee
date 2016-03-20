#pragma once
class Employee
{
protected:

	string empName;  
	float sal;   
	int employeeNumber;  

public:
	static int numEmployees;  
	Employee();
	~Employee();

	//Pure Virtual Functions for Abstract Class
	virtual string name() = 0;
	virtual int staffNumber() = 0;  //Returns staff number of employee --POSITIVE INTEGER
	virtual float salary() = 0;    //Returns amount of money PAID AT MONTH END
};

class SalaryEmployee : public Employee{
private: float monthlySalary;
public:
	SalaryEmployee();
	SalaryEmployee(string, int);
	~SalaryEmployee();

	float setSalary(const float);  

	//overide defaults
	float salary();    
	string name();
	int staffNumber();
};
