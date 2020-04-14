//temperature.h
#ifndef TEMP_H
#define TEMP_H

class Temperature
{
public:
	Temperature(int h, double r) : hour{ h }, reading{ r }{}
	int getHour() const { return hour; }
	double get_reading() const { return reading; }

private:
	int hour;
	double reading;
};

#endif