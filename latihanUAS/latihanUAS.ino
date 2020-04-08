/*
  LiquidCrystal Library - Custom Characters

 Demonstrates how to add custom characters on an LCD  display.
 The LiquidCrystal library works with all LCD displays that are
 compatible with the  Hitachi HD44780 driver. There are many of
 them out there, and you can usually tell them by the 16-pin interface.

 This sketch prints "I <heart> Arduino!" and a little dancing man
 to the LCD.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K potentiometer:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * 10K poterntiometer on pin A0

 created 21 Mar 2011
 by Tom Igoe
 modified 11 Nov 2013
 by Scott Fitzgerald
 modified 7 Nov 2016
 by Arturo Guadalupi

 Based on Adafruit's example at
 https://github.com/adafruit/SPI_VFD/blob/master/examples/createChar/createChar.pde

 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/LiquidCrystalCustomCharacter

 Also useful:
 http://icontexto.com/charactercreator/

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// make some custom characters:
byte divide[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b11111,
  0b11111,
  0b00100,
  0b00000,
  0b00000
};

byte arrowRight[8] = {
  0b00000,
  0b00000,
  0b00010,
  0b11111,
  0b00010,
  0b00000,
  0b00000,
  0b00000
};

byte arrowLeft[8] = {
  0b00000,
  0b00000,
  0b01000,
  0b11111,
  0b01000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
  // initialize LCD and set up the number of columns and rows:
  lcd.begin(16, 2);
  // create a new character
  lcd.createChar(0, divide);
  lcd.createChar(1, arrowRight);
  lcd.createChar(2, arrowRight);
  // set the cursor to the top left
  lcd.setCursor(0, 0);
  // Print a message to the lcd.
  lcd.write((byte)0);
  lcd.print("UAS Mikro1");
  lcd.write((byte)0);
  // set the cursor to the bottom
  lcd.setCursor(0, 1);
  // NIM
  lcd.print("M3119004");
  geser();
  lcd.clear(); delay(900);

}

void geser() {

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter <2; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

     for (int loop=0;loop<3;loop++){
         // Turn off the display:
         lcd.noDisplay();
         delay(500);
         // Turn on the display:
         lcd.display();
         delay(500);
       }
       
  for (int positionCounter = 0; positionCounter <11; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 24; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 11; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

  }

void loop() {
  // delay at the end of the full loop:
  delay(1000);
  // read the potentiometer on A0:
  int sensorReading = analogRead(A0);
  // map the result to 200 - 1000:
  int delayTime = map(sensorReading, 0, 1023, 200, 1000);
  // set the cursor to the bottom row, 5th position:
  lcd.setCursor(0, 0);
  lcd.write(2);
  lcd.write("[ ");
  lcd.print(millis() / 1000);
  lcd.write(" ]");
  lcd.write((byte)1);
  delay(delayTime);
  // set the cursor to the bottom
  lcd.setCursor(0, 1);
  // NIM
  lcd.print("M3119004");
}
