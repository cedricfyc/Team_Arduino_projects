# LED Shooting Game
## Principle
- LED turns off after shooting
- align the shooter with some clearance and then shoot
- limited time -> shoot random LED down
- time: 30 s

## Hardware Requirements
- stepper motor
- joystick
- joystick switch: True statement to shoot
- LCD screen
- 3 LEDs to shoot down
- 2 * 7 segment digit display

---

## Software Requirements
- fixed distance LED to motor
- random lighting up of LEDs
- score on LCD screen
- internal timer on arduino1
- arduino1 -> LEDs (3 live pins + 1 ground) and joystick (3 live pins + 1 ground + 1 live) and stepper motor (4 pins)
- arduino2 -> timer on 2 * 7 segment digit display
