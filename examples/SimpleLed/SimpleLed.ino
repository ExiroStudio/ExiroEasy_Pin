/*--------
Dibuat oleh:
Nama    : Rega,12 SIJA 2 2024-2025
Codename: Exiro
----------*/


#include <ExiroEasy_Pin.h>

ExiroEasy_Pin pin;
int pinLed = 13;

void setup() {
  pin.output(13);
}

void loop() {
  pin.on(13); //Menyalakan Pin 13 Tanpa Delay
  pin.off(13); //Mematikan Pin 13 Tanpa Delay

  pin.on(13,1); //Menyalakan Pin 13 Dengan Delay 1 Detik
  pin.off(13,1); //Mematikan Pin 13 Dengan Delay 1 Detik

  pin.on(pinLed,2); //Menyalakan pinLed Dengan Delay 2 Detik
  pin.off(pinLed,2); //Mematikan pinLed Dengan Delay 2 Detik
}

/*
Sebelum Menggunakan Library ExiroEasy_Pin

int pinLed = 13;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); //Menyalakan Pin 13 Tanpa Delay
  digitalWrite(13, LOW); //Mematikan Pin 13 Tanpa Delay

  digitalWrite(13, HIGH);
  delay(1000); //Menyalakan Pin 13 Dengan Delay 1 Detik
  digitalWrite(13, LOW);
  delay(1000); //Mematikan Pin 13 Dengan Delay 1 Detik

  digitalWrite(pinLed, HIGH);
  delay(2000); //Menyalakan pinLed Dengan Delay 2 Detik
  digitalWrite(pinLed, LOW);
  delay(2000); //Mematikan pinLed Dengan Delay 2 Detik
}



*/