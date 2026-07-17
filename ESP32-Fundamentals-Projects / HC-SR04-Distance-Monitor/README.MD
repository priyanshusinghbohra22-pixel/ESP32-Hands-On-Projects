# Ultrasonic Distance Measurement using ESP32 and HC-SR04

## Overview

This project demonstrates how to measure the distance of an object using an HC-SR04 ultrasonic sensor and an ESP32.

The measured distance is calculated in centimeters and displayed on the Serial Monitor.

## Components Used

- ESP32 Development Board
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires

## Working

The HC-SR04 uses ultrasonic sound waves to measure distance.

The ESP32 sends a short 10-microsecond pulse to the TRIG pin, which triggers the sensor to send an ultrasonic wave.

The sound wave travels toward an object, reflects from it, and returns to the sensor.

The ECHO pin provides the time taken by the sound wave to travel to the object and return.

The distance is then calculated using the measured echo duration.

## Basic Process

ESP32 sends trigger pulse  
↓  
HC-SR04 sends ultrasonic wave  
↓  
Wave reflects from the object  
↓  
ECHO pulse duration is measured  
↓  
Distance is calculated  
↓  
Distance is displayed on the Serial Monitor

## Distance Calculation

The distance is calculated using:

`Distance = Duration × 0.0343 / 2`

The division by 2 is required because the measured time includes both the journey toward the object and the return journey back to the sensor.

## Pin Configuration

- TRIG → OUTPUT
- ECHO → INPUT

## Concepts Practiced

- Ultrasonic sensor interfacing
- Digital input and output
- `digitalWrite()`
- `delayMicroseconds()`
- `pulseIn()`
- Measuring echo duration
- Distance calculation
- Serial Monitor output

## Learning Outcome

Through this project, I learned how the HC-SR04 ultrasonic sensor works and how an ESP32 can calculate distance by measuring the travel time of an ultrasonic pulse.

I also learned the basic reusable HC-SR04 workflow:

**Trigger Pulse → Measure Echo Duration → Calculate Distance**

## Simulation

Wokwi Simulation: https://wokwi.com/projects/469826974421036033
