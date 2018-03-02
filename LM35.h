#ifndef LM35_h
#define LM35_h

#include "Arduino.h"

class LM35 {

	public:
		LM35(int analogPin);
		double getTemp();
		double getTemp(char unity);

	private:
		int _analogPin;

};

#endif