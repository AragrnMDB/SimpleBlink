#include <mdb_debounce.h>                       // Include my debounce library

uint8_t led               = 13;                 // Define the led pin
uint8_t onButton          = 7;                  // Define the on button pin (pinmode set in debounce)
mdb_debounce debouncedOn(onButton,  INPUT_PULLUP, 20); // Debounced input for onButton

void setup() {                                  // Setup function runs once
  pinMode(led,    OUTPUT);
  digitalWrite(led, LOW);                       // Turn the led off
}

void loop() {
  if (debouncedOn.inputState()) {               // If the ON button is pressed
    digitalWrite(led, HIGH);
  } else {                                      // Else
    digitalWrite(led, LOW);
  }
}