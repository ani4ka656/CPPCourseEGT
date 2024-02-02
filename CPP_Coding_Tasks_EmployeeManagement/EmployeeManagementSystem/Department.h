#pragma once
#include <vector>
#include "Employee.h"
class Department
{
private:
	string departmentName;
	vector<Employee*> employees;
	int numEmployees;
public:
	Department(string/*, vector<Employee*>, int*/ );
	Department(string, vector<Employee*>, int );
	void setName(string);
	void setEmployees(vector<Employee*>);
	void setNumEmployees(int);
	void addEmployee(Employee*);
	string getDepartmentName() const;
	vector<Employee*> getEmployees() const;
	int getNumEmployees() const;
	void displayEmployees() const;
};

