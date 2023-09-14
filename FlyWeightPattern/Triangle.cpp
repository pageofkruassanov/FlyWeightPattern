#include "Triangle.h"

void Triangle::draw(int x, int y)
{
	cout << "------Triangle------\n";
	cout << "Coord x: " << x << "\nCoord y: " << y;
	cout << "\nA: " << a << "n\B: " << b << "\nC: " << c << "\nColor: " << color << "\nThickness: " << thickness;
}
