# C Programming — Menu-Driven Task Manager

> A modular, menu-driven application bundling **11 classic C programs** into one clean interface.

---

##  Overview

This project consolidates 11 separate C programs into a single, interactive menu-driven application. Each task lives in its own dedicated source file, keeping the codebase modular, readable, and easy to extend. Users simply pick a task from the numbered menu and the program handles the rest.

---
![Terminal-Project](/Terminal.png)
---
![Terminal-Project](/Terminal2.png)
---
![Terminal-Project](/Terminal3.png)
---
![Terminal-Project](/Terminal4.png)
---

##  Tasks Included

| # | Task | Description |
|---|------|-------------|
| 1 | **Average Marks & Failed Students** | Input marks of *n* students, compute the average, and count students who scored below 40 |
| 2 | **Greatest Among 10 Numbers** | Read 10 numbers and identify the largest |
| 3 | **Sort Numbers** | Sort *n* numbers in both ascending and descending order |
| 4 | **Add Two 3×3 Matrices** | Perform element-wise addition of two matrices |
| 5 | **Multiply Two 3×3 Matrices** | Perform element-wise multiplication of two matrices |
| 6 | **Palindrome Check** | Determine whether a given string reads the same forwards and backwards |
| 7 | **Number Sign Checker** | Identify whether a number is positive, negative, or zero |
| 8 | **Multiplication Table** | Print the multiplication table for any given number |
| 9 | **Sum of Natural Numbers** *(recursive)* | Calculate the sum from 1 to N using recursion |
| 10 | **Factorial** *(recursive)* | Compute N! using recursion |
| 11 | **Fibonacci Series** *(recursive)* | Generate the first N terms of the Fibonacci sequence |

---

##  File Structure

```
.
├── menu.c              # Main menu — entry point and user interface
├── tasks.h             # Header file with all function prototypes
├── ResultCal.c         # Task 1  — Average marks and failed students
├── Greatest.c          # Task 2  — Greatest among ten numbers
├── Order.c             # Task 3  — Sorting numbers (asc & desc)
├── MatrixAdd.c         # Task 4  — 3×3 matrix addition
├── MatrixMul.c         # Task 5  — 3×3 matrix multiplication
├── PalindromeCheck.c   # Task 6  — Palindrome checker
├── IntCheck.c          # Task 7  — Number sign checker
├── MultiTable.c        # Task 8  — Multiplication table
├── SumN.c              # Task 9  — Recursive sum of natural numbers
├── FactN.c             # Task 10 — Recursive factorial
└── FiboN.c             # Task 11 — Recursive Fibonacci series
```

---

##  How to Compile

Make sure you have **GCC** installed. Then compile all source files together in one command:

```bash
gcc -o program menu.c ResultCal.c Greatest.c Order.c MatrixAdd.c MatrixMul.c PalindromeCheck.c IntCheck.c MultiTable.c SumN.c FactN.c FiboN.c
```

---

##  How to Run

**Windows** (PowerShell or Command Prompt):
```powershell
.\program
```

**Linux / macOS:**
```bash
./program
```

Once launched, you'll see the main menu. Enter the number of the task you'd like to run and follow the on-screen prompts.

---

##  Features

-  **Clean numbered menu** — straightforward navigation
-  **Input validation** — gracefully handles non-numeric entries
-  **Post-task pause** — output stays visible until you're ready to continue
-  **Modular design** — each task is fully self-contained in its own `.c` file

---

##  Known Issues / Notes

- **Matrix multiplication** (Task 5) performs *element-wise* multiplication, not standard mathematical matrix multiplication (dot product).
- All programs assume valid integer inputs; extensive error-checking is not implemented.

---

##  Future Improvements

- Implement true matrix multiplication using triple-nested loops
- Use dynamic memory allocation for flexible array sizes
- Add file I/O to save and load results
- Extend input validation across all tasks

---

##  Requirements

| Tool | Version |
|------|---------|
| GCC  | Any modern version (≥ 7.x recommended) |
| OS   | Windows, Linux, or macOS |

---

Build for hack club.