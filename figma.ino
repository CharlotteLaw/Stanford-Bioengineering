#include <Mouse.h>
#include <Keyboard.h>
#include <Adafruit_CircuitPlayground.h>

void setup() {
  Mouse.begin();
  Mouse.release(MOUSE_LEFT);
  Keyboard.begin();
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  pinMode(3, INPUT);

// pp1234pp1234pppppp

  delay(3000);
  Keyboard.write('p');
  delay(100);
  Keyboard.write('p');
  delay(1000);
  Keyboard.print("1234");
  delay(1000);

  for (int i = 0; i < 20; i++) {
    Mouse.move(-40, -40, 0);
  }
  delay(100);
  for (int i = 0; i < 5; i++) {
    Mouse.move(30, 15, 0);
  }
  delay(200);
  Mouse.press(MOUSE_LEFT);
  for (int i = 0; i < 5; i++) {
    Mouse.move(0, 10, 0);
  }
    Mouse.release(MOUSE_LEFT);
    delay(1000);
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.release(KEY_BACKSPACE);
    delay(500);
    Keyboard.print("Figma");
    delay(100);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);

delay(3000);
Mouse.move(-50, 20, 0);
delay(500);
Mouse.click();

}

void loop() {
  
}
