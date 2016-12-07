#include "custom-pwm/custom-pwm.h"

#define RESOLUTION  12    // resolution 2^12= 4096
#define FREQUENCY   300

CustomPwm digitalServo = CustomPwm(D1, RESOLUTION, FREQUENCY);

void setup() {
  
  digitalServo.init();
    
}

void loop() {
  
  for(pos = 0; pos < 2048; pos += 11)  // increment about a degree each time
  {
    digitalServo.out(pos);             // e.g. 451/4096 = 11%, 2048/4096 = 50%
    delay(15);                         // waits 15ms for the servo to reach the position
  }
  
  for(pos = 2048; pos > 11; pos -= 11)  // decrement about a degree each time
  {
    digitalServo.out(pos);
    delay(15);
  }
  
}
