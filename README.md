# SimpleBlink

A group of programs demonstrating now to blink the on-board LED.  

## SimpleBlinkWithDelay  

This program is one of the original demos for Arduino. It blinks the LED by alternately turning the LED on and off
with delay() statements in between.  

The drawback of this approach is that the program stops running during the delay()s and nothing can be done while
the program is stopped.  

## SimpleBlinkWithTimer

This program uses the [mdb_timer](https://github.com/AragrnMDB/mdb_timer.git "mdb_timer.git") library to implement the blinking. The program implements the blinking by keeping
track of the state of the LED and the on and off elapsed time.  

The loop never stops so you can do other things while the LED is blinking.  

## SimpleBlinkWithBlink

This program uses the [mdb_blink](https://github.com/AragrnMDB/mdb_blinkr.git "mdb_blink.git") library
(which uses the [mdb_timer](https://github.com/AragrnMDB/mdb_timer.git "mdb_timer.git") library) to implement the blinking.
The library keeps track of the status of the LED and the on and off durations. All that is needed is the call to the
constructor, one statement in setup() and one statement in loop().  

The loop never stops so you can do other things while the LED is blinking.  

## SimpleBlinkWithFlash

This program uses the [mdb_flash](https://github.com/AragrnMDB/mdb_flash.git "mdb_flash.git") library
(which uses the [mdb_timer](https://github.com/AragrnMDB/mdb_timer.git "mdb_timer.git") library) to implement the blinking.
The library keeps track of the duration of the flash and the state of the flash. All that is needed is the call to the
constructor, one statement in setup() and some logic in the loop to determine when to flash again. Updated to flash
to a button press.

## SimpleBlinkWithDebounce

This program is not really a blinker. It lights the LED while a button is pressed and turns the LED off when the button
is not pressed. It demonstrates the [mdb_debounce](https://github.com/AragrnMDB/mdb_debounce.git "mdb_debounce.git") library.  
