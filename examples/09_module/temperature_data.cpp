#include "temperature_data.h"

// to write on file ("file_name"), the value of hour and temperature, from each object(of type temperature) 
void TemperatureData::save_readings(const std::vector<Temperature>& readings)
{
	std::ofstream file(file_name, std::ios::app); 
	// std::ios::app helps to write on the same file again without erasing the the current document 


	for (auto r : readings)   // in our case obj1 and obj2

	{

		file << r.get_hour()<<" " ;

		file << r.get_reading() << " " ;
		file << "\n";
		
	}
	file.close();
}

// to read from file("file_name")
std::vector<Temperature> TemperatureData::get_readings()
{
	std::vector<Temperature> readings;

	std::ifstream file(file_name);//, std::ios::in);
	
	int h;
	double t;
	while (file >> h >> t)  // as long as input is available from the file
	{
		readings.push_back(Temperature(h, t));
	}
	file.close();
	return readings; // return the readings vector of type temperature

	/*
	for homework:
	read through a line of pegs (in a vector of strings)
	add the line to the vector of pegs
	push_back line

	if (my_file.is_open())
			{
						while (getline(my_file, line))
						{
									std::cout << line << '\n' ;
						}
						my_file.close();
			}
			else
			{
						std::cout << "Unable to open file" ;
			}
	*/

	
}
