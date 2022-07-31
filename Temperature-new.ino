#include <Mouse.h>
#include <Keyboard.h>
#include <Adafruit_CircuitPlayground.h>

float tempC, tempF;

bool leftButtonPressed;
bool rightButtonPressed;


void setup() {
  Serial.begin(9600);
  Mouse.begin();
  Mouse.release(MOUSE_LEFT);
  Keyboard.begin();
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();
  pinMode(3, INPUT);
}

//Uploading the Code!: ppppp

/*p*/

void loop() {

  tempC = CircuitPlayground.temperature();
  tempF = CircuitPlayground.temperatureF();
  Serial.print("Celcius: ");
  Serial.print(tempC);
  Serial.print("        ");
  Serial.print("Fahrenheit: ");
  Serial.println(tempF);

  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

  if (leftButtonPressed || rightButtonPressed) {

    if (tempC > 31 || tempF > 86) {
      Serial.print("Temperature exceeded, starting automation!");

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
    delay(300);
    for (int i = 0; i < 5; i++) {
      Mouse.move(30, 15, 0);
    }
    delay(400);
    Mouse.press(MOUSE_LEFT);
    for (int i = 0; i < 5; i++) {
      Mouse.move(0, 10, 0);
    }
      Mouse.release(MOUSE_LEFT);
      delay(1000);
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      delay(500);
      Keyboard.print("Phone");
      delay(100);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);

    delay(300);
  
    for (int i = 0; i < 20; i++) {
      Mouse.move(-40, 40, 0);
    }
    
    delay(300);
    Mouse.move(20, -23, 0);
    delay(400);
    Mouse.click();
    delay(500);
  
    for (int i = 0; i < 20; i++) {
      Mouse.move(40, -40, 0);
    }
    
    delay(600);
    Mouse.move(-20, 31, 0);
    Mouse.move(-20, 35, 0);
    Mouse.move(-20, 30, 0);
    delay(500);
  
    Mouse.press(MOUSE_LEFT);
    delay(600);
    Mouse.release(MOUSE_LEFT);
    delay(200);
    
    Mouse.move(-40, 45, 0);
    delay(500);
    Mouse.click();
    delay(600);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.release(KEY_LEFT_SHIFT );
    delay(300);
    Keyboard.press(KEY_BACKSPACE);
    delay(5000);
    Keyboard.release(KEY_BACKSPACE);
    delay(300);
      delay(800);
      Keyboard.print("Warning: Your surrounding temperature is too high for the medicine. Please seek a cooler environment ASAP.");
      delay(1400);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
      delay(500);
      Keyboard.print("The temperature is:");
      delay(500);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
      delay(1000);
      Keyboard.print(tempC);
      Keyboard.print(" degrees Celcius");
      delay(1000);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
      delay(1000);
      Keyboard.print(tempF);
      Keyboard.print(" degrees Fahrenheit.");
      delay(700);
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
    }

  }

}
