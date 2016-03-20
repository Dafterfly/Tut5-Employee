#pragma once
class Employee
{
protected:

	string name;  
	float salary;   
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

