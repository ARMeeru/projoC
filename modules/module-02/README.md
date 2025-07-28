# Module 2: Command-Line Arguments 📝

**Goal**: Make Projo respond to user input

## Features Implemented
- `projo help` — Shows usage information
- `projo version` — Shows version
- Basic argument parsing and command recognition

## C Concepts Learned
- `argc` and `argv`: What they are and how command-line arguments work
- String comparison with `strcmp()`
- Conditional statements (`if`, `else if`, `else`)
- String literals vs string variables
- Organizing headers: `#include <stdio.h>`, `#include <string.h>`
- Error handling for missing or unknown arguments

## How to Build and Run

### Compile:
```bash
gcc main.c -o projo2
```

### Run Examples:
```bash
./projo2 help
./projo2 version
./projo2 something-else
./projo2
```

### Expected Outputs:

#### 1. No arguments:
```
Projo - Project Organizer v0.1
Error: No command provided. Try 'projo help' for usage.
```

#### 2. Help:
```
Projo - Project Organizer v0.1
Usage:
  projo help     Show this help message
  projo version  Show version information
```

#### 3. Version:
```
Projo - Project Organizer v0.1
```

#### 4. Unknown argument:
```
Projo - Project Organizer v0.1
Error: Unknown command 'something-else'. Try 'projo help'.
```

## Key Learning Points

1. **`argc`** tells you HOW MANY arguments are provided (argument count).
2. **`argv`** is an ARRAY of strings (character pointers) containing the arguments.
3. **`strcmp()`** allows you to compare two strings for equality in C.
4. **Error handling**: Always check for expected input and inform the user when using the command incorrectly.
5. **Well-commented code** makes it easy to follow the logic step-by-step.

## Next Module
[Module 3: Adding Our First Task](../module-03/README.md) — Storing and displaying a task in memory

---
*Part of the [Projo Learning Series](../../ROADMAP.md)*