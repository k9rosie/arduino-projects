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
int maxDistance = 200;

void setup() {
	pinMode(PIEZO, OUTPUT);
	pinMode(LED, OUTPUT);
}

void loop() {
	ledTest();
}

void piezoTest() {

}

void ledTest() {
	delay(100);
	digitalWrite(LED_PIN, HIGH);
	delay(100);
	digitalWrite(LED_PIN, LOW);
}