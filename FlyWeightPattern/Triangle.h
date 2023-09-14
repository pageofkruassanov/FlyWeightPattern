#pragma once
#include "Shape.h"
class Triangle : public Shape
{
	int a;
	int b;
	int c;
public:
	Triangle(int a, int b, int c, string color, string thickness) : Shape{ color, thickness }, a{ a }, b{ b }, c{ c } {};
	void draw(int x, int y) override;
};

