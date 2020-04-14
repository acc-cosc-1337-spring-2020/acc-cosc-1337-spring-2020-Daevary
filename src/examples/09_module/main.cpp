#include "temperature_data.h"
#include <iostream>


int main() 
{
	std::vector<Temperature> out_temps{ 
		Temperature(1, 98.9), Temperature(2, 99.5), Temperature(3, 70), 
		Temperature(4, 98.7), Temperature(5, 99.1), Temperature(3, 99.6) };

	TempData data;

	data.save_temps(out_temps);

	std::vector<Temperature> in_temps = data.get_temps();

	for (auto temp : in_temps)
	{
		std::cout << temp.getHour() << " " << temp.get_reading() << "\n";
	}

	return 0;
}