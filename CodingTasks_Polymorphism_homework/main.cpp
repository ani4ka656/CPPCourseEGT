#include "Rectangle.h"
#include "Circle.h"
#include <vector>
int main() {
	Shape* rec = new Rectangle("red", 3, 4);
	Shape* cir = new Circle("blue", 6);
	vector<Shape*> shapes;
	shapes.push_back(rec);
	shapes.push_back(cir);
	for ( int i = 0; i < shapes.size(); i++)
	{
		cout << "Shape: " << i + 1 << endl;
		shapes[i]->draw();
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < shapes.size(); i++)
	{
		cout << "Shape: " << i + 1 << endl;
		shapes[i]->printArea();
		cout << endl;
	}
	shapes.clear();
	delete rec;
	delete cir;
	
	return 0;
}