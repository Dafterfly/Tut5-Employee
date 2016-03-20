#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int Employee::numberOfEmployees = 0;

Employee::Employee()
{
}


Employee::~Employee()
{
	numberOfEmployees--; // Number of emloyees decrease when any one is destroyed
}


