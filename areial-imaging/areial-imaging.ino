//#include <NewTone.h>
#include <Servo.h>
#include <NewPing.h>
#include <SFE_BMP180.h>
#include <Wire.h>
//#include <math.h>

#define PIEZO 2
#define LED 3
#define SR04_ECHO 4
#define SR04_TRIGGER 5
#define SERVO 6

#define MAX_DISTANCE 30 // in centimeters
#define MAX_HEIGHT 40.00 // in feet
#define OVERSAMPLING 3
#define SAMPLING_RATE 10

double baselinePressure;

NewPing sonar(SR04_TRIGGER, SR04_ECHO, MAX_DISTANCE);
SFE_BMP180 barometer;
Servo servo;

bool heightReached = false;
bool grounded = false;

void setup() {
	Serial.begin(9600);
	pinMode(PIEZO, OUTPUT);
	pinMode(LED, OUTPUT);
	barometer.begin();
	servo.attach(SERVO);
    baselinePressure = getPressure();
}

void loop() {
	int distance = sonar.ping_cm();
	double pressure = getPressure();
	double altitude = 0.0;
	// take a large number of readings and average them to improve accuracy
	for (int i = 0; i < SAMPLING_RATE; i++) {
		altitude += barometer.altitude(pressure, baselinePressure)*3.28084;
	}
	altitude /= SAMPLING_RATE;

	if (altitude >= MAX_HEIGHT) {
		heightReached = true;
	}

	if (heightReached) {
		digitalWrite(LED, HIGH);
		if (!grounded) {
			sweep();
		}
		if (distance != 0 && distance <= 10) {
			tone(PIEZO, 400);
			grounded = true;
		} else {
			noTone(PIEZO);
		}
		
	}
	
}

double getPressure() {
	char status = barometer.startTemperature();
	double temperature;
	double pressure;

	delay(status);

	barometer.getTemperature(temperature);
	status = barometer.startPressure(OVERSAMPLING);
	delay(status);
	barometer.getPressure(pressure, temperature);

	return(pressure);
}

void sweep() {
	int pos = 0;
	for (; pos <= 135; pos++) {
		servo.write(pos);
		delay(5);
	}

	for (; pos >= 0; pos--) {
		servo.write(pos);
		delay(5);
	}
}