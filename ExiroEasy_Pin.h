#ifndef ExiroEasy_Pin_h
#define ExiroEasy_Pin_h

#include "Arduino.h"

class ExiroEasy_Pin {
  public:
    ExiroEasy_Pin();
    void output(int pin);
    void on(int pin);
    void on(int pin,int interval);
    void off(int pin);
    void off(int pin,int interval);
};

#endif
