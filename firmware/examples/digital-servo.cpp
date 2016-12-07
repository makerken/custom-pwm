#include "custom-pwm/custom-pwm.h"

#define RESOLUTION  12
#define FREQUENCY   300

PWM digitalServo = PWM(D1, RESOLUTION, FREQUENCY);

void setup() {
    
    digitalServo.init();
    
}

void loop() {

    digitalServo.out(2048); // resolution 2^12= 4096, so 2048/4096 = 50%

}