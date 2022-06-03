#pragma once
#include "PointCloud.h"
class Listener
{
	std::vector <float> pointCloud;

public:
	Listener(PointCloud& instance);
	std::vector<float> getCloud();
};

