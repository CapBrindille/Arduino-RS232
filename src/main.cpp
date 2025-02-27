/*
*/

#include <Arduino.h>
#include <SoftwareSerial.h>

#define RX1 0
#define TX1 1

SoftwareSerial RS232(RX1,TX1);

void setup() {
  Serial.begin(9600);
  RS232.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
}
