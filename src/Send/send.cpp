#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(0, 1); // (RX, TX)


void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
  	pinMode(0, INPUT);
  	pinMode(1, OUTPUT);
}


void loop() {
    mySerial.println("test");
    Serial.println("Message envoyé : test");
    delay(3000);
}