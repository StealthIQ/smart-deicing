# Smart De-Icing

CLI-first starter for a beginner-friendly Arduino Uno de-icing demo using an LM35 temperature sensor and an LED as the safe heater indicator.

## What this repository is for

- Keep the core controller logic separate from hardware-specific Arduino code.
- Let the control behavior be reviewed on a laptop before any board upload.
- Prepare the project for a later Arduino CLI, PlatformIO, or Wokwi-based workflow.
- Document the setup slowly and clearly for teammates.

## Current status

- The reusable controller scaffold is present.
- `src/main.cpp` is a host-only harness for laptop-side logic checks.
- No installation, board upload, or simulation has been performed in this session.
- The host-side harness and controller test were compiled and run successfully in this session.

## Project layout

```text
smart-deicing/
├── arduino/
│   ├── arduino.ino
│   ├── controller.h
│   └── main.ino
├── include/
│   └── controller.h
├── diagram.json
├── platformio.ini
├── src/
│   ├── controller.cpp
│   └── main.cpp
├── test/
│   └── test_controller.cpp
├── wokwi.toml
└── README.md
```

## Workflow approach

1. Write and review the control logic first.
2. Keep Arduino-specific pin reads and writes out of the reusable controller module.
3. Add hardware/runtime files later in dedicated follow-up tasks.

## Tooling roles

- `src/main.cpp` is the host-only harness for laptop-side logic checks.
- `arduino/arduino.ino` is the compile-ready Arduino sketch for the Uno + LM35 + LED demo.
- `arduino/main.ino` is kept as the originally requested scaffold file and points to the compile-ready sketch.
- `arduino/controller.h` lets the Arduino build include the shared controller cleanly from the sketch folder.
- `arduino-cli.yaml` prepares a future Arduino CLI workflow without making installation mandatory now.
- `platformio.ini` is optional and points PlatformIO at the `arduino/` folder so it does not try to build the host harness as AVR firmware.
- `wokwi.toml` and `diagram.json` prepare a future simulation path for the same circuit.

## Documentation

- `docs/wiring.md` explains what connects to what.
- `docs/how-it-works.md` explains the sensor, controller, and LED flow in beginner-friendly terms.
- `docs/uploading.md` outlines the future upload path once tools are installed.
- `docs/testing.md` lists the staged checks for LED wiring, sensor reading, and threshold behavior.
- `docs/install-later.md` lists the required and optional tools to install later.

## What is ready now

- The reusable controller scaffold exists.
- The Arduino runtime entry and project config files exist.
- The wiring, explanation, upload, and testing docs exist.
- The repository is structured so the project can be finished later without redesign.

## What to install later

- Arduino CLI for the required command-line upload workflow.
- PlatformIO Core only if you want the optional PlatformIO path.
- Wokwi only if you want optional simulation later.

## Deferred installs

Tool installation is intentionally deferred. See `docs/install-later.md` for the later install list and troubleshooting notes.
