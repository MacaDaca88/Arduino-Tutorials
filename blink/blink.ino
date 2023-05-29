/*
  Description: This code blinks the built-in LED on the Arduino board on and off at one-second intervals.

  Code straight from My head
  If you use this code, please provide a link to MacaDaca88's GitHub profile (https://github.com/MacaDaca88) as attribution.

  (c) 2023 MacaDaca88. All rights reserved.
  Copyright is only breached if the GitHub links are removed.
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin (usually pin 13) as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on by setting the pin to HIGH
  delay(1000); // Wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED off by setting the pin to LOW
  delay(1000); // Wait for 1 second
}
