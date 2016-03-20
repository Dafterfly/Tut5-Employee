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


