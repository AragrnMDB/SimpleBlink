// Include for mdb_flash
#include <mdb_flash.h>

uint8_t led               = 13;
unsigned long onDuration  = 500;

// Create the flasher instance
mdb_flash mdbFlash(led, onDuration);

void setup() {
  mdbFlash.startFlash();
}

void loop() {
  if (! mdbFlash.processFlash()) {
    delay(onDuration);
    mdbFlash.startFlash();
  }
}