#include <Keyboard.h>

//red
int pinLeft = 2;
//black
int pinDown = 3;
//yellow
int pinRight = 4;
//white
int pinUp = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinUp, INPUT_PULLUP);
  pinMode(pinDown, INPUT_PULLUP);
  pinMode(pinRight, INPUT_PULLUP);
  pinMode(pinLeft, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(pinDown) == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
  } else if (digitalRead(pinDown) == HIGH) {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  
    if(digitalRead(pinRight) == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
  } else if (digitalRead(pinRight) == HIGH) {
    Keyboard.release(KEY_RIGHT_ARROW);
  }

  if(digitalRead(pinUp) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
  } else if (digitalRead(pinUp) == HIGH) {
    Keyboard.release(KEY_UP_ARROW);
  }

  if(digitalRead(pinLeft) == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
  } else if (digitalRead(pinLeft) == HIGH) {
    Keyboard.release(KEY_LEFT_ARROW);
  }
}
