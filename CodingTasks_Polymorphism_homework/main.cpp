#include "Rectangle.h"
#include "Circle.h"
#include <vector>
void printArea(Shape* shape){
	cout << "Area of the shape is: " << shape->area() << endl;
}
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
		printArea(shapes[i]);
	}
	shapes.clear();
	delete rec;
	delete cir;
	
	return 0;
}