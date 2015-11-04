#include "mbed-drivers/mbed.h"
#include "driver.h"

class DHT22
{
public:
	
	DHT22(PinName dataPin){
		_dataPin = dataPin;
		DigitalOut output(dataPin);
		output = 1; // hold high when not in use
	}
	
	float read(){
		

	}

private:
	PinName _dataPin;
	float 	_humidity;
	float 	_temperature;
	R40B    dataStream;
	
};