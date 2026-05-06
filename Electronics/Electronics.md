# CORRECT WIRING DESIGN

##  Power System

- Battery → TP4056 (charging + protection)
- TP4056 OUT → MT3608 Boost → 5V output
- 5V → ESP32 VIN pin
- GND → Common everywhere

##  Ultrasonic Sensors Wiring

- Each Sensor:
  - VCC → 5V
  - GND → GND
  - TRIG → ESP32 GPIO
  - ECHO → Voltage Divider → ESP32 GPIO
- Voltage Divider (MANDATORY):
  - 1kΩ + 2kΩ resistors
  - Reduces 5V → ~3.3V

##  GPIO Mapping (Optimized)

| Sensor | TRIG   | ECHO   |
|--------|--------|--------|
| Front  | GPIO 12 | GPIO 13 |
| Left   | GPIO 25 | GPIO 26 |
| Right  | GPIO 27 | GPIO 14 |
| Down   | GPIO 18 | GPIO 19 |

##  Vibration Motors Circuit

- Each Motor:
  - ESP32 GPIO → 1k resistor → Base of 2N2222
  - Emitter → GND
  - Collector → Motor (-)
  - Motor (+) → 5V
  - Diode across motor (reverse biased)
- GPIO:
  - Left Motor → GPIO 32
  - Right Motor → GPIO 33
  - Front Motor → GPIO 15