#include <Servo.h>
Servo servo1;
int pot = A0;
int angle =0 ; 
void setup (){
servo1.attach(9);
pinMode(pot, INPUT);
Serial.begin(9600); 
} 
void loop(){
  int lecture = analogRead(pot);
  Serial.println(lecture);
  if ( lecture <= 500){
  angle = angle +1;
  if (angle >= 180){
  angle = 180 ;}
  if ( angle <= 180 ){
  servo1.write(angle); }    
}
if (lecture > 100) {
angle = angle -1 ;
if (angle <= 0){
angle = 0 ;}
if (angle >= 0){
servo1.write(angle);}
}
delay (5);
}
