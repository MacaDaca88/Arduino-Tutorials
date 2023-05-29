/*
  Description: This code fades the brightness of multiple LEDs connected to the Arduino board using Pulse Width Modulation (PWM). The fade speed is controlled by a potentiometer.

  Code straight from My head
  If you use this code, please provide a link to MacaDaca88's GitHub profile (https://github.com/MacaDaca88) as attribution.

  (c) 2023 MacaDaca88. All rights reserved.
  Copyright is only breached if the GitHub links are removed.
*/

// Pin assignments for LEDs
int ledPins[] = {9, 10, 11, 12, 13};  // Pins connected to the LEDs

// Potentiometer pin
int potPin = A0;  // Analog pin connected to the potentiometer

// Fade speeds for LEDs
int fadeSpeeds[5];  // Speeds of the fading effect for each LED

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);  // Set the LED pins as output
  }
}

void loop() {
  int fadeSpeed = map(analogRead(potPin), 0, 1023, 1, 10);  // Read potentiometer value and map it to fade speed range (1-10)

  for (int i = 0; i < 5; i++) {
    // Fade in
    for (int brightness = 0; brightness <= 255; brightness += fadeSpeed) {
      analogWrite(ledPins[i], brightness);   // Set the LED brightness using PWM
      delay(30);   // Delay to control the speed of the fade (adjust as needed)
    }

    // Fade out
    for (int brightness = 255; brightness >= 0; brightness -= fadeSpeed) {
      analogWrite(ledPins[i], brightness);   // Set the LED brightness using PWM
      delay(30);   // Delay to control the speed of the fade (adjust as needed)
    }
  }
}
