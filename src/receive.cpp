#include <Arduino.h>

char Mymessage[2]; //Initialized variable to store recieved data
  
  void setup() {
    // Begin the Serial at 9600 Baud
    Serial.begin(9600);
  }
  
  void loop() {
    Serial.readBytes(Mymessage,2); //Read the serial data and store in var
    Serial.println(Mymessage); //Print data on Serial Monitor
    delay(1000);
  }