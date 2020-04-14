//temperature_data.h

#include <fstream>
#include <string>
#include <vector>
#include "temperature.h"
#ifndef TEMP_DATA_H
#define TEMP_DATA_H

class TempData
{
public:
	void save_temps(std::vector<Temperature>& ts);
	std::vector<Temperature> get_temps() const;

private:
	const std::string file_name{ "temperature.dat" };
};

#endif // !TEMP_DATA_H
