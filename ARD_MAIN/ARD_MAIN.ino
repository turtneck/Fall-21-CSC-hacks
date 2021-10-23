//Jonah Belback

#include <MultiShiftRegister.h>

//pins
int latchPin = 8;
int clockPin = 12;
int dataPin = 10;
int chip = 8;

MultiShiftRegister msr (chip, latchPin, clockPin, dataPin);

void setup(){
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

}

void loop()
{
//LIGHTING 
  for(int i=0; i<chip*8; i++)
  {
  msr.set_shift(i);
  delay(65);
  }
delay(100);
//CLEARING
  for(int i=0; i<chip*8; i++)
  {
  msr.clear_shift(i);
  delay(65);
  }

}
