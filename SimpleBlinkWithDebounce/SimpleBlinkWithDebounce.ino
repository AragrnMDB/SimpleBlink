// Include for mdb_digitalIn
#include <mdb_digitalIn.h>                       // Include my debounce library

uint8_t led               = 13;                 // Define the led pin
uint8_t onButton          = 7;                  // Define the on button pin (pinmode set in debounce)
mdb_digitalIn debouncedOn(onButton,  INPUT_PULLUP, 20); // Debounced input for onButton

void setup() {                                  // Setup function runs once
  pinMode(led,    OUTPUT);
  digitalWrite(led, LOW);                       // Turn the led off
  debouncedOn.begin();
}

void loop() {
  if (debouncedOn.momentary()) {                // If the ON button is pressed
    digitalWrite(led, HIGH);
  } else {                                      // Else
    digitalWrite(led, LOW);
  }
}