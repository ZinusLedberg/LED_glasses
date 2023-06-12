#include <Arduino.h>
#include <LNEffects.h>

//----------------------------------------------------
// Title: LED program for esp32
//
// Authors: Linus Svedberg, Noah Otte
// Created: 2023-06-08
// Latest revision: YYYY-MM-DD
//
// Description: This program is made to switch between
//    different modes and effects for an LED-strip
//    connected to an ESP32 module.
//    Remember to change each INIT in the setup 
//    to match your speciffic LED-strip and 
//    ESP32 module.
// 
//----------------------------------------------------

// put function declarations here:
int myFunction(int, int);


void setup() {
  // put your setup code here, to run once:

  // INIT LED

  // INIT MCU

  int result = myFunction(10, 3);
}


void loop() {
  // put your main code here, to run repeatedly:

  // CLEAR LAST INPUT

  // READ BUTTONS

  // BIG ASS SWITCH
  // reads one of the modes, specified in separate files

  // EXCECUTES/DISPLAY THE SELECTED MODE
}


// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}