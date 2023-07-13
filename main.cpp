#include "Keyboard.h"

void setup() {

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("cmd");
  Keyboard.write(KEY_RETURN);
  delay(1000);

  Keyboard.print("wsl");
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
}

void loop() {
  Keyboard.print("toilet -f smmono9 @Welcome to KIT!@ --filter gay");
  Keyboard.write(KEY_RETURN);
  delay(3000);
  Keyboard.releaseAll();

  Keyboard.print("toilet -f smmono9 -w 95 @Security Project@ --filter metal");
  Keyboard.write(KEY_RETURN);
  delay(5000);
  Keyboard.releaseAll();

  Keyboard.print("clear");
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
  
}
