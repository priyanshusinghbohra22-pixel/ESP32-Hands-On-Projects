# Traffic Light Controller using ESP32

## Overview

This project simulates a basic traffic light system using an ESP32 and three LEDs: Red, Yellow, and Green.

The LEDs operate in a predefined sequence with different time delays, demonstrating how multiple GPIO outputs can be controlled sequentially.

## Components Used

- ESP32 Development Board
- Red LED
- Yellow LED
- Green LED
- Resistors
- Breadboard
- Jumper Wires

## Working

The traffic light follows this sequence:

1. Red LED turns ON for 5 seconds.
2. Yellow LED turns ON for 2 seconds.
3. Green LED turns ON for 5 seconds.
4. The sequence repeats continuously.

Only the required LED is active during each stage.

## Concepts Practiced

- Multiple GPIO output control
- `pinMode()`
- `digitalWrite()`
- `delay()`
- Sequential programming
- Basic traffic light logic

## Learning Outcome

Through this project, I learned how to control multiple output devices using the ESP32 and implement a timed sequence using delays.

## Simulation

Wokwi Simulation: https://wokwi.com/projects/469757908372203521
