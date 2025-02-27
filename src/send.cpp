#include <Arduino.h>

String msg = "";
void setup() {
  Serial.begin(9600);

}

void readSerialPort() {
msg = "";
if (Serial.available()) {
  delay(30);
  while (Serial.available() > 0) {
    msg += (char)Serial.read();
  }
  Serial.flush();
}
}
void loop() {
  readSerialPort();
  if (msg != ""){
    char Mymessage = msg.charAt(0);
    Serial.write(Mymessage); //Write the serial data
  }
  
  int message[5];

  delay(1000);

}