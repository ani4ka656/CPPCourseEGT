
#include "Employee.h"
#include "Department.h"

int main()
{
    Employee e1("e1", "id-1", "pos1");
    Employee e2("e2", "id-2", "pos2");
    Employee e3("e3", "id-3", "pos3");
    vector<Employee*> employees;
    employees.push_back(&e1);
    employees.push_back(&e2);
    employees.push_back(&e3);
    Department dep2("dep2", employees, employees.size());
    dep2.displayEmployees();
    Department dep1("dep1");
   /* dep1.addEmployee(&e1);
    dep1.displayEmployees();*/
    for (int i = 0; i < employees.size(); i++)
    {
        dep1.addEmployee(employees[i]);
    }
   /* dep1.addEmployee(&e3);
    dep1.displayEmployees();
    dep1.addEmployee(&e2);
    dep1.displayEmployees();*/

    return 0;
}
