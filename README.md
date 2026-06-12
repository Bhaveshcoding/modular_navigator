# Modular Navigator

![Home Render](IMAGES/Render/RENDER_HOME.jpg)

## A Modular Haptic Navigation Device for the Visually Impaired

Modular Navigator is a portable assistive navigation device designed to help visually impaired users detect obstacles and navigate more safely using directional haptic feedback.

The device is designed to continuously scan the environment using four ultrasonic sensors positioned around the enclosure. Distance measurements are intended to be processed by an ESP32 microcontroller, which activates vibration motors corresponding to the direction of nearby obstacles.

Unlike traditional navigation aids that rely on audio feedback, Modular Navigator focuses on intuitive vibration-based feedback. This allows users to remain aware of surrounding sounds while still receiving important environmental information.

The system is fully rechargeable, compact, modular, and housed inside a custom-designed 3D printable enclosure that was developed specifically for this project.

---

# Project Status

🚧 **Current Stage: Design & Engineering Phase**

Modular Navigator is currently in the design and development stage.

The following components of the project have been completed:

* CAD enclosure design
* Electronics architecture
* Wiring schematic
* Component selection
* Bill of Materials (BOM)
* Firmware planning
* Wokwi simulation setup
* Manufacturing file preparation

The following stages are planned for future development:

* Physical assembly
* Hardware integration
* Firmware deployment
* System validation
* Real-world testing
* Design iteration and optimization

This repository documents the complete engineering design of the project and contains all files required to reproduce the current design.

---

# Project Overview

## What Does It Do?

Modular Navigator is designed to provide real-time obstacle awareness through directional vibration feedback.

The device monitors four key directions:

* Front
* Left
* Right
* Downward

When an obstacle is detected, the corresponding vibration motor is intended to activate, allowing the user to immediately understand where the hazard is located.

For example:

| Detected Hazard              | Feedback                        |
| ---------------------------- | ------------------------------- |
| Obstacle on Left             | Left vibration motor activates  |
| Obstacle on Right            | Right vibration motor activates |
| Obstacle Ahead               | Front vibration motor activates |
| Stairs, ledges, or drop-offs | Warning vibration pattern       |

This enables the user to build an understanding of their surroundings without requiring visual information.

---

# Why I Made This

I wanted to build something that solves a real-world problem rather than creating another generic electronics project.

While researching accessibility technologies, I discovered that many assistive navigation systems can be expensive, difficult to repair, or difficult to customize. I wanted to explore whether a low-cost modular alternative could be created using commonly available components and open-source tools.

The project also allowed me to learn several engineering disciplines at once:

* Embedded systems development
* Electronics integration
* Battery-powered design
* CAD modelling
* Product enclosure design
* Rapid prototyping
* Accessibility-focused engineering

What started as a simple idea eventually became a complete hardware design combining electronics, firmware planning, CAD development, and manufacturing considerations into a single project.

---

## Repository Highlights

✅ Complete Fusion 360 CAD Source Files

✅ STL Files Ready For 3D Printing

✅ Full ESP32 Firmware Source Code

✅ Complete Electronics Documentation

✅ KiCad Schematic Included

✅ Wiring Diagram Included

✅ Bill of Materials Included

✅ Design Journal Included

✅ Wokwi Simulation Included

✅ Detailed Build Instructions Included

✅ Fully Assembled Renders Included

✅ Exploded Assembly Views Included

✅ Open Source Hardware Project

---

# Fully Assembled Device

The images below show the final designed assembly.

## Front Render

![Home Render](IMAGES/Render/RENDER_HOME.jpg)

These renders show:

* Final enclosure design
* Sensor placement
* Internal electronics integration
* Overall form factor
* Intended user-facing design

---

# Interactive 3D Model

The complete assembly can be viewed interactively using the STL model below:

[Open Interactive 3D Mesh Grid View](CAD%20files/Model/Model_with%20electronics/ModularNavigator_Enclosure_v1_with_electronics.stl)

This model includes:

* Enclosure
* ESP32
* Battery
* Charging system
* Sensors
* Vibration motors
* Internal mounting structure

---

# System Architecture

The device consists of four primary subsystems.

## 1. Sensing System

The sensing system is responsible for detecting nearby obstacles.

### Components

* 4× HC-SR04 Ultrasonic Sensors

### Coverage

