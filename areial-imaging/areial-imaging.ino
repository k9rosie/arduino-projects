#include <NewTone.h>
#include <Servo.h>
#include <NewPing.h>
#include <SFE_BMP180.h>
#include <Wire.h>

#define PIEZO 2
#define LED 3
#define SR04_ECHO 4
#define SR04_TRIGGER 5
#define SERVO 6

// max distance in centimeters
int maxDistance = 30;

NewPing sonar(SR04_TRIGGER, SR04_ECHO, maxDistance);
SFE_BMP180 altometer;

double baselinePressure;
double initialAltitude = 0.0;

void setup() {
	Serial.begin(9600);
	pinMode(PIEZO, OUTPUT);
	pinMode(LED, OUTPUT);
	
	if (altometer.begin()) {
    	Serial.println("BMP180 init success");
    	baselinePressure = getPressure();
    	initialAltitude = altometer.altitude(getPressure(), baselinePressure);
  	} else {
    	Serial.println("BMP180 init fail (disconnected?)\n\n");
   	}

}

void loop() {
	int distance = sonar.ping_cm();
	double delta = altometer.altitude(getPressure(), baselinePressure);
	Serial.println(delta*3.28084);
	if (delta > 2.0) {
		digitalWrite(LED, HIGH);
	} else {
		digitalWrite(LED, LOW);
	}
}

double getPressure() {
	char status = altometer.startTemperature();
	double temperature;
	double pressure;

	delay(status);

	altometer.getTemperature(temperature);
	status = altometer.startPressure(3);
	delay(status);
	altometer.getPressure(pressure, temperature);

	return(pressure);
}