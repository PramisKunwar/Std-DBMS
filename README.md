# C Programming - Menu-Driven Task Manager

This project consolidates 11 separate C programs into a single, interactive menu-driven application. Each task lives in its own dedicated source file, keeping the codebase modular, readable, and easy to extend. Users simply pick a task from the numbered menu and the program handles the rest.

---

| Screenshot 1 | Screenshot 2 | Screenshot 3 |
|--------------|--------------|--------------|
| ![Terminal-Project](/Terminal2.0.png) | ![Terminal-Project](/Terminal-2.0-1.png) | ![Terminal-Project](/Terminal-2.0-2.png) |

| Screenshot 4 | Screenshot 5 | Screenshot 6 |
|--------------|--------------|--------------|
| ![Terminal-Project](/Terminal-2.0-3.png) | ![Terminal-Project](/Terminal-2.0-4.png) | ![Terminal-Project](/Terminal-2.0-5.png) |

---

## File Structure

```
.
├── menu.c              # Entry point - main menu and navigation loop
├── tasks.h             # Function prototypes for all 11 tasks
├── utils.h             # Shared utility functions (banner, separator, messages, progress bar)
├── ResultCal.c         # Task 1  - Average marks and failed student count
├── Greatest.c          # Task 2  - Greatest among 10 numbers
├── Order.c             # Task 3  - Sort numbers ascending and descending
├── MatrixAdd.c         # Task 4  - 3x3 matrix addition
├── MatrixMul.c         # Task 5  - 3x3 matrix element-wise multiplication
├── PalindromeCheck.c   # Task 6  - Palindrome string checker
├── IntCheck.c          # Task 7  - Positive / Negative / Zero checker
├── MultiTable.c        # Task 8  - Formatted multiplication table
├── SumN.c              # Task 9  - Recursive sum of natural numbers
├── FactN.c             # Task 10 - Recursive factorial
├── FiboN.c             # Task 11 - Recursive Fibonacci series with golden ratio
└── README.md           # This file
```

---

## Tasks Overview

| # | Task | Concepts Used |
|---|------|---------------|
| 1 | Average Marks & Failed Students | Arrays, loops, arithmetic |
| 2 | Greatest Among 10 Numbers | Arrays, comparison logic |
| 3 | Sort Numbers (Asc & Desc) | Bubble sort, nested loops |
| 4 | Add Two 3x3 Matrices | 2D arrays, nested loops |
| 5 | Multiply Two 3x3 Matrices (element-wise) | 2D arrays, nested loops |
| 6 | Palindrome Check | Strings, string reversal, strcmp |
| 7 | Number Sign Checker | Conditionals (if/else if/else) |
| 8 | Multiplication Table | Loops, formatted output |
| 9 | Sum of Natural Numbers | Recursion |
| 10 | Factorial | Recursion |
| 11 | Fibonacci Series | Recursion, golden ratio approximation |

---

## How to Compile

Make sure GCC is installed. Compile all source files together in one command:

**Linux / macOS:**
```bash
gcc -o program menu.c ResultCal.c Greatest.c Order.c MatrixAdd.c MatrixMul.c \
    PalindromeCheck.c IntCheck.c MultiTable.c SumN.c FactN.c FiboN.c -lm
```

**Windows (MinGW / GCC):**
```bash
gcc -o program.exe menu.c ResultCal.c Greatest.c Order.c MatrixAdd.c MatrixMul.c PalindromeCheck.c IntCheck.c MultiTable.c SumN.c FactN.c FiboN.c -lm
```

**Windows (cross-compile from Linux using MinGW-w64):**
```bash
x86_64-w64-mingw32-gcc -o program.exe menu.c ResultCal.c Greatest.c Order.c MatrixAdd.c MatrixMul.c PalindromeCheck.c IntCheck.c MultiTable.c SumN.c FactN.c FiboN.c -static -lm
```

---

## How to Run

**Linux / macOS:**
```bash
./program
```

**Windows:**
```
program.exe
```

Always run from a terminal or command prompt so the window stays open. Double-clicking the .exe will close the window immediately after the program exits.

---

## Design Notes

- **Single compilation unit** - all 11 task files are compiled together and linked via `tasks.h` prototypes. There is no Makefile required.
- **utils.h uses `static inline` functions** - this avoids multiple-definition linker errors when the header is included by multiple .c files.
- **Cross-platform sleep** - `SLEEP(ms)` macro resolves to `Sleep()` on Windows and `usleep()` on Linux/macOS via `#ifdef _WIN32`.
- **Input validation** - the main menu checks `scanf` return value and flushes the input buffer on bad input to prevent infinite loops.
- **No external dependencies** - only standard C library headers are used (`stdio.h`, `stdlib.h`, `string.h`).

---

## Requirements

- GCC 4.8 or later (supports C99/C11 with `for` loop declarations inside blocks)
- Standard C library (no external libraries needed beyond `-lm` for math)

---

## Author

Created as a C programming lab assignment demonstrating modular program design, recursion, arrays, and string operations.