| Sensor          | Purpose                               |
| --------------- | ------------------------------------- |
| Front Sensor    | Detects objects ahead                 |
| Left Sensor     | Detects objects on the left side      |
| Right Sensor    | Detects objects on the right side     |
| Downward Sensor | Detects stairs, ledges, and drop-offs |

The sensors are intended to continuously measure distance by transmitting ultrasonic pulses and calculating the time required for the echo to return.

---

## 2. Processing System

The ESP32 serves as the central controller.

### Responsibilities

* Reading sensor measurements
* Processing obstacle distances
* Determining obstacle direction
* Generating haptic feedback
* Managing system operation

The ESP32 was selected because it provides:

* Sufficient GPIO pins
* Fast processing
* Low power consumption
* Built-in wireless capability for future upgrades

---

## 3. Haptic Feedback System

The feedback system consists of three vibration motors.

Rather than using audio notifications, vibration feedback allows users to remain aware of their surroundings while receiving directional information.

### Motor Mapping

| Motor       | Purpose                |
| ----------- | ---------------------- |
| Left Motor  | Left obstacle warning  |
| Right Motor | Right obstacle warning |
| Front Motor | Front obstacle warning |

Different vibration patterns may also be implemented in future versions.

---

## 4. Power System

The power system allows completely portable operation.

### Components

* 3.7V Li-Po Battery
* TP4056 Charging Module
* MT3608 Boost Converter

### Functions

* USB charging
* Battery protection
* Voltage regulation
* Portable operation

---

# How It Works

The system is intended to operate through the following sequence:

1. Ultrasonic sensors emit ultrasonic pulses.
2. Reflected signals are measured.
3. Distances are calculated by the ESP32.
4. Hazard direction is identified.
5. Corresponding vibration motors are activated.
6. The user receives immediate directional feedback.

This process is intended to repeat continuously in real time once the hardware is assembled and programmed.

---

# Exploded Views

The following exploded views illustrate how the device is assembled internally.

## Top Exploded View

![Exploded Top](IMAGES/Exploded%20View/Exploded%20View_top.jpg)

Shows:

* Sensor locations
* Lid mounting points
* Internal component layout

---

## Side Exploded View

![Exploded Side](IMAGES/Exploded%20View/Exploded%20View_side.jpg)

Shows:

* Battery placement
* Vertical stacking arrangement
* Wiring clearance

---

## Home Exploded View

![Exploded Home](IMAGES/Exploded%20View/Exploded%20View_home.jpg)

Shows:

* Complete assembly hierarchy
* Component relationships
* Internal architecture

---

# Electronics

## Wiring Diagram

![Electronics Map](Electronics/Electronics.jpg)

The wiring diagram above shows the complete electrical architecture of the project.

This includes:

* ESP32 connections
* Ultrasonic sensors
* Vibration motors
* Battery system
* Charging module
* Boost converter
* Voltage divider circuits

```
```
# Hardware Used

| Component          | Quantity | Purpose             |
| ------------------ | -------- | ------------------- |
| ESP32 Dev Board    | 1        | Main controller     |
| HC-SR04 Sensors    | 4        | Obstacle detection  |
| Vibration Motors   | 3        | Haptic feedback     |
| TP4056             | 1        | Battery charging    |
| MT3608             | 1        | Voltage boosting    |
| 3.7V Li-Po Battery | 1        | Portable power      |
| 2N2222 Transistors | 3        | Motor drivers       |
| 1N4007 Diodes      | 3        | Flyback protection  |
| Resistors          | Multiple | Signal conditioning |

---

# Bill of Materials (BOM)

The complete bill of materials used to build Modular Navigator is provided in:

```text
BOM.csv
```

## Cost Breakdown

| Component             | Qty    | Cost (USD) |
| --------------------- | ------ | ---------- |
| ESP32 DevKit V1       | 1      | $4.75      |
| HC-SR04 Sensors       | 4      | $4.28      |
| Coin Vibration Motors | 3      | $2.49      |
| 2N2222 Transistors    | 3      | $0.29      |
| 1N4007 Diodes         | 3      | $0.06      |
| 1kΩ Resistors         | 3      | $0.03      |
| 3.7V Li-Po Battery    | 1      | $0.95      |
| TP4056 Charger Module | 1      | $0.19      |
| Jumper Wires (M-M)    | 1 Pack | $0.28      |
| Jumper Wires (M-F)    | 1 Pack | $0.25      |
| Breadboard            | 1      | $0.59      |
| 330Ω Resistor         | 1      | $0.01      |
| PLA Filament          | 1      | $4.00      |
| Super Glue            | 1      | $2.89      |
| M3 Screws             | 6      | $0.11      |
| M3 Hex Nuts           | 6      | $0.07      |
| Foam Padding          | 1      | $2.14      |
| M1.6 Screws           | 16     | $0.54      |

