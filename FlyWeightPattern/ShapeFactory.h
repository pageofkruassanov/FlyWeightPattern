#pragma once
#include <map>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
class ShapeFactory
{
	std::map<string, Shape*> map;
public:
	ShapeFactory(std::map<string, Shape*> map) : map{ map } {};
	Shape* getShape(string key);
};

