#include "Keyboard.h"
const int upButton = 2;
char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  pinMode(upButton, INPUT);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(upButton) == HIGH) {
    Keyboard.press(ctrlKey);
    Keyboard.press('c');
  } else {
    Keyboard.releaseAll();
  }
}
