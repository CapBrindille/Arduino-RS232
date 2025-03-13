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
    if (mySerial.available()) {
        String message = mySerial.readString();
        Serial.print("Message entrant : ");
        Serial.println(message);
    }

}
