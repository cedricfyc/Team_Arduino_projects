#include <Stepper.h>

//INPUT_PULLUP means that the digital input 7 is internally connected to a pull up resistor at high, 
//when the switch is pressed, the digital input is connected to ground, and the arduino reads a low.


const int stepPerRev = 2048;
const int button = 7;
int cont = 0;
int sensorValue;
//USed pins 8-11 for IN1 to IN4

Stepper myStepper = Stepper(stepPerRev, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode(button, INPUT_PULLUP);
  myStepper.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = digitalRead(button);
  Serial.println(sensorValue, DEC);

  if (sensorValue == 0) {
    cont = 0;
    if (cont == 0) {

     myStepper.step(stepPerRev / 4);
     delay(50);
     cont = 1;

    }

    sensorValue = 1;
 
  }
  
  //myStepper.step(100);
  //myStepper.step(100);
  //delay(1000);
}
