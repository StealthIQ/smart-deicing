# Install Later

This file lists optional and required setup for environments where tools are not yet installed.

## Required

### Arduino CLI

Use Arduino CLI as the main command-line workflow for board core management, sketch compilation, upload, and serial monitoring.

For Arch Linux:

```bash
sudo pacman -S arduino-cli
```

After installing Arduino CLI, install the Arduino Uno board core with:

```bash
arduino-cli --config-file arduino-cli.yaml core update-index
arduino-cli --config-file arduino-cli.yaml core install arduino:avr
```

## Optional

### PlatformIO Core

Use this only if you want the optional PlatformIO build path defined in `platformio.ini`.

For Arch Linux:

```bash
sudo pacman -S platformio-core
```

### Wokwi

Use this only if you want simulation later with `wokwi.toml` and `diagram.json`.

- Install the Wokwi tooling you prefer later.
- Keep it optional because the repository is already structured without requiring simulation.

## Serial permission troubleshooting

If the board is detected but upload or monitor access fails, the problem is often serial-port permissions.

Typical future checks:

- Confirm the board appears under a device such as `/dev/ttyACM0`.
- Confirm your user has access to the serial device group used on your system.
- Reconnect the board and retry after permission changes.

## Other Linux distributions

- Debian/Ubuntu-based systems: install Arduino CLI with the package or official release method available on your machine.
- Fedora-based systems: use the matching package workflow for Arduino CLI.

The project structure stays the same regardless of distro.
