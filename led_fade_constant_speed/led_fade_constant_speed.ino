/*
  Description: This code fades the brightness of an LED connected to the Arduino board using Pulse Width Modulation (PWM).

  Code straight from My head
  If you use this code, please provide a link to MacaDaca88's GitHub profile (https://github.com/MacaDaca88) as attribution.

  (c) 2023 MacaDaca88. All rights reserved.
  Copyright is only breached if the GitHub links are removed.
*/

int ledPin = 9;       // Pin connected to the LED
int fadeSpeed = 5;    // Speed of the fading effect (adjust as needed)

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  // Fade in
  for (int brightness = 0; brightness <= 255; brightness += fadeSpeed) {
    analogWrite(ledPin, brightness);   // Set the LED brightness using PWM
    delay(30);   // Delay to control the speed of the fade (adjust as needed)
  }

  // Fade out
  for (int brightness = 255; brightness >= 0; brightness -= fadeSpeed) {
    analogWrite(ledPin, brightness);   // Set the LED brightness using PWM
    delay(30);   // Delay to control the speed of the fade (adjust as needed)
  }
}
