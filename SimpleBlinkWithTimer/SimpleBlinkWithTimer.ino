// Include for mdb_timer
#include <mdb_timer.h>

uint8_t led           = 13;
uint8_t ledState      = LOW;
unsigned long onTime  = 500;
unsigned long offTime = 500;

// Create the timer instance
mdb_timer mdbTimer; // Call the default mdb_timer constructor with no parameters and therefore no ()

void setup() {
  pinMode(led,    OUTPUT);
  digitalWrite(led, ledState);
}

void loop() {
  if (ledState == LOW) {
    if (mdbTimer.timeElapsed(offTime)) {
      ledState = HIGH;
    }
  } else {
    if (mdbTimer.timeElapsed(onTime)) {
      ledState = LOW;
    }
  }
  digitalWrite(led, ledState);
}