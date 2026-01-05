// Includes for mdb_digitalIn and mdb_digitalOut
#include <mdb_digitalIn.h>
#include <mdb_digitalOut.h>

uint8_t led = 13;
unsigned long onDuration = 50;

// Create the flasher instance
mdb_digitalOut mdbFlash(led, onDuration);

uint8_t flashButton = 6;                                     // Define the flash button pin (pinmode set in debounce)
bool flashFlag = false;                                      // True if flashing
bool lastFlash = false;                                      // True if flash button has already been noted
mdb_digitalIn debouncedFlash(flashButton, INPUT_PULLUP, 20); // Debounced input for offButton

void setup() {
  mdbFlash.begin();
  mdbFlash.startFlash();
  debouncedFlash.begin();
}

void loop() {
  mdbFlash.processFlash();
  flashFlag = debouncedFlash.inputState();
    if (flashFlag and !lastFlash) {
    lastFlash = true;
    mdbFlash.startFlash();
  }
  else if (!flashFlag) {
    lastFlash = false;
  }
}