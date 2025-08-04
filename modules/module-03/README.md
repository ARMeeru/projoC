# Module 3: Adding Our First Task 📌

**Goal**: Store a task in memory and display it interactively with the user

## Features Implemented
- `projo add "task description"` — Adds a single task (in memory only)
- Task is immediately displayed back after being added
- Input validation: missing/too long descriptions handled with error messages

## C Concepts Learned
- Variables and data types: using `char` arrays for strings
- Arrays and strings in C (null-termination, string copying)
- String manipulation (`strcpy`, `strlen`)
- Stack vs heap intro: simple local arrays
- Buffer overflow risks and how to prevent them
- Command-line argument parsing, user validation

## How to Build and Run

### Compile:
```bash
gcc main.c -o projo3
```

### Run Examples:
```bash
./projo3 add "Learn C variables"
./projo3 add
./projo3 add "This description is far too long for the buffer, so it should trigger an error because it exceeds the buffer size of 99 characters, which is all you get for now."
./projo3 help
./projo3 foobar
```

### Expected Outputs:

#### 1. Add a task:
```
Task added:
  1. Learn C variables
```

#### 2. No description provided:
```
Projo - Project Organizer v0.1
Error: No task description provided.
Usage: projo add "your task description"
```

#### 3. Description too long:
```
Projo - Project Organizer v0.1
Error: Task description is too long (max 99 characters).
```

#### 4. Help command:
```
Projo - Project Organizer v0.1
Usage:
  projo help                Show this help message
  projo version             Show version information
  projo add "task desc"      Add a new task in memory
```

#### 5. Unknown command:
```
Projo - Project Organizer v0.1
Error: Unknown command 'foobar'. Try 'projo help'.
```

## Key Learning Points

1. **Guarding against buffer overflow:** Always check input length before copying into arrays.
2. **Stack memory in C:** Local arrays are simple and safe for small data, but not persistent.
3. **Input validation:** Always validate user input and give helpful feedback.
4. **Command-line argument parsing:** Foundation for all interactive CLI tools.

## Next Module
[Module 4: Persistent Storage](../module-04/README.md) — Saving tasks to a file for the first time

---
*Part of the [Projo Learning Series](../../ROADMAP.md)*
