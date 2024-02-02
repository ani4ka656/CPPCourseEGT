#include "Department.h"

Department::Department(string departmentName_/*, *vector<Employee*> employees_, int numEmployees_*/ ) : departmentName(departmentName_)
/*  employees(employees_),*/
{
    this->numEmployees = 0;
}Department::Department(string departmentName_, vector<Employee*> employees_, int numEmployees_ ) : departmentName(departmentName_), employees(employees_), numEmployees(numEmployees_)
{
}

void Department::setName(string departmentName_)
{
    this->departmentName = departmentName_;
}

void Department::setEmployees(vector<Employee*> employees_)
{
    this->employees = employees_;
}

void Department::setNumEmployees(int numEmployees_)
{
    this->numEmployees = numEmployees_;
}

void Department::addEmployee(Employee* employee_)
{
    this->employees.push_back(employee_);
    this->numEmployees++;
}

string Department::getDepartmentName() const
{
    return this->departmentName;
}

vector<Employee*> Department::getEmployees() const
{
    return  this->employees;
}

int Department::getNumEmployees() const
{
    return this->numEmployees;
}

void Department::displayEmployees() const
{

    cout << "The name of the department is: " << getDepartmentName() << endl;
    cout << "The employee print of the department is here : " << endl;
    for (int i = 0; i < employees.size(); i++)
    {
        employees[i]->display();
        cout << "End of employee: " << i << endl;
    }
     cout << "The number of employees in the department is: " << getNumEmployees() << endl;
    cout << "--------------------End of department-----------------------" << endl << endl;
}
