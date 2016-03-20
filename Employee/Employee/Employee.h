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

// derive SalaryEmployee class
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

// derive HouryEmployee class
class HourlyEmployee :public Employee{
private: float hourlySalary;
		 int hoursWorked;

public: HourlyEmployee();
		HourlyEmployee(string, int);
		~HourlyEmployee();

		
		float setHourlyRate(float);  
		int setHoursWorked(int);   

		//override defaults
		float salary();       
		string name();
		int staffNumber();
};

