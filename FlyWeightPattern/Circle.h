#pragma once
#include "Shape.h"
class Circle : public Shape
{
	double radius;
public:
	Circle(double radius, string color, string thickness) : Shape{ color, thickness }, radius{ radius } {};
	void draw(int x, int y) override;
};

