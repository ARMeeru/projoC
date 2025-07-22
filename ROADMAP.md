# 🚀 Projo Learning Roadmap

> Learn C by building a real command-line project organizer, one commit at a time.

## 📋 Table of Contents
- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Learning Path](#learning-path)
  - [Phase 1: Foundations (Modules 1-5)](#phase-1-foundations)
  - [Phase 2: Core Features (Modules 6-10)](#phase-2-core-features)
  - [Phase 3: Advanced Features (Modules 11-15)](#phase-3-advanced-features)
  - [Phase 4: Professional Development (Modules 16-20)](#phase-4-professional-development)
  - [Phase 5: Systems Programming (Modules 21-25)](#phase-5-systems-programming)

## Overview

**Projo** is a command-line task and project organizer that you'll build from scratch. Each module introduces new C concepts through practical features. By the end, you'll have both a useful tool and deep C knowledge.

**Time Estimate**: 3-6 months (1 module per week recommended)

## Prerequisites

- A computer with a terminal (Linux, macOS, or Windows with WSL)
- A text editor (VS Code, Vim, or similar)
- Git installed
- Curiosity and persistence!

---

## Learning Path

### Phase 1: Foundations
*"From Zero to First Feature"*

#### Module 1: Hello, Projo! 🌱
**Goal**: Set up environment and compile your first C program

**Features Implemented**:
- Program prints "Projo - Project Organizer v0.1"
- Basic compilation with gcc

**C Concepts**:
- What is C and why it matters
- The compilation process (preprocessing, compiling, linking)
- `#include` and header files
- The `main()` function
- `printf()` and format specifiers
- Return values

**Commands Learned**:
```bash
gcc main.c -o projo
./projo
```

**Blog Post**: "Why C in 2025? Building Our First Program"

---

#### Module 2: Command-Line Arguments 📝
**Goal**: Make projo respond to user input

**Features Implemented**:
- `projo help` - Shows usage information
- `projo version` - Shows version
- Basic argument parsing

**C Concepts**:
- `argc` and `argv` explained with diagrams
- String comparison with `strcmp()`
- Conditional statements (`if`, `else if`, `else`)
- String literals vs string variables
- Header organization (`stdio.h`, `string.h`)

**Error Handling Introduction**:
- Check if user provided arguments
- Simple error messages

**Comments Style**: Over-commented for learning
```c
// argc tells us HOW MANY arguments were passed
// argv is an ARRAY of strings containing the arguments
```

---

#### Module 3: Adding Our First Task 📌
**Goal**: Store a task in memory and display it

**Features Implemented**:
- `projo add "Learn C variables"` - Adds a task (only in memory)
- Shows the task after adding

**C Concepts**:
- Variables and data types (`char`, `int`)
- Arrays and strings in C
- String manipulation (`strcpy()`, `strlen()`)
- Stack vs heap (introduction)
- Buffer overflow (what happens if task is too long?)

**Error Handling**:
- Check task length
- Validate input exists

---

#### Module 4: Persistent Storage 💾
**Goal**: Save tasks to a file

**Features Implemented**:
- Tasks saved to `tasks.txt`
- `projo add` now persists tasks

**C Concepts**:
- File I/O (`fopen()`, `fprintf()`, `fclose()`)
- File modes ("w", "a", "r")
- Error checking with file operations
- Introduction to pointers (FILE*)
- Path handling basics

**Error Handling Evolution**:
```c
FILE *file = fopen("tasks.txt", "a");
if (file == NULL) {
    fprintf(stderr, "Error: Could not open tasks.txt\n");
    return 1;
}
```

**Platform Considerations**:
- Introduction to file path differences

---

#### Module 5: Listing Tasks 📋
**Goal**: Read and display all tasks

**Features Implemented**:
- `projo list` - Shows all tasks with numbers
- Basic formatting of output

**C Concepts**:
- Reading files (`fgets()`)
- Loops (`while`, `for`)
- Loop control (`break`, `continue`)
- String parsing basics
- Buffer management

**Testing Introduction**:
- First manual test cases
- Test file with empty lines, long lines

---

### Phase 2: Core Features
*"Building a Real Tool"*

#### Module 6: Data Structures 🏗️
**Goal**: Organize code with structures

**Features Implemented**:
- Internal refactoring - no user-visible changes
- Tasks now have ID, description, status

**C Concepts**:
- `struct` definition and usage
- Typedef for cleaner code
- Nested structures
- Memory layout of structures
- Structure initialization

```c
typedef struct {
    int id;
    char description[256];
    int is_completed;
    time_t created_at;
} Task;
```

---

#### Module 7: Dynamic Memory Management 🧮
**Goal**: Handle unlimited tasks

**Features Implemented**:
- Remove 100-task limit
- Dynamic task allocation

**C Concepts**:
- `malloc()`, `calloc()`, `free()`
- Pointer arithmetic
- Memory leaks and how to avoid them
- Valgrind introduction
- Dynamic arrays

**Error Handling**:
- Check malloc return values
- Graceful handling of out-of-memory

**Blog Post**: "Pointers Aren't Scary: A Visual Guide"

---

#### Module 8: Task Completion ✅
**Goal**: Mark tasks as done

**Features Implemented**:
- `projo done 1` - Marks task #1 as completed
- `projo list` shows ✓ for completed tasks

**C Concepts**:
- File modification strategies
- Temporary files
- String formatting with status
- ANSI color codes (introduction)

**Testing**:
- Unit test for task completion
- Edge cases (invalid ID, already completed)

---

#### Module 9: Task Deletion 🗑️
**Goal**: Remove tasks

**Features Implemented**:
- `projo delete 1` - Removes task #1
- Renumber remaining tasks

**C Concepts**:
- Array manipulation
- Memory reallocation (`realloc()`)
- Efficient deletion algorithms
- Data integrity

**Platform Considerations**:
- File locking basics
- Atomic operations

---

#### Module 10: Projects and Hierarchy 📁
**Goal**: Organize tasks into projects

**Features Implemented**:
- `projo add-project "Learn C"`
- `projo add "Read K&R book" --project "Learn C"`
- `projo list --project "Learn C"`

**C Concepts**:
- Linked lists
- Recursive data structures
- Complex memory management
- Pointer to pointers

**Documentation Evolution**:
- Comments become more professional
- Add function documentation

---

### Phase 3: Advanced Features
*"Power User Features"*

#### Module 11: Configuration Files ⚙️
**Goal**: User customization

**Features Implemented**:
- Read `~/.projorc` for settings
- Custom task file location
- Default project setting

**C Concepts**:
- Home directory detection
- Configuration parsing
- String tokenization (`strtok()`)
- Environment variables (`getenv()`)

**Error Handling**:
- Graceful config errors
- Default values

---

#### Module 12: Multi-File Architecture 🏛️
**Goal**: Professional code organization

**Features Implemented**:
- Split into multiple .c and .h files
- Makefile for building

**Project Structure**:
```
src/
├── main.c
├── task.c/task.h
├── project.c/project.h
├── file_io.c/file_io.h
└── config.c/config.h
```

**C Concepts**:
- Header guards
- Static vs external linkage
- Compilation units
- Make basics

**Blog Post**: "From Spaghetti to Architecture"

---

#### Module 13: Priority and Sorting 🎯
**Goal**: Task prioritization

**Features Implemented**:
- `projo add "Fix bug" --priority high`
- `projo list --sort priority`

**C Concepts**:
- Enums for priorities
- Function pointers for sorting
- qsort() usage
- Callback functions
- Switch statements

---

#### Module 14: Date Handling 📅
**Goal**: Due dates and scheduling

**Features Implemented**:
- `projo add "Submit report" --due 2025-08-01`
- `projo list --overdue`
- Show days until due

**C Concepts**:
- Time.h deep dive
- Date parsing algorithms
- Time zone considerations
- Relative time display

**Testing Evolution**:
- Automated test suite with Unity framework
- Mock time for testing

---

#### Module 15: Search and Filter 🔍
**Goal**: Find tasks quickly

**Features Implemented**:
- `projo search "bug"`
- `projo list --status pending --priority high`
- Simple pattern matching

**C Concepts**:
- String search algorithms
- Basic regex concepts
- Complex command-line parsing
- Bitwise flags for filters

---

### Phase 4: Professional Development
*"Industry-Ready Skills"*

#### Module 16: Error Handling System 🚨
**Goal**: Robust error management

**Features Implemented**:
- Centralized error handling
- Error codes and messages
- Logging system

**C Concepts**:
- Error code enums
- Variadic functions for logging
- Debug vs release builds
- Preprocessor macros

**Code Evolution**:
```c
#define LOG_ERROR(fmt, ...) \
    log_message(ERROR, __FILE__, __LINE__, fmt, ##__VA_ARGS__)
```

---

#### Module 17: Performance Optimization ⚡
**Goal**: Handle 10,000+ tasks efficiently

**Features Implemented**:
- Indexed task lookup
- Cached file operations
- Benchmark command

**C Concepts**:
- Profiling with gprof
- Hash tables
- Binary search
- Memory pools
- Cache-friendly structures

**Blog Post**: "From O(n) to O(1): A Performance Journey"

---

#### Module 18: Cross-Platform Support 🌍
**Goal**: Run on Windows, macOS, Linux

**Features Implemented**:
- Platform-specific code isolation
- Consistent path handling
- UTF-8 support

**C Concepts**:
- Conditional compilation
- Platform detection
- Abstract interfaces
- Unicode handling basics

```c
#ifdef _WIN32
    #define PATH_SEPARATOR "\\"
#else
    #define PATH_SEPARATOR "/"
#endif
```

---

#### Module 19: Data Export/Import 📤
**Goal**: Interoperability

**Features Implemented**:
- `projo export --format json`
- `projo import tasks.json`
- CSV support

**C Concepts**:
- JSON generation/parsing
- State machines for parsing
- Memory-efficient streaming
- Format detection

---

#### Module 20: Plugin System 🔌
**Goal**: Extensibility

**Features Implemented**:
- `projo plugin load reminder.so`
- Plugin API
- Sample reminder plugin

**C Concepts**:
- Dynamic libraries
- dlopen/dlsym
- Plugin interfaces
- ABI compatibility
- Function pointer tables

---

### Phase 5: Systems Programming
*"Advanced C Mastery"*

#### Module 21: Signal Handling 🚦
**Goal**: Graceful interruption

**Features Implemented**:
- Ctrl+C saves state
- Auto-save on idle
- Crash recovery

**C Concepts**:
- Signal handlers
- Async-signal safety
- Non-blocking I/O
- State preservation

---

#### Module 22: Concurrent Access 🔄
**Goal**: Multiple users/processes

**Features Implemented**:
- File locking
- Merge conflicts resolution
- Watch mode

**C Concepts**:
- Process management
- File locks (fcntl)
- Shared memory basics
- Race conditions

---

#### Module 23: Network Sync 🌐
**Goal**: Basic client-server sync

**Features Implemented**:
- `projo sync` - Sync with server
- Simple HTTP client

**C Concepts**:
- Socket programming
- HTTP protocol basics
- Network byte order
- Non-blocking sockets

---

#### Module 24: Security Features 🔐
**Goal**: Secure task storage

**Features Implemented**:
- Encrypted task file option
- Access control

**C Concepts**:
- Basic cryptography (using libraries)
- Secure coding practices
- Buffer overflow prevention
- Input sanitization

---

#### Module 25: The Complete Tool 🎉
**Goal**: Polish and release

**Features Implemented**:
- Installer script
- Man page
- Shell completions
- Full test coverage

**C Concepts**:
- Distribution packaging
- Documentation generation
- Continuous integration
- Open source best practices

**Final Blog Post**: "From 'Hello World' to 10,000 Lines: Our C Journey"

---

## 📊 Skill Progression Matrix

| Phase | Memory Mgmt | File I/O | Data Structures | Algorithms | Systems | Testing |
|-------|------------|----------|-----------------|------------|---------|---------|
| 1     | Stack only | Basic    | Arrays          | Linear     | -       | Manual  |
| 2     | Malloc/Free| Advanced | Linked Lists    | Sorting    | -       | Unit    |
| 3     | Pools      | Parsing  | Hash Tables     | Searching  | Signals | Auto    |
| 4     | Optimized  | Formats  | Trees           | Complex    | Network | CI/CD   |
| 5     | Custom     | Encrypted| Custom          | Concurrent | Kernel  | Fuzzing |

---

## 🎯 Success Metrics

By completing this roadmap, you will:
- ✅ Understand pointers at a deep level
- ✅ Write memory-safe C code
- ✅ Build complex data structures
- ✅ Handle errors gracefully
- ✅ Create cross-platform applications
- ✅ Debug with professional tools
- ✅ Optimize for performance
- ✅ Have a portfolio-worthy project

## 🚀 Getting Started

1. Fork the repository
2. Read Module 1's blog post
3. Write your first commit
4. Share your progress with #LearnCWithProjo

Remember: Every expert was once a beginner. Take it one module at a time!

---

*"In C, you don't just learn programming - you learn how computers really work."*
