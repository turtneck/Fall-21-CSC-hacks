
//Jonah Belback

#include <MultiShiftRegister.h>
#include <imgT_data.h>

//pins
int latchPin = 8;
int clockPin = 12;
int dataPin = 10;
int chip = 8;

MultiShiftRegister msr (chip, latchPin, clockPin, dataPin);
imgT_data DAT;

void setup(){
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

}

void loop()
{
int i=0;
for(int j=0;j<8;j++)
{
for(int k=0;k<8;k++)
{

  if(DAT.getarr(j,k) == 0)
  {msr.set_shift(i);    delay(1);}//gets lit up
  else
  {msr.clear_shift(i);  delay(2);}//doesnt get lit up
  
  
  i++;
}
}

//retired code
/*
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
*/
}
