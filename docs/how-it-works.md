# How It Works

## Big picture

Think of the system like this:

- The LM35 temperature sensor is the input.
- The Arduino Uno is the brain.
- The LED is the output that represents the heater.

The flow is simple: the sensor reads temperature, the Arduino checks whether it is below the threshold, and the LED turns on if the system decides the wing is too cold.

## How the Arduino reads the sensor

The sensor output is connected to `A0`. In the code, the Arduino reads that pin with `analogRead(A0)`. That gives a number between `0` and `1023`.

That number represents a voltage. The runtime code converts the reading into voltage with this idea:

```cpp
float voltage = sensorValue * (5.0f / 1023.0f);
```

For an LM35, the output changes by about `10 mV` per degree Celsius. That is why the code turns voltage into temperature like this:

```cpp
float temperatureCelsius = voltage * 100.0f;
```

## How the decision works

The reusable controller keeps one job only: compare the current temperature against a threshold.

- If the temperature is below the threshold, `heaterOn` becomes `true`.
- If the temperature is at or above the threshold, `heaterOn` becomes `false`.

This keeps the logic easy to test on a laptop without requiring the Arduino board.

## How the output turns on

After the controller makes a decision, the Arduino runtime writes to pin `D8` with `digitalWrite`.

- `digitalWrite(D8, HIGH)` turns the LED on.
- `digitalWrite(D8, LOW)` turns the LED off.

In this demo, LED on means the system is acting like the de-icing heater is active.
