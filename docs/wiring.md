# Wiring Guide

This project uses an Arduino Uno, one LM35 temperature sensor, and one LED as the safe stand-in for a heater.

## Connection table

| Part | Pin | Connect to |
| --- | --- | --- |
| LM35 | Left pin (`VCC`) | Arduino `5V` |
| LM35 | Middle pin (`OUT`) | Arduino `A0` |
| LM35 | Right pin (`GND`) | Arduino `GND` |
| LED | Long leg (`+`) | Arduino `D8` |
| LED | Short leg (`-`) | `220Ω` resistor |
| Resistor | Other side | Arduino `GND` |

## Text diagram

```text
Arduino Uno

5V  ----------------------> LM35 left pin
A0  ----------------------> LM35 middle pin
GND ----------------------> LM35 right pin

D8  ----------------------> LED long leg
LED short leg ------------> 220 ohm resistor ------------> GND
```

## Quick notes

- The LM35 flat side facing you usually means left=`VCC`, middle=`OUT`, right=`GND`.
- The LED long leg is positive and the short leg is negative.
- The LED is the demo output. It represents the heater turning on without placing a real heating load on the Arduino pin.
