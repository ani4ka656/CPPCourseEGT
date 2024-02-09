#include <iostream>
#include <vector>
#include "pugixml.hpp"
#include "Employee.h"
using namespace std;
using namespace pugi;//has its own namespace
vector<Employee> fromXMLToEmployee(const char* fileName) {
	xml_document doc;//connection to xml file
	vector<Employee> employees;
	if (!doc.load_file(fileName)) {
		cout<< "cannot oprn file";
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
int main() {
	/*for homework add class Employee so we use the data from xml to create objects and print them*/
	//DOMASHNO:
	// da se suzdadat 3 obekta ot klasa Employees i da se izkarvat dannite bez cout, a obektite da vlqzat vuv vektor;
	//getteri, setteri, konstruktori i t.n. Prosto dannite da se izkarat bez cout;
	//da se vkara edin klas (model), koito sluji za informaciqta;
	//kodat ot main-a da vleze v nqkakva funkciq;
	//cheteneto na xml se sluchva cher funkcii, zashtoto ne e osnovnata chast ot koda;
	//funkciqta moje da bude v drug header file, no bez klas, prosto funkciq; moje da bude i nad int main();
	//funkciqta trqbva da vurne vektora;
	//promenliva ot tip string - FileName;
													//DOMASHNO 2:
	//da ima poveche info za vsqko employee : <Workstation Building="2" Floor="3" Desc="5" />, kudeto:
	//Workstation da e v kompoziciq, a building da e klas.
	vector<Employee> employees;
	
	employees = fromXMLToEmployee("employees.xml");
	for (int i = 0; i < employees.size(); i++)
		employees[i].print();
	cout << "Hello World!";
	return 0;
}