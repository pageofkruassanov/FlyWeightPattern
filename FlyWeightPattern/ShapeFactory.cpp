#include "ShapeFactory.h"

Shape* ShapeFactory::getShape(string key)
{
	if (map[key] != nullptr)
		return map[key];
	else
		return nullptr;
}
