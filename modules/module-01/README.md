# Module 1: Hello, Projo! 🌱

**Goal**: Set up environment and compile your first C program

## Features Implemented
- Program prints "Projo - Project Organizer v0.1"
- Basic compilation with gcc

## C Concepts Learned
- What is C and why it matters
- The compilation process (preprocessing, compiling, linking)
- `#include` and header files
- The `main()` function
- `printf()` and format specifiers
- Return values
- Importance of newline characters

## How to Build and Run

### Compile:
```bash
gcc main.c -o projo1
```

### Run:
```bash
./projo1
```

### Expected Output:
```
Projo - Project Organizer v0.1
```

## Key Learning Points

1. **The `#include <stdio.h>` directive** tells the preprocessor to include standard I/O functions
2. **Every C program needs a `main()` function** - it's the entry point
3. **The `\n` in printf is crucial** - without it, your shell prompt appears on the same line
4. **`return 0` indicates success** to the operating system

## Next Module
[Module 2: Command-Line Arguments](../module-02/README.md) - Making projo respond to user input

---
*Part of the [Projo Learning Series](../../ROADMAP.md)*
