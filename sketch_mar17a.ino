#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (int i = 0; i<=180;++i ){
    myservo.write(i);  
    delay(5); 
  }
  myservo.write(0);
  delay(1000);


}
