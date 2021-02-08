#include <Arduino.h>
#define VERSION 6
#define BLINKTIME 300

void blink(int tours, int pause)
{
  
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  for (int i = 0; i < tours; i++)
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(pause);                    
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(pause);                    
  }                     
}

void setup() {
  blink(VERSION,BLINKTIME);
  Serial.begin(115200);
  Serial.println(" ");
  Serial.print("Programme pour tester GIT | version ");
  Serial.println(VERSION);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}