### Total Project Cost

**$23.93 USD**

The project was intentionally designed using affordable and commonly available components while maintaining functionality, repairability, and expandability.

---

# PCB / Electronics Implementation

This project currently uses direct wiring rather than a custom PCB.

The electronics are intended to be mounted inside the enclosure using dedicated mounting locations designed during the CAD stage.

Future versions may replace the wiring with a custom PCB to:

* Reduce assembly complexity
* Improve reliability
* Reduce size
* Improve manufacturability

---

# Firmware

The firmware can be found in:

```text
FIRMWARE/main.ino
```

Main firmware responsibilities:

* Distance measurement
* Obstacle classification
* Feedback generation
* Hazard detection
* Power-efficient operation

The firmware is designed to:

1. Read distance measurements from all ultrasonic sensors.
2. Determine obstacle location and severity.
3. Activate the appropriate vibration motor.
4. Generate warning patterns for hazardous situations.
5. Manage continuous environmental monitoring.

---

# Wokwi Simulation

Before physical assembly, the system logic was planned for validation using Wokwi simulation.

## Goals

* Validate GPIO assignments
* Verify sensor behaviour
* Test vibration logic
* Debug firmware
* Evaluate overall system architecture

### Simulation Link

https://wokwi.com/projects/461725213892270081

---

# How To Build

## Step 1 – Print The Enclosure

Files:

```text
CAD files/Printing Parts/
```

Recommended Settings:

* PLA Material
* 0.2 mm Layer Height
* 15–20% Infill
* Supports where required

The enclosure consists of:

* Main body
* Removable lid
* Internal mounting structure

---

## Step 2 – Install Components

Mount the following components inside the enclosure:

* ESP32 Development Board
* HC-SR04 Sensors
* Vibration Motors
* Battery
* TP4056 Module
* MT3608 Module

Ensure that all components align with the mounting locations designed in the CAD model.

---

## Step 3 – Complete Wiring

Follow:

```text
Electronics/Electronics.md
```

and

```text
Electronics/Electronics.jpg
```

to complete all electrical connections.

Important Notes:

* Use voltage dividers on all HC-SR04 ECHO pins.
* Ensure all grounds are connected together.
* Verify motor polarity before final assembly.
* Confirm battery polarity before connecting power.

---

## Step 4 – Upload Firmware

Open:

```text
FIRMWARE/main.ino
```

Upload the firmware to the ESP32 using Arduino IDE.

Requirements:

* ESP32 Board Package
* USB Cable
* Arduino IDE

Verify that all sensors respond correctly before proceeding.

---

## Step 5 – Final Assembly

After verifying wiring and firmware:

* Route wires through internal channels.
* Secure all components.
* Attach enclosure lid.
* Tighten mounting screws.
* Inspect for loose wiring.

Once assembled and programmed, the device will be ready for testing and evaluation.

---

# Zine

![Zine](IMAGES/ZINE.jpg)

The project zine provides a concise overview of the concept, design process, and intended functionality of Modular Navigator.
# Repository Structure

```text
├── CAD files
│   │
│   ├── Miscellaneous Parts_&_Images
│   │   ├── ESP32 dev board
│   │   ├── HCSR04 sensor
│   │   ├── Hackclub Logo
│   │   ├── TP4056 MINI
│   │   └── Vibrator Motor
│   │
│   ├── Model/Model_with electronics
│   │   ├── ASCII.txt
│   │   ├── ModularNavigator_Enclosure_v1.f3d
│   │   ├── ModularNavigator_Enclosure_v1.step
│   │   ├── ModularNavigator_Enclosure_v1_with_electronics.f3z
│   │   ├── ModularNavigator_Enclosure_v1_with_electronics.step
│   │   └── ModularNavigator_Enclosure_v1_with_electronics.stl
│   │
│   └── Printing Parts/3D print
│       ├── LID_print.f3d
│       ├── LID_print.step
│       ├── ModularNavigator_Enclosure_v1.f3d
│       └── ModularNavigator_Enclosure_v1.step
│
├── Electronics
│   ├── Electronics.jpg
│   ├── Electronics.md
│   └── Modular_navigator_schematic.kicad_sch
│
├── FIRMWARE
│   └── main.ino
│
├── IMAGES
│   │
│   ├── Exploded View
│   │   ├── Exploded View_home.jpg
│   │   ├── Exploded View_side.jpg
│   │   └── Exploded View_top.jpg
│   │
│   ├── Render
│   │   ├── RENDER_HOME.jpg
│   │   ├── RENDER_SIDE.jpg
│   │   └── RENDER_TOP.jpg
│   │
│   ├── ZINE.jpg
│   └── ZINE.pdf
│
├── BOM.csv
├── LICENSE
├── PLANNING DESIGN STAGE.md
├── modular-navigator-journal.md
├── README.md
└── .gitignore
```

