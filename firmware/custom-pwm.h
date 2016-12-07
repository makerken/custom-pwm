/* 
 * Custom PWM output
 *
 * Photon  
 * Timer1 2pins: TX/CH2, RX/CH3
 * Timer3 2pins: D2/CH2, D3/CH1 OR A5/CH2, A4/CH1
 * Timer4 2pins: D0/CH2, D1/CH1
 * Timer5 1pin : WKP/CH1
 * 
 * Electron
 * Timer1 2pins: TX/CH2, RX/CH3
 * Timer3 4pins: (D3/CH1, D2/CH2  OR A4/CH1, A5/CH2) B3/CH4, B2/CH3
 * Timer4 4pins: D1/CH1, D0/CH2, C5/CH3, C4/CH4 
 * Timer5 1pin : WKP/CH1
 * Timer8 2pins: B1/CH1, B0/CH3
 */

// NOTE: DAC pins DAC1 (A6) and DAC2 (A3) support only either 8-bit or 12-bit (default) resolutions.

#include "Particle.h"

class CustomPwm{
public:
  CustomPwm(uint8_t pin, uint8_t resolution, uint16_t frequency) {
    _pin = pin;
    _resolution = resolution;
    _frequency = frequency;
  }
  void init(void);
  void out(uint32_t);
  uint16_t MaxFreq(void);
    
private:
  uint8_t _pin;
  uint8_t _resolution;
  uint16_t _frequency;
};
