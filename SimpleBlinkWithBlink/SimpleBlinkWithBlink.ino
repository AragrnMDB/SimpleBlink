// Include for mdb_blink
#include <mdb_blink.h>

uint8_t led               = 13;
unsigned long onDuration  = 500;
unsigned long offDuration = 500;
uint8_t initialState      = LOW;

// Create the blinker instance
mdb_blink mdbBlink(led, onDuration, offDuration, initialState);

void setup() {
  mdbBlink.startBlink();
}

void loop() {
  mdbBlink.processBlink();
}