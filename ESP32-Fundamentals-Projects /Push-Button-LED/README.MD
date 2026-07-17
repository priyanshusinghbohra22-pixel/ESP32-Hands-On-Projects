# Push Button Controlled LED using ESP32

## Overview

This project demonstrates how to control an LED using a push button and an ESP32.

The LED turns ON when the push button is pressed and turns OFF when the button is released.

## Components Used

- ESP32 Development Board
- Push Button
- LED
- Resistor
- Breadboard
- Jumper Wires

## Working

The push button is connected to an ESP32 GPIO pin configured using `INPUT_PULLUP`.

The system works as follows:

- Button Released → Input reads HIGH → LED OFF
- Button Pressed → Input reads LOW → LED ON

The ESP32 continuously reads the state of the push button using `digitalRead()` and controls the LED accordingly using `digitalWrite()`.

## Why INPUT_PULLUP?

`INPUT_PULLUP` enables the ESP32's internal pull-up resistor. This keeps the input pin at a stable HIGH state when the button is not pressed and prevents the GPIO pin from floating.

With `INPUT_PULLUP`:

- Released = HIGH
- Pressed = LOW

## Concepts Practiced

- Digital input and output
- Push button interfacing
- `INPUT_PULLUP`
- `digitalRead()`
- `digitalWrite()`
- `if-else` conditional logic

## Learning Outcome

Through this project, I learned how to read a digital input using a push button and use that input to control an output. I also learned why pull-up resistors are needed to prevent floating input states.

## Simulation

Wokwi Simulation: https://wokwi.com/projects/469800585119072257
