// include the library code:

#include <LiquidCrystal.h>

int vx, vy;
int xpin = A0;
int ypin = A1;

int redPin = 7;
int bluePin = 8;
int yellowPin = 9;
int greenPin = 10;


// initialize the library by associating any needed LCD interface pin

// with the arduino pin number it is connected to

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

  // Print a message to the LCD.

  lcd.print("ambatukam!!!");

  pinMode(redPin, OUTPUT);
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  Serial.begin(9600);

}


void loop() {

  vx = analogRead(xpin);
  vy = analogRead(ypin);

  delay(500);

  if (vx > 1000)
  {
    digitalWrite(redPin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Red LED on!");
  }

  if (vy > 1000)
  {
    digitalWrite(bluePin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Blue LED on!");
  }

  if (vx < 100)
  {
    digitalWrite(yellowPin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Yellow LED on!");
  }

  if (vy < 100)
  {
    digitalWrite(greenPin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Green LED on!");
  }

  if (vx > 500 && vx < 530  && vy > 500 && vy < 530)
  {
    lcd.clear();
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    lcd.print("OFF!!!");
  }

  Serial.print(vx);
  Serial.print("\n");

  Serial.print(vy);
  Serial.print("\n");

}