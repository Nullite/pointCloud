#include "PointCloud.h"

void PointCloud::getPoint(int ordinal)
{
	int check = 0;

	for (int i = 0; i < points.at(ordinal).size(); i++)
	{
		if (!check)
		{
			string_data.push_back('x');
			string_data += std::to_string(points.at(ordinal).at(i));
			check = 1;
		}
		else if (check == 1)
		{
			string_data.push_back('y');
			string_data += std::to_string(points.at(ordinal).at(i));
			check = 2;
		}
		else
		{
			string_data.push_back('z');
			string_data += std::to_string(points.at(ordinal).at(i));
			check = 0;
		}

	}
}

PointCloud::PointCloud(int size)
{
	for (int i = 0; i < size; i++)
	{
		Point point;
		points.push_back(point.returnCoordinates());
	}

	for (int i = 0; i < size; i++)
	{
		getPoint(i);
	}
}

std::string PointCloud::getCloud()
{
	return string_data;
}


