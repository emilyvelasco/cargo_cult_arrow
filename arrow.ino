/*This code runs an arrow sign with five LEDs, turning them on and off in a variety of sequences to simulate 
 * an old-time lighted sign
 */
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

/*The function clicker controls a small five-volt relay attached to the sign. 
The relay simply exists to make clicking sounds, as would be present in a vintage
sign of this type.*/
void clicker(){
  digitalWrite(11, HIGH);
  delay(7);
  digitalWrite(11, LOW);
}

//turn on the lights one after another
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

//turn all the lights on at once and then turn them off again
void flasher(){
  delay(250); 
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
 
  
  delay(250); 
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

//turn the lights on one at a time, but keep the previous light on. when all are on, turn all off
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

// cycle through the various lighting sequences forever
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
