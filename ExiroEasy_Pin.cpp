#include "Arduino.h"
#include "ExiroEasy_Pin.h"

ExiroEasy_Pin::ExiroEasy_Pin() {
}
void ExiroEasy_Pin::output(int pin)
{
  pinMode(pin, OUTPUT);
}

void ExiroEasy_Pin::on(int pin, int interval) {
  digitalWrite(pin, HIGH);
  delay(interval * 1000);
  
}

void ExiroEasy_Pin::off(int pin, int interval) {
  digitalWrite(pin, LOW);
  delay(interval * 1000);
  
}

void ExiroEasy_Pin::on(int pin) {
  digitalWrite(pin, HIGH);
}

void ExiroEasy_Pin::off(int pin) {
  digitalWrite(pin, LOW);
}
