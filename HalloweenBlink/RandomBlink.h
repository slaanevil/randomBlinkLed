#include "Arduino.h"

class RandomBlink{

  private:
    int _pin;
    unsigned long _previousTime;
    unsigned long _nextInterval;
    unsigned long _currentTime;
 
public:
 RandomBlink(int pin);
 void update();
};
