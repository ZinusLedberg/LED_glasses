#include <Arduino.h>
#include<LNEffects.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(10, 3);
}

void loop() {
  // put your main code here, to run repeatedly:

  // CLEAR LAST INPUT

  // READ BUTTONS

  // BIG ASS SWITCH
  // reads one of the modes, specified in separate files

  // EXCECUTES THE SELECTED MODE
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}