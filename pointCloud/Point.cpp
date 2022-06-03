#include "Point.h"

float Point::randFloat(float a, float b)
{
	return ((b - a) * ((float)rand() / RAND_MAX)) + a;
}

Point::Point()
{
	x = randFloat(0.0, 99.99);
	y = randFloat(0.0, 99.99);
	z = randFloat(0.0, 99.99);
}

std::vector<float> Point::returnCoordinates()
{
	return std::vector<float> {x, y, z};
}
