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

	//pure virtual functions
	virtual string name() = 0;
	virtual int staffNumber() = 0;  
	virtual float salary() = 0;    
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
