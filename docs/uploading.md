# Uploading Later

This repository does not assume the Arduino tools are installed yet. These are the future steps to follow once the tools are installed.

## Future upload flow

1. Connect the Arduino Uno to the laptop with a USB data cable.
2. Detect the board port, for example `/dev/ttyACM0`.
3. Make sure the correct board core is installed for Arduino Uno.
4. Compile the sketch with Arduino CLI later.
5. Upload the sketch to the detected port with Arduino CLI later.
6. Open a serial monitor at `9600` baud to view temperature and heater status messages.

## Deferred command outline

These commands are examples for later use after installation:

```bash
arduino-cli board list
arduino-cli compile --fqbn arduino:avr:uno arduino
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno arduino
arduino-cli monitor -p /dev/ttyACM0 -c baudrate=9600
```

The compile-ready sketch file is `arduino/arduino.ino`, which matches the sketch folder name used by the CLI command above.

## Expected runtime behavior

- The Arduino reads the LM35 on `A0`.
- The Arduino writes the heater indicator state to `D8`.
- Serial output prints the measured temperature and whether the heater is `ON` or `OFF`.

## Troubleshooting note

If upload fails because of serial permissions, see the serial-permission troubleshooting notes in `docs/install-later.md`.

If compile fails, the usual first checks are:

- missing Arduino Uno core
- wrong board name or FQBN
- wrong serial port
