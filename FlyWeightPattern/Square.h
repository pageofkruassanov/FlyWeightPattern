#pragma once
#include "Shape.h"
class Square : public Shape
{
	int a;
	int b;
public:
	Square(int a, int b, string color, string thickness) : Shape{ color, thickness }, a{ a }, b{ b } {};
	void draw(int x, int y) override;
};

