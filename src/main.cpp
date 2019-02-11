#include <Keyboard.h>

#define DELAY_CONST 1000

void setup() {
  // put your setup code here, to run once

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);

  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);

  pinMode(14, INPUT_PULLUP); //MISO
  pinMode(15, INPUT_PULLUP); //SCK
  pinMode(16, INPUT_PULLUP); //MOSI


  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(0) == LOW) {
    Keyboard.write('0');
    delay(DELAY_CONST);
  }

  if (digitalRead(1) == LOW) {
    Keyboard.write('1');
    delay(DELAY_CONST);
  }

  if (digitalRead(2) == LOW) {
    Keyboard.write('2');
    delay(DELAY_CONST);
  }

  if (digitalRead(3) == LOW) {
    Keyboard.write('3');
    delay(DELAY_CONST);
  }

  if (digitalRead(4) == LOW) {
    Keyboard.write('4');
    delay(DELAY_CONST);
  }

  if (digitalRead(5) == LOW) {
    Keyboard.write('5');
    delay(DELAY_CONST);
  }

  if (digitalRead(6) == LOW) {
    Keyboard.write('6');
    delay(DELAY_CONST);
  }

  if (digitalRead(7) == LOW) {
    Keyboard.write('7');
    delay(DELAY_CONST);
  }

  if (digitalRead(8) == LOW) {
    Keyboard.write('8');
    delay(DELAY_CONST);
  }

  static boolean oldSwitchState1 = digitalRead(9);
  boolean newSwitchState1 = digitalRead(9);
  if (newSwitchState1 != oldSwitchState1){
    oldSwitchState1 = newSwitchState1;
  Keyboard.write('9');
  delay(DELAY_CONST);}

  static boolean oldSwitchState2 = digitalRead(10);
  boolean newSwitchState2 = digitalRead(10);
  if (newSwitchState2 != oldSwitchState2){
    oldSwitchState2 = newSwitchState2;
  Keyboard.write('Q');
  delay(DELAY_CONST);}

  static boolean oldSwitchState3 = digitalRead(11);
  boolean newSwitchState3 = digitalRead(11);
  if (newSwitchState3 != oldSwitchState3){
    oldSwitchState3 = newSwitchState3;
  Keyboard.write('W');
  delay(DELAY_CONST);}

  static boolean oldSwitchState4 = digitalRead(12);
  boolean newSwitchState4 = digitalRead(12);
  if (newSwitchState4 != oldSwitchState4){
    oldSwitchState4 = newSwitchState4;
  Keyboard.write('E');
  delay(DELAY_CONST);}

  static boolean oldSwitchState5 = digitalRead(13);
  boolean newSwitchState5 = digitalRead(13);
  if (newSwitchState5 != oldSwitchState5){
    oldSwitchState5 = newSwitchState5;
  Keyboard.write('R');
  delay(DELAY_CONST);}

  if (digitalRead(A0) == LOW) {
    Keyboard.write('T');
    delay(DELAY_CONST);
  }

  if (digitalRead(A1) == LOW) {
    Keyboard.write('Y');
    delay(DELAY_CONST);
  }

  if (digitalRead(A2) == LOW) {
    Keyboard.write('U');
    delay(DELAY_CONST);
  }

  if (digitalRead(A3) == LOW) {
    Keyboard.write('I');
    delay(DELAY_CONST);
  }

  if (digitalRead(A4) == LOW) {
    Keyboard.write('O');
    delay(DELAY_CONST);
  }

  if (digitalRead(A5) == LOW) {
    Keyboard.write('P');
    delay(DELAY_CONST);
  }

  if (digitalRead(14) == LOW) {
    Keyboard.write('A');
    delay(DELAY_CONST);
  }

  if (digitalRead(15) == LOW) {
    Keyboard.write('S');
    delay(DELAY_CONST);
  }

  if (digitalRead(16) == LOW) {
    Keyboard.write('D');
    delay(DELAY_CONST);
  }




}
