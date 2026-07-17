# Temperature and Humidity Monitoring using ESP32 and DHT22

## Overview

This project uses a DHT22 sensor with an ESP32 to measure temperature and humidity.

The sensor readings are displayed on the Serial Monitor. An LED is also controlled automatically based on the measured temperature.

## Components Used

- ESP32 Development Board
- DHT22 Temperature and Humidity Sensor
- LED
- Resistor
- Breadboard
- Jumper Wires

## Working

The DHT22 sensor continuously measures:

- Temperature in degrees Celsius (°C)
- Relative Humidity (%)

The ESP32 reads these values and displays them on the Serial Monitor.

The LED is controlled based on the following condition:

- Temperature > 30°C → LED ON
- Temperature ≤ 30°C → LED OFF

## System Logic

DHT22 Sensor
      ↓
ESP32 reads Temperature and Humidity
      ↓
Displays readings on Serial Monitor
      ↓
Checks Temperature
      ↓
Temperature > 30°C?
      ↓
YES → LED ON
NO  → LED OFF

## Concepts Practiced

- Sensor interfacing with ESP32
- Using the DHT sensor library
- Reading temperature and humidity
- `dht.readTemperature()`
- `dht.readHumidity()`
- `Serial.begin()`
- `Serial.print()` and `Serial.println()`
- `if-else` conditional logic
- Controlling an output based on sensor data

## Learning Outcome

Through this project, I learned how to interface a DHT22 sensor with the ESP32, read environmental data, and use sensor readings to automatically control an output based on a predefined condition.

This project helped me understand the basic embedded systems pattern:

**Sensor Input → Data Processing → Decision → Output Control**

## Simulation

Wokwi Simulation:  https://wokwi.com/projects/469814958080987137