---

# Files Included

This repository contains everything required to understand, reproduce, modify, and improve the project.

## CAD Files

Located inside:

```text
CAD files/
```

Includes:

* Fusion 360 source files (.f3d)
* STEP exports
* STL exports
* Printable enclosure files
* Full assembly models

---

## Electronics Documentation

Located inside:

```text
Electronics/
```

Includes:

* Wiring diagrams
* Electronics documentation
* Complete KiCad schematic
* Component integration references

---

## Firmware

Located inside:

```text
FIRMWARE/
```

Includes:

* ESP32 source code
* Sensor processing logic
* Haptic feedback control logic
* GPIO configuration

---

## Documentation

Includes:

* README
* Planning documents
* Design journal
* Bill of Materials
* Build instructions

---

## Visual Assets

Includes:

* Product renders
* Exploded assembly views
* Zine
* Component references

Everything required to reproduce the project has been included in this repository.

---

# Planned Testing

Once the physical prototype is assembled, the following validation tests will be performed.

| Test                        | Objective                                    |
| --------------------------- | -------------------------------------------- |
| Front Obstacle Detection    | Verify forward sensing performance           |
| Left Obstacle Detection     | Verify left-side obstacle detection          |
| Right Obstacle Detection    | Verify right-side obstacle detection         |
| Downward Hazard Detection   | Verify stair and ledge detection             |
| Haptic Feedback Validation  | Confirm correct motor activation             |
| Charging System Test        | Verify battery charging functionality        |
| Battery Runtime Test        | Measure operating duration                   |
| Real-World Navigation Trial | Evaluate usability in practical environments |

Results from these tests will be documented in future project updates.

---

# Future Improvements

The current design successfully demonstrates the intended architecture of an obstacle detection and haptic navigation device, but several future upgrades are planned.

## Electronics

* Custom PCB Design
* Integrated charging circuitry
* Reduced wiring complexity
* Improved power efficiency
* Smaller electronics footprint

## Mechanical Design

* Waterproof enclosure
* Improved ergonomics
* Reduced enclosure size
* Improved serviceability
* Wearable mounting system

## Software

* Adjustable sensitivity settings
* Multiple vibration patterns
* Battery monitoring system
* Power-saving modes
* Advanced warning logic

## Connectivity

* Bluetooth support
* Wireless configuration
* Mobile application integration
* OTA firmware updates

## Accessibility Features

* GPS-assisted navigation
* Voice guidance system
* AI-powered object recognition
* Advanced hazard classification
* Route assistance features

---

# Lessons Learned

Although the project is currently in the design phase, developing Modular Navigator provided valuable experience across multiple engineering disciplines.

Throughout the project, I learned:

* CAD modelling and enclosure design
* Mechanical assembly planning
* Embedded systems architecture
* Electronics integration
* Battery-powered system design
* Component selection and sourcing
* Firmware planning
* Accessibility-focused product design
* Technical documentation
* Open-source hardware workflows

One of the most valuable lessons was understanding how mechanical, electrical, and software systems must be designed together as a complete product rather than as separate subsystems.

The project also provided hands-on experience with designing for manufacturability, maintainability, and future expansion.

---

# Final Notes

Modular Navigator represents a complete engineering design workflow, from concept development and research to CAD modelling, electronics design, firmware planning, simulation, documentation, and manufacturing preparation.

The project was created with the goal of exploring affordable assistive technology while developing practical skills in hardware engineering and product design.

While the current repository documents a fully developed design, future work will focus on physical assembly, validation, testing, and iterative improvements based on real-world performance.

Thank you for taking the time to explore the project.

If you would like to contribute, improve the design, or build your own version, feel free to fork the repository and experiment with the hardware.
