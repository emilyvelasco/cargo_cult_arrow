/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int speedValue = 250;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void clicker(){
  digitalWrite(11, HIGH);
  delay(7);
  digitalWrite(11, LOW);
}

void chaser(){

   // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(5, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(5, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }

}

void flasher(){
  delay(speedValue); 
clicker();
   // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    analogWrite(5, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(9, fadeValue);
    analogWrite(10, fadeValue);
  }
 
  
  delay(speedValue); 
  clicker();// wait for a second
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    analogWrite(5, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(9, fadeValue);
    analogWrite(10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(5);
  }
 
}

void sequential(){
  delay(240);
    clicker();
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(5, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
  }
delay(240);
clicker();
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    analogWrite(9, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(5, fadeValue);
    analogWrite(3, fadeValue);
    delay(5);
    // wait for 30 milliseconds to see the dimming effect
    
  } 
  delay(240);

}

// the loop function runs over and over again forever
void loop() {
 chaser();
 chaser();
 chaser();
 chaser();
 flasher();
 flasher(); 
 flasher(); 
 flasher(); 
 sequential();
 sequential(); 
 sequential(); 
 sequential(); 
}
