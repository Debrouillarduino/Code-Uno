#include <Servo.h>

Servo myservo1; 
Servo myservo2;  

void setup() {
  myservo1.attach(10);   
  myservo2.attach(11); 
}

void avant() {
  myservo1.write(0);  
  //myservo2.write(180);
}

void arriere() {
  myservo1.write(180);  
  //myservo2.write(0);
}

void droite() {
  myservo1.write(180);  
  //myservo2.write(180);
}

void gauche() {
  myservo1.write(0);  
  //myservo2.write(0);
}

void loop() {
  avant();
  delay(1000);
  arriere();
  delay(1000);
}

