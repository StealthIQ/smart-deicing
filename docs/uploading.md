# Uploading Later

This repository does not assume the Arduino tools are installed yet. These are the future steps to follow once the tools are installed.

## Future upload flow

1. Connect the Arduino Uno to the laptop with a USB data cable.
2. Detect the board port, for example `/dev/ttyACM0`.
3. Make sure the correct board core is installed for Arduino Uno.
4. Compile the sketch.
5. Upload the sketch to the detected port.
6. Open a serial monitor at `9600` baud to view temperature and heater status messages.

## Expected runtime behavior

- The Arduino reads the LM35 on `A0`.
- The Arduino writes the heater indicator state to `D8`.
- Serial output prints the measured temperature and whether the heater is `ON` or `OFF`.

## Troubleshooting note

If upload fails because of serial permissions, see the serial-permission troubleshooting notes that will be documented in `docs/install-later.md`.
