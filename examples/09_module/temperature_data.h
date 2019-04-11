#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include"temperature.h"




using std::fstream;

class TemperatureData
{
public:
	TemperatureData(std::string f): file_name(f) {}
	void save_reading(const std::vector<Temperature> & reading);

	std::vector<Temperature> get_readings();
private:
	std::string file_name;
};




