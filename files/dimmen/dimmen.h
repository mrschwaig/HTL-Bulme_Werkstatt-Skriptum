#include <Arduino.h>

void dimmingOn(int port)
{
  for (int i = 1000; i > 0; i--)
  {
    digitalWrite(port, HIGH);
    delayMicroseconds(i);
    digitalWrite(port, LOW);
    delayMicroseconds(1000 - i);
  }
}

void dimmingOff(int port)
{
  for (int i = 1000; i > 0; i--)
  {
    digitalWrite(port, LOW);
    delayMicroseconds(i);
    digitalWrite(port, HIGH);
    delayMicroseconds(1000 - i);
  }
}