/*
  Description: This code fades the brightness of multiple LEDs connected to the Arduino board using Pulse Width Modulation (PWM). The fade rate randomly changes on each iteration.

  Code straight from My head
  If you use this code, please provide a link to MacaDaca88's GitHub profile (https://github.com/MacaDaca88) as attribution.

  (c) 2023 MacaDaca88. All rights reserved.
  Copyright is only breached if the GitHub links are removed.
*/

// Pin assignments for LEDs
int ledPins[] = {9, 10, 11, 12, 13};  // Pins connected to the LEDs

// Color names for LEDs
String ledColors[] = {"Red", "Green", "Blue", "Yellow", "Cyan"};  // Color names for each LED

// Fade speeds for LEDs
int fadeSpeeds[5];  // Speeds of the fading effect for each LED (changes randomly)

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);  // Set the LED pins as output
  }

  randomSeed(analogRead(0));  // Seed the random number generator
}

void loop() {
  for (int i = 0; i < 5; i++) {
    fadeSpeeds[i] = random(1, 10);  // Generate a random fade speed between 1 and 9 for each LED

    // Fade in
    for (int brightness = 0; brightness <= 255; brightness += fadeSpeeds[i]) {
      analogWrite(ledPins[i], brightness);   // Set the LED brightness using PWM
      delay(30);   // Delay to control the speed of the fade (adjust as needed)
    }

    // Fade out
    for (int brightness = 255; brightness >= 0; brightness -= fadeSpeeds[i]) {
      analogWrite(ledPins[i], brightness);   // Set the LED brightness using PWM
      delay(30);   // Delay to control the speed of the fade (adjust as needed)
    }
  }
}
