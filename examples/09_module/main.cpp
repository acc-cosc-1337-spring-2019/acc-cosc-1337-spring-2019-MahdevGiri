#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include "temperature.h"
#include "temperature_data.h"

int main() 
{
	std::vector < Temperature > temps{ Temperature(3, 79.5), Temperature(4, 85.9)};

	TemperatureData data("temps.txt"); // constructor to set the filename(temps.txt) to the object (data)
	data.save_readings(temps);   // writes on file (temps.txt) 

	auto readings = data.get_readings();  // reads from file temps.txt

	for (auto r : readings)
	{
		std::cout << r.get_hour() << " " << r.get_reading() << "\n";
	}

	return 0;
}