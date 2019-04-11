#include "temperature_data.h"


void TemperatureData::save_reading(const std::vector<Temperature>& reading)
{
	std::ofstream file(file_name, std::ios ::out| std::ios ::app);



	for (auto t : reading)

	{

		file << t.get_hour()<<" " ;

		file << t.get_reading() << " " ;
		file << "\n";

		

	}
}

std::vector<Temperature> TemperatureData::get_readings()
{
	std::ifstream file(file_name, std::ios::in);
	std::vector<Temperature> readings;
	int h;
	double t;
	while (file >> h >> t)
	{
		readings.push_back(Temperature(h, t));
	}
	file.close();
	return readings;

	
}
