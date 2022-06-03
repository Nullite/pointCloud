#pragma once
#include "Point.h"
#include <String>

class PointCloud
{
	std::vector<std::vector<float>> points;
	std::string string_data;

	void getPoint(int ordinal);

public:
	PointCloud(int size);
	std::string getCloud();
};

