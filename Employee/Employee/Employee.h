#pragma once
#include <string>

using namespace std;

class Employee
{
protected:
	string empName = "";  
	float sal;   
	string employeeNumber = "";  

public:
	static int numEmployees;  
	Employee();
	~Employee();

	//pure virtual functions
	virtual string name() = 0;
	virtual string staffNumber() = 0;  
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
	string staffNumber();
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
		string staffNumber();
};

// derive CommissionEmployee class
class CommissionEmployee : public Employee{
private: float baseSalary;
		 float commRate;
		 float revGenerated;

public: CommissionEmployee();
		CommissionEmployee(string, int);
		~CommissionEmployee();

		
		float setBaseSalary(float);  
		float setRate(float);        
		float setRevenue(float);       

		//override defaults
		float salary();      
		string name();
		string staffNumber();
};



