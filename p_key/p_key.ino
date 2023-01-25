#include "Keyboard.h"
const int upButton = 2;

void setup() {
  pinMode(upButton, INPUT);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(upButton) == HIGH) {
    Keyboard.press('p');
  } else {
    Keyboard.releaseAll();
  }
}
