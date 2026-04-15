# Testing Flow

These are the staged checks for later manual testing. They are written now so the team has a clear sequence to follow.

## Stage 1: LED-only check

Goal: confirm the LED wiring is correct before involving the sensor.

- Load a simple blink sketch later.
- Confirm the LED on `D8` turns on and off.
- If the LED does not blink, recheck the LED polarity and resistor path to `GND`.

Deferred command idea:

```bash
arduino-cli compile --fqbn arduino:avr:uno arduino
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno arduino
```

Expected outcome later: the LED responds when the runtime output changes.

## Stage 2: Sensor-reading check

Goal: confirm the LM35 is wired correctly and the board prints temperature values.

- Load the Arduino runtime sketch later.
- Open the serial monitor at `9600` baud.
- Confirm temperature values appear in the output.
- If the values look wrong, check LM35 orientation and the `A0` connection.

Deferred command ideas:

```bash
g++ -std=c++17 -Iinclude src/main.cpp src/controller.cpp -o deicing_test
./deicing_test
arduino-cli monitor -p /dev/ttyACM0 -c baudrate=9600
```

Expected outcome later: the host harness prints heater `ON/OFF` transitions, and the board monitor prints temperature plus heater state.

## Stage 3: Threshold-demo check

Goal: confirm the system turns the output on when the measured temperature is below the threshold.

- Cool the sensor with a safe classroom method later, such as a cold pack.
- Watch the printed temperature drop.
- Confirm the LED turns on when the value goes below the configured threshold.
- Confirm the LED turns off again when the temperature rises above the threshold.

Optional deferred PlatformIO path:

```bash
pio run
```

Expected outcome later: the project builds from the `arduino/` folder without trying to treat `src/main.cpp` as AVR firmware.

## Troubleshooting

- If Arduino CLI cannot compile, check that the Uno core is installed.
- If upload fails, check the serial port and see `docs/install-later.md` for permission guidance.
- If PlatformIO is missing, skip it because it is optional.
- If simulation tooling is missing, skip it because Wokwi is optional.
