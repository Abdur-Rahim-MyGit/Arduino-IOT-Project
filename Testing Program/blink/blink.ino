#include <AFMotor.h>
AF_DCMotor motor(4);
void setup() {
 
}

void loop() { 
  motor.setSpeed(200);
motor.run(FORWARD);
delay(1000);
motor.run(RELEASE);
delay(100);
motor.run(BACKWARD);
delay(1000);
motor.run(RELEASE);
delay(100);
}
