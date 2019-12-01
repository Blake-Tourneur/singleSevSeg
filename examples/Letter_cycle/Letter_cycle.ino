#include <sevenSegment.h>   // Include the sevenSegment library

// The library can either be declared using pins straight (sega-segg), pins straight with decimal point (sega-segdp) or with a shift register (data, clock, latch) (dp or no dp)
// Un-comment the one you are using below!

//sevenSegment sevseg(5, 6, 7, 8, 9, 10, 11, true);      // Uncomment for straight wiring pins (segment a - segment g)
//sevenSegment sevseg(5, 6, 7, 8, 9, 10, 11, 12, true);  // Uncomment for straight wiring pins with a decimal point (segment a - decimal point)
//sevenSegment sevseg(5, 6, 7, true);                    // Uncomment for shift register wiring pins (Data, Clock, Latch) (it doesn't matter if it has a decimal point or not)

int delayTime = 1000;   // Milliseconds to delay after each number (default 1 second)
int displays = 4;  // Number of seven segment displays you have daisy-chained (default 1)

void setup() {
  // Nothing needs to go here apart from clearing the displays, the library sets up the pins for you
  sevseg.clear(displays);
}

void loop() {
  //Since there are so many letters, we will be using a loop rather than displaying each one with sevseg.display('A') and so on (see Number_cycle)
  for (char ch = 'A'; ch <= 'Z'; ch++) { // This means that character ch starts on A and increments by one each time. The loop will go until ch is Z.
    sevseg.display(ch); // Display the letter, ch
    delay(delayTime); // Delay for the delay time specified in the integer delayTime
  }
  sevseg.clear(); // Include clearing the screen in the display cycle
  delay(delayTime);
}
