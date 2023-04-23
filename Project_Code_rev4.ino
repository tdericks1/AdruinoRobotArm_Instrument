#include <Servo.h>
// Create the servo objects to call each servo
Servo gripper;  // opens and closes the gripper
Servo servo4;   // first servo that tilts the gripper
Servo servo3;   // second tilting of the gripper
const byte gripperPin = 9;  // pin 9 is the servo5 and just rotates the robot, the best one to practice on
const byte servo4Pin = 11;  // pwm pin
const byte servo3Pin = 6;

// Define the desired angles and tolerance for each servo
int gripperAngle = 100;
int servo3Angle = 45;
int servo4Angle = 15;
int tolerance = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  gripper.attach(gripperPin);
  servo4.attach(servo4Pin);
  servo3.attach(servo3Pin);

  // to help avoid issues with the gripper not being in proper position after the code gets reset
  gripper.write(180);
  delay(1000);
  gripper.write(100);
  delay(1000);
  servo3.write(0);
  delay(1000);
  servo4.write(90);    // had to add this in to stop the servo from rotating on power up and when resetting the arduino
  delay(1000);
  // put your main code here, to run repeatedly:
 
  // move the middle servo first, so second one moves less
  servo3.write(5);
  delay(1000);
  servo3.write(10);
  delay(1000);
  servo3.write(15);
  delay(1000);
  servo3.write(25);
  delay(1000);
  
//  start position of 90, which is center of servo movement
  servo4.write(90);  // always want to start this out at 0 when testing
  servo4.write(95);  // 0 position holds the gripper pointing to the sky from the start position
  delay(1000);      // moving this joint quickly shakes the robot a lot
  servo4.write(100);  
  delay(1000);      
  servo4.write(105);  
  delay(1000);   
  servo4.write(120);  
  delay(1000); 
  servo4.write(125);  
  delay(1000);     
  servo4.write(130);  
  delay(1000);   

  servo3.write(30);
  delay(1000);
  servo3.write(35);
  delay(1000);
  //servo3.write(40);
  //+
  delay(1000);
  // confirmed button was pushed

  //code to move gripper out of way
  servo3.write(30);
  delay(1000);
  servo3.write(20);
  delay(1000);
  servo3.write(10);
  delay(1000);
   
  // close gripper to get ready for next button
  gripper.write(180);
  delay(1000);
  
  // finalizing servo4 to get the closed gripper to hit a button
  servo4.write(140);  
  delay(1000);  
  servo4.write(145);  // close to getting the button
  delay(1000);  
  //servo4.write(150);  // angle in position for 
  //delay(1000); 
  // need to add 5 more degrees on servo3
  servo3.write(15);
  delay(1000);
  servo3.write(18);
  delay(1000);

  //code to retract the robot arm
  servo3.write(10);
  delay(1000);
  servo3.write(5);
  delay(1000);
  servo4.write(140);  
  delay(1000); 
  servo4.write(130);  // angle in position for 
  delay(1000); 

  
  
  
}

void loop() {

 

  // empty


}
