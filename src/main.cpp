#include <Arduino.h>
#define TOUCH_PIN 4
#define LED_PIN 16
#define THRESHOLD 20
//int touchValue{};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  Serial.println("ESP32 Touch Test");
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchValue{touchRead(TOUCH_PIN)};
  
  if(touchValue < THRESHOLD){
    digitalWrite(LED_PIN, HIGH);

  }
  else{
    digitalWrite(LED_PIN, LOW);
  }
  
}