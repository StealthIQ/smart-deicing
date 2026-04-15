# Testing Flow

These are the staged checks for later manual testing. They are written now so the team has a clear sequence to follow.

## Stage 1: LED-only check

Goal: confirm the LED wiring is correct before involving the sensor.

- Load a simple blink sketch later.
- Confirm the LED on `D8` turns on and off.
- If the LED does not blink, recheck the LED polarity and resistor path to `GND`.

## Stage 2: Sensor-reading check

Goal: confirm the LM35 is wired correctly and the board prints temperature values.

- Load the Arduino runtime sketch later.
- Open the serial monitor at `9600` baud.
- Confirm temperature values appear in the output.
- If the values look wrong, check LM35 orientation and the `A0` connection.

## Stage 3: Threshold-demo check

Goal: confirm the system turns the output on when the measured temperature is below the threshold.

- Cool the sensor with a safe classroom method later, such as a cold pack.
- Watch the printed temperature drop.
- Confirm the LED turns on when the value goes below the configured threshold.
- Confirm the LED turns off again when the temperature rises above the threshold.
