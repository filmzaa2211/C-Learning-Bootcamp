# C-Learning-Bootcamp
## 🚀 Learning Journey Log

### Day 1: Setup & Hello World
- **Environment Setup:** Installed VS Code, Git, and MinGW (GCC Compiler).
- **Git Basics:** Learned `git clone`, `add`, `commit`, and `push`.
- **First Program:** Created, compiled, and ran `hello.c`.
- **Concept:** Understanding the compilation process (Source code -> Machine code).

### Day 2: Fundamentals of C
- **Variables:** `int`, `float`, `char`.
- **Input/Output:** Using `printf` and `scanf`.
- **Control Flow:** Conditional statements (`if`, `else if`, `else`).
- **Project:** Created a basic Calculator.

### Day 3: Loops & Logic
- **Loops:** Implemented `while` loops and `for` loops.
- **Flow Control:** Using `break` to exit infinite loops.
- **Project:** Number Guessing Game and Multiplication Table.
- **Git:** Added `.gitignore` to exclude `.exe` files.

### Day 4: Arrays & Algorithms
- **Arrays:** Declaration and Zero-based indexing (`arr[0]`).
- **Iteration:** Looping through arrays to process data.
- **Algorithms:**
  - Finding Maximum and Minimum values.
  - Counting Even and Odd numbers.
  - Linear Search (Finding a specific number in an array).

### Day 5: Functions
- **Modular Programming:** Breaking code into reusable blocks.
- **Function Structure:** Return types (`int`, `float`) vs. `void`.
- **Refactoring:** Cleaning up `main()` by moving logic into functions.
- **Projects:** Area Calculator, Weather Checker, and Prime Number Checker.

### Day 6: Refactoring & Organization
- **File Management:** Organized project into `lessons` and `challenges` directories.
- **Review:** Reinforced concepts of "Pass by Value".

### Day 7: Introduction to Pointers
- **Memory Management:** Understanding RAM and Memory Addresses.
- **Address Operator:** Using `&` to find variables' addresses.
- **Pointers:** Declaring pointer variables (`int *ptr`).
- **Dereferencing:** Using `*` to access and modify values via addresses.

### Day 8: Pointers & Functions (Pass by Reference)
- **Advanced Functions:** Understanding the difference between Pass by Value and Pass by Reference.
- **Logic:** Sending memory addresses to functions to modify original variables.
- **Project:** Implemented a `swap()` function using pointers.

### Day 9: Pointers & Functions (Pass by Reference)
- **Concept:** Solved the "Pass by Value" limitation using Pointers.
- **Technique:** Sending memory addresses (`&var`) to functions to modify original data.
- **Project:** Created a `swap()` function to exchange values of two variables directly in memory.

### Day 10: Environment Recovery & Setup
- **Maintenance:** Re-installed GCC Compiler, Git, and VS Code after OS re-installation.
- **Git Troubleshooting:** Fixed "Dubious Ownership" errors and restored Git configuration.

### Day 11: Pointers & Arrays Relationship
- **Insight:** Learned that an Array name is effectively a Pointer to its first element.
- **Technique:** Used **Pointer Arithmetic** (`ptr + i`) to traverse arrays instead of using index brackets `[]`.
- **Practice:** Implemented loops using pointer increment logic (`ptr++`).

### Day 12: Strings (Character Arrays)
- **Concept:** Strings in C are arrays of characters terminated by a **Null Terminator** (`\0`).
- **Input Handling:** Switched from `scanf` (which stops at spaces) to `fgets` for reading full sentences.
- **String Manipulation:**
  - Sanitizing input by removing trailing newlines (`\n`) using `strcspn`.
  - Using `<string.h>` library functions: `strlen` (length) and `strcpy` (copy).
- **Algorithms:**
  - **Vowel Detective:** Counting specific characters (vowels) in a string.
  - **Mirror World:** Reversing a string using a backward loop.
