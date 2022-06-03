#pragma once
#include <iostream>
#include <vector>
class Point
{
	float x;
	float y;
	float z;

	float randFloat(float a, float b);

public:
	Point();
	std::vector<float> returnCoordinates();
};

