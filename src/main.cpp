#include <Arduino.h>
#include <SoftwareSerial.h>

#define RX1 0
#define TX1 1

SoftwareSerial RS232(RX1,TX1);

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}
