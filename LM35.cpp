#include "Arduino.h"

#include "LM35.h"

LM35::LM35(int analogPin)
{
	_analogPin = analogPin;
}

double LM35::getTemp()
{
	double value = analogRead(_analogPin);

	double celcius = (double(value) * ((5.0 / 1023.0) / 0.01));

	return celcius;
}

double LM35::getTemp(char unity)
{
	if (unity == 'F') {
		return ((getTemp() * 1.8) + 32.0);
	}
	if (unity == 'K') {
		return (getTemp() + 273.15);
	}
	if (unity == 'C') {
		return getTemp();
	}
}