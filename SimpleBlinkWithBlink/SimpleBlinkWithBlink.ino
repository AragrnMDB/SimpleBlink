// Include for mdb_digitalOut
#include <mdb_digitalOut.h>

uint8_t led               = 13;
unsigned long onDuration  = 500;
unsigned long offDuration = 500;
uint8_t initialState      = LOW;

// Create the blinker instance
mdb_digitalOut mdbBlink(led, onDuration, offDuration, initialState);

void setup() {
  mdbBlink.startBlink();
}

void loop() {
  mdbBlink.processBlink();
}