#include "Listener.h"

Listener::Listener(PointCloud& instance)
{
	std::string data = instance.getCloud();
	std::string temp;
	for (int i = 1; i < data.size(); i++)
	{
		if (data.at(i) == 'x' || i == data.size() - 1)
		{
			try
			{
				float coordinate = stof(temp);
				pointCloud.push_back(coordinate);
				temp = "";
			}
			catch (std::exception&)
			{
				continue;
			}
		}
		else if (data.at(i) == 'y' || i == data.size() - 1)
		{
			try
			{
				float coordinate = stof(temp);
				pointCloud.push_back(coordinate);
				temp = "";
			}
			catch (std::exception&)
			{
				continue;
			}
		}
		else if (data.at(i) == 'z' || i == data.size() - 1)
		{
			try
			{
				float coordinate = stof(temp);
				pointCloud.push_back(coordinate);
				temp = "";
			}
			catch (std::exception&)
			{
				continue;
			}
		}

		else
		{
			try
			{
				temp += data[i];
			}
			catch (std::exception&)
			{
				continue;
			}
		}
	}
}

std::vector<float> Listener::getCloud()
{
	return pointCloud;
}
