# SlotForge

SlotForge is a C++20 slot-game runtime and simulation project focused on game logic, deterministic RNG, payline evaluation, payout calculation, and large-scale RTP simulation.

The project is designed as a small but industry-style engine rather than a hardcoded demo. The core engine is written in C++ and can be used from a CLI, tested with CTest, and later compiled to WebAssembly for a browser-playable demo.

## Goals

- Model a configurable slot-game runtime
- Separate game math from engine logic
- Support deterministic seeded simulations
- Provide a clean C++ API for spin generation and payout evaluation
- Add browser hosting through WebAssembly in a later milestone

## Current Milestone

This first version includes:

- C++20 engine structure
- Weighted reel-symbol generation
- Payline evaluation
- Payout calculation
- RTP simulation from CLI
- CTest-based unit test scaffold
- Sample game configuration
- Web demo placeholder

## Repository Structure

```text
slotforge/
  engine/
    include/slotforge/
    src/
  apps/cli/
  configs/
  tests/
  web/
  docs/
```

## Build Locally

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/slotforge_cli 100000 42
```

Arguments:

```text
slotforge_cli <spin_count> <seed>
```

Example:

```bash
./build/slotforge_cli 1000000 12345
```

## Roadmap

- JSON config loader
- WebAssembly build using Emscripten
- Browser demo with spin button and RTP simulation
- More realistic market-rule validation
- Performance benchmark report
