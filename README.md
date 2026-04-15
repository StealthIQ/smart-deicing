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
- No installation, build, upload, or simulation has been performed in this session.

## Project layout

```text
smart-deicing/
├── arduino/
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
- `arduino/main.ino` is the Arduino runtime entry for the Uno + LM35 + LED demo.
- `arduino-cli.yaml` prepares a future Arduino CLI workflow without making installation mandatory now.
- `platformio.ini` is optional and points PlatformIO at the `arduino/` folder so it does not try to build the host harness as AVR firmware.
- `wokwi.toml` and `diagram.json` prepare a future simulation path for the same circuit.

## Documentation

- `docs/wiring.md` explains what connects to what.
- `docs/how-it-works.md` explains the sensor, controller, and LED flow in beginner-friendly terms.
- `docs/uploading.md` outlines the future upload path once tools are installed.
- `docs/testing.md` lists the staged checks for LED wiring, sensor reading, and threshold behavior.

## Deferred installs

Tool installation is intentionally deferred. A later document will list what to install for Arch Linux and optional tooling.
