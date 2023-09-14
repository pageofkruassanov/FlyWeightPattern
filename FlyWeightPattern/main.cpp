#include <iostream>
#include <map>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "ShapeFactory.h"

int main()
{
    map<string, Shape*> map;
    map["Square"] = new Square(10, 10, "Black", "0.5");
    map["Triangle"] = new Triangle(7, 7, 7, "White", "0.9");
    map["Circle"] = new Circle(10, "Yellow", "0.7");
    ShapeFactory shapesFactory(map);
    Shape* square = shapesFactory.getShape("Square");
    square->draw(25, 25);
    Shape* square2 = shapesFactory.getShape("Square");
    cout << endl;
    square->draw(50, 50);

    cout << endl << square << endl;
    cout << square2 << endl;


    
}