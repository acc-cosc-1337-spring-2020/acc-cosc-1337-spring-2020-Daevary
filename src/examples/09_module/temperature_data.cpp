#include "temperature_data.h"
//temperature_data.cpp

void TempData::save_temps(std::vector<Temperature>& ts)
{
	std::ofstream file_out(file_name, std::ios_base::trunc); // create varibale f/o try to open temp.dat, if it does not exist, it will create it. if it does, it will clear out all the thingys

	for (auto temp : ts)
	{
		file_out << temp.getHour();
		file_out << " ";
		file_out << temp.get_reading();
		file_out << "\n";
	}

	file_out.close();
}

std::vector<Temperature> TempData::get_temps() const
{
	std::vector<Temperature> temps; 
	std::ifstream read_file(file_name);

	int hour;
	double reading;

	if (read_file.is_open())
	{
		while (read_file >> hour >> reading)
		{
			Temperature temp(hour, reading);
			temps.push_back(temp);

		}
	}

	read_file.close();

	return temps;
}
