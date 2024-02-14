#include <iostream>
#include <vector>
#include <fstream>
#include <exception>
#include "json.h"
#include "Employee.h"
#include "EmployeeWithWorkStation.h"
#include "Workstation.h"
using namespace std;

using json = nlohmann::json;
vector<Employee> fromJSONToEmployee() {
	
	vector<Employee> empls;
	std::ifstream file("Employees.json");
	if (!file.is_open()) {
		cout << " Unable to open file !" << "Employees.json" << endl;

	}
	json Doc = json::parse(file);

	auto employees = Doc["Employees"];
	for (const auto& employee : employees) {
		//
		string name = employee["Name"];
		string type = employee["Type"];
		string age = employee["Age"];
		empls.push_back(Employee (name, type, age));
		/*cout << name << endl;
		cout << type << endl;
		cout << age << endl;*/
	}
	file.close();
	return empls;

}

vector<EmployeeWithWorkstation> fromJSONToEmployeeWithWorkstation() {
	std::ifstream file("EmployeesWithWorkstation.json");
	if (!file.is_open()) {
		cerr << " Unable to open file !" << "EmployeesWithWorkstation.json" << endl;

	}
	vector<EmployeeWithWorkstation> empls;
	json Doc = json::parse(file);

	auto employees = Doc["Employees"];
	for (const auto& employee : employees) {
		//
		string name = employee["Name"];
		string type = employee["Type"];
		string age = employee["Age"];
		/*cout << name << endl;
		cout << type << endl;
		cout << age << endl;*/
		cout << employee["Workstation"];
		auto workstation = employee["Workstation"];
		string building = workstation["Building"];
		string desc = workstation["Desc"];
		string floori = workstation["Floor"];
		cout << employee["Name"] << endl;
		cout << workstation["Desc"] << endl;
		cout << workstation["Desc"] << endl;
		empls.push_back(EmployeeWithWorkstation(name, type, age, building, floori, desc));
	}
	return empls;
}


int main() {
	
	vector<Employee> employees;

	employees = fromJSONToEmployee();
	for (int i = 0; i < employees.size(); i++)
		employees[i].print();
	cout << endl << "------------- end employees only -------------\n\n" << endl;


	vector<EmployeeWithWorkstation> employeesWithWorkStation;
	
	employeesWithWorkStation = fromJSONToEmployeeWithWorkstation();
	for (int i = 0; i < employeesWithWorkStation.size(); i++)
		employeesWithWorkStation[i].print();
	cout << "Hello World!";
	return 0;
}