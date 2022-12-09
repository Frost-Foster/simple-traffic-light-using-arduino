#include <Arduino.h>
int red = 12 , yellow = 13 , green = 14  , del = 2000 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(red , OUTPUT);
  pinMode(yellow , OUTPUT);
  pinMode(green , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  delay(del);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(del);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(del);
  digitalWrite(green,LOW);

}