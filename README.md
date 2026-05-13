# LED-Pattern-Left-Right-using-Embedded-C
# Running LED Pattern (Left–Right) using Embedded C

---

## Project Overview

This project demonstrates a **Running LED Pattern** implemented using **Embedded C** on an **AVR microcontroller**.

LEDs connected to PORTD pins glow sequentially from **right to left** and then **left to right**, creating a smooth running light effect.

This project is ideal for beginners learning:

* GPIO Programming
* Embedded C Development
* Bit Manipulation
* Microcontroller Interfacing

---

## Hardware Requirements

* AVR Microcontroller (ATmega328P / ATmega16 / ATmega32)
* 6 LEDs
* 220Ω Current Limiting Resistors
* Breadboard
* Connecting Wires
* Power Supply / USB Programmer

---

## Software Requirements

* Microchip Studio / Atmel Studio
* AVR-GCC Compiler
* Proteus Simulator (Optional)

---

## Circuit Connections

| LED   | Microcontroller Pin |
| ----- | ------------------- |
| LED 1 | PD2                 |
| LED 2 | PD3                 |
| LED 3 | PD4                 |
| LED 4 | PD5                 |
| LED 5 | PD6                 |
| LED 6 | PD7                 |

### Connection Method

* LED **Anode (+)** → PORTD Pins (PD2–PD7)
* LED **Cathode (−)** → 220Ω Resistor → GND

---

## Working Principle

1. PORTD pins **PD2–PD7** are configured as OUTPUT using the `DDRD` register.
2. LEDs glow sequentially using **bit shifting operations**.
3. LEDs move:

   * Right → Left
   * Left → Right
4. Each LED stays ON for **200 ms**.
5. The pattern repeats continuously inside an infinite loop.

---

## Project Structure

```
avr-running-led-pattern/
│
├── main.c        # Embedded C source code
├── README.md     # Project documentation

```

---

## Expected Output

* LEDs glow one after another.
* Motion appears like a **running light**.
* Direction reverses automatically after reaching the end.

---

##

---

## Learning Outcomes

* Understanding AVR PORT registers
* Practical LED interfacing
* Timing control using delays
* Writing structured Embedded C programs

---

##

---

