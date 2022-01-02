#include <Arduino.h>
#define touchPin 4
#define ledPin 16
#define threshold 20
//int touchValue{};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  Serial.println("ESP32 Touch Test");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchValue{touchRead(touchPin)};
  
  if(touchValue < threshold){
    digitalWrite(ledPin, HIGH);

  }
  else{
    digitalWrite(ledPin, LOW);
  }
  
}