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
├── include/
│   └── controller.h
├── src/
│   ├── controller.cpp
│   └── main.cpp
├── test/
│   └── test_controller.cpp
└── README.md
```

## Workflow approach

1. Write and review the control logic first.
2. Keep Arduino-specific pin reads and writes out of the reusable controller module.
3. Add hardware/runtime files later in dedicated follow-up tasks.

## Deferred installs

Tool installation is intentionally deferred. A later document will list what to install for Arch Linux and optional tooling.
