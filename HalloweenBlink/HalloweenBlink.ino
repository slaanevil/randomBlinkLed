/*
  HalloweenBlink

  It mimics the behavior of a candle inside a halloween pumpkin. 
  For that, it changes the intensity of the LEDs randomly.

  Circuit
   * LEDs atached from pin 5 and 6 to ground
   * You need a 220 Ohm resistor for each LED


  writen by
  slaanevil
*/

#include "RandomBlink.h"

RandomBlink led1 = RandomBlink(5); //pin
RandomBlink led2 = RandomBlink(6); //pin


// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again forever
void loop() {
  //Refresh LEDs
  led1.update();
  led2.update();  
}





