#include "Arduino.h"
#include "RandomBlink.h"

RandomBlink::RandomBlink(int pin){
  _pin=pin;
  _previousTime=0;
  _nextInterval=50;
  _currentTime=0;

  pinMode(_pin, OUTPUT);
}


void RandomBlink::update(){
  
  //Get actual time
  _currentTime = millis();
  
  if (_currentTime - _previousTime >= _nextInterval) {
    
    // save the last time you blinked the LED
    _previousTime = _currentTime;

    // Generate random PWM signal
    analogWrite(_pin, random(0, 255));

    // random interval time
    _nextInterval = random(10, 200);
  }
}

