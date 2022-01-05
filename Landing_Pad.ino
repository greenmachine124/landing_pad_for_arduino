
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   //Turn the LED on
  delay(100);               //Wait for 0.1 seconds
  digitalWrite(13, LOW);    //Turn the LED off
  delay(100);               //Wait for 0.1 seconds
  digitalWrite(13, HIGH);   //Turn the LED on
  delay(100);               //Wait for 0.1 seconds
  digitalWrite(13, LOW);    //Turn the LED off
  delay(1000);              //Wait for 1 second, to add some effect to the blinking program.
  digitalWrite(12, HIGH);   //Turn the other LED on
  delay(100);                //Wait for 0.1 seconds
  digitalWrite(12, LOW);    //Turn the other LED off
  delay(100);                //Wait for 0.1 seconds
  digitalWrite(12, HIGH);   //Turn the other LED on
  delay(100);               //Wait for 0.1 seconds
  digitalWrite(12, LOW);    //Turn the other LED off
  delay(500);              //Wait for 0.5 seconds, to add effect as described above.
  digitalWrite(12, HIGH);   //Turn both LEDs on
  digitalWrite(13, HIGH);
  delay(500);                //Wait for 0.5 seconds
  digitalWrite(12, LOW);    //Turn both LEDs off
  digitalWrite(13, LOW);
  delay(500);                //Wait for 0.5 seconds
  digitalWrite(12, HIGH);   //Turn both LEDS on
  digitalWrite(13, HIGH);
  delay(500);                //Wait for 0.5 seconds
  digitalWrite(12, LOW);    //Turn both LEDs off
  digitalWrite(13, LOW);
  delay(500);               //Wait for 0.5 seconds, to add more effect.
  digitalWrite(8, HIGH);    //Turn red LED on
  delay(250);               //Wait for 0.25 seconds
  digitalWrite(8, LOW);     //Turn red LED off
  digitalWrite(7, HIGH);    //Turn blue LED on
  delay(250);               //Wait for 0.25 seconds
  digitalWrite(7, LOW);     //Turn blue LED off
  digitalWrite(8, HIGH);    //Turn red LED on
  delay(250);               //Wait for 0.25 seconds
  digitalWrite(8, LOW);     //Turn red LED off
  digitalWrite(7, HIGH);    //Turn blue LED on
  delay(250);                //Wait for 0.25 seconds
  digitalWrite(7, LOW);     //Turn blue LED off
  delay(500);                //Wait for 0.5 seconds to add effect to the process.
}


//This code was written by Christian Greene on the 3rd of January, 2022.
//Please do not take credit for my work, as it is not your own.

//CHANGELOG

//Jan 4th, 2021 - Made blinking times shorter, and added some extra blinking.
//Jan 4th, 2021 - Added 2 additional LEDs to the landing pad, and improved blinking times even more
