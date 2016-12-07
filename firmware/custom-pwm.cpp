#include "custom-pwm.h"

void CustomPwm::begin(void) {
  pinMode(_pin, OUTPUT); 
  analogWriteResolution(_pin, _resolution);
}

void CustomPwm::write(uint32_t value) {
  analogWrite(_pin, value, _frequency); // 3000/4095 = ~73% duty cycle at 1kHz
}

uint16_t CustomPwm::MaxFreq(void) {
  return analogWriteMaxFrequency(_pin);
}
