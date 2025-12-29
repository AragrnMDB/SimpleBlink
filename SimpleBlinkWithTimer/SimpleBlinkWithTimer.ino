// Include for mdb_timer
#include <mdb_timer.h>

int led                 = 13;
int ledState            = LOW;
unsigned long blinkTime = 500;

// Create the timer instance
mdb_timer mdbTimer; // Call the default mdb_timer constructor with no parameters and therefore no ()

void setup() {
  pinMode(led,    OUTPUT);
  digitalWrite(led, ledState);
}

void loop() {
  if (ledState == LOW) {
    if (mdbTimer.timeElapsed(blinkTime)) {
      ledState = HIGH;
    }
  } else {
    if (mdbTimer.timeElapsed(blinkTime)) {
      ledState = LOW;
    }
  }
  digitalWrite(led, ledState);
}