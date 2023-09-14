#pragma once
#include <iostream>
using namespace std;
class Shape
{
protected:
	string color;
	string thickness;
public:
	Shape(string color, string thickness) : color{ color }, thickness{ thickness } {};
	virtual void draw(int x, int y) = 0;
	
};

