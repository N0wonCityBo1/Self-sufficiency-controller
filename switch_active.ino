#include <Keyboard.h>

// use this key = LEFT_CTRL
char l_ctrl = KEY_LEFT_CTRL;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(3)){
    Keyboard.press(KEY_LEFT_SHIFT);
  }
  else{
    Keyboard.release(KEY_LEFT_SHIFT);
  }

  if(!digitalRead(4)){
    Keyboard.press('a');
  }
  else{
    Keyboard.release('a');
  }

  if(!digitalRead(5)){
    Keyboard.press('s');
  }
  else{
    Keyboard.release('s');
  }

  if(!digitalRead(6)){
    Keyboard.press('d');
  }
  else{
    Keyboard.release('d');
  }

  if(!digitalRead(7)){
    Keyboard.press(KEY_UP_ARROW);
  }
  else{
    Keyboard.release(KEY_UP_ARROW);
  }

  if(!digitalRead(8)){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  else{
    Keyboard.release(KEY_DOWN_ARROW);
  }

  if(!digitalRead(9)){
    Keyboard.press('l');
  }
  else{
    Keyboard.release('l');
  }

  if(!digitalRead(10)){
    Keyboard.press(';');
  }
  else{
    Keyboard.release(';');
  }

  if(!digitalRead(11)){
    Keyboard.press('\'');
  }
  else{
    Keyboard.release('\'');
  }

  if(!digitalRead(12)){
    Keyboard.press(KEY_RIGHT_SHIFT);
  }
  else{
    Keyboard.release(KEY_RIGHT_SHIFT);
  }
}
