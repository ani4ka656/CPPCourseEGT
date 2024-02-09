#include <iostream>
#include <vector>
#include "pugixml.hpp"
#include "Employee.h"
#include "EmployeeWithWorkStation.h"
#include "Workstation.h"
using namespace pugi;//has its own namespace
vector<Employee> fromXMLToEmployee(const char* fileName) {
	xml_document doc;//connection to xml file
	vector<Employee> employees;
	if (!doc.load_file(fileName)) {
		cout<< "cannot open file";
	}
	else {
		xml_node empls = doc.child("EmployeesData").child("Employees");
		int counter = 0;
		for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
		{
			int i = 1;
			string name, type, age;
			for (xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait) //we need attribute xml itterator
			{
				if (i == 1)
					name = ait->value();
				if (i == 2)
					type = ait->value();
				if (i == 3)
					age = ait->value();
				i++;
			//employees[i].push_back;
			}
			employees.push_back(Employee(name, type, age));
			counter++;
		}
		return employees;
	}
	
	
}

vector<EmployeeWithWorkstation> fromXMLToEmployeeWithWorkstation(const char* fileName) {
	xml_document doc;//connection to xml file
	vector<EmployeeWithWorkstation> employees;
	if (!doc.load_file(fileName)) {
		cout << "cannot open file";
	}
	else {
		xml_node empls = doc.child("EmployeesData").child("Employees");
		int counter = 0;
		for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
		{
			int i = 1;
			string name, type, age, building, floor, desc;
			for (xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait) //we need attribute xml itterator
			{
				if (i == 1)
					name = ait->value();
				if (i == 2)
					type = ait->value();
				if (i == 3)
					age = ait->value();
				i++;
				//employees[i].push_back;
			}
			building = it->first_child().attribute("Building").value();
			floor = it->first_child().attribute("Floor").value();
			desc = it->first_child().attribute("Desc").value();

			
			employees.push_back(EmployeeWithWorkstation (name, type, age, building, floor, desc));
		}
	}
	return employees;
}

int main() {
	/*for homework add class Employee so we use the data from xml to create objects and print them*/
	//DOMASHNO:
	/*1. Към примера от вчера добавете необходимият клас с подходящите полета и методи 
	за създаване на Employee модел.Кодът от main да се организира в метод който приема име / път
	към файла и връща вектор от Employee обектите.
	2. Създайте нов .xml файл (ръчно) с посочената по долу структура.
	Напишете програма, която чете информацията и я записва във вектор от обекти. 
	Реализирайте подходящите класове модели и релациите между тях.

	Съдържание на employeesdata.xml:

	<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
	<EmployeesData FormatVersion="1">
		 <Employees>
			  <Employee Name="John" Type="Part-Time" Age="23">
				   <Workstation Building="2" Floor="3" Desc="5" />
			 </Employee>
			 <Employee Name="Sean" Type="Full-Time" Age="34">
				  <Workstation Building="2" Floor="3" Desc="6" />
			  </Employee>
			  <Employee Name="Sarah" Type="Part-Time" Age="55">
				   <Workstation Building="3" Floor="1" Desc="1" />
			  </Employee>
		 </Employees>
	</EmployeesData>*/
	vector<Employee> employees;
	
	employees = fromXMLToEmployee("employees.xml");
	for (int i = 0; i < employees.size(); i++)
		employees[i].print();
	cout << endl << "------------- end employees only -------------\n\n" << endl;
	vector<EmployeeWithWorkstation> employeesWithWorkStation;

	employeesWithWorkStation = fromXMLToEmployeeWithWorkstation("employeesAndWorkstation.xml");
	for (int i = 0; i < employeesWithWorkStation.size(); i++)
		employeesWithWorkStation[i].print();
	cout << "Hello World!";
	return 0;
}