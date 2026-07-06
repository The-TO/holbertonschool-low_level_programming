<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/c_basics" rel="noopener">
 <img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/46/1/1762796733-gemini-generated-image-xh64fjxh64fjxh64.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Malloc_free - C Programming Fundamentals</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)

</div>


## About <a name = "about"></a>
This project is part of the "low-level programming" curriculum at Holberton School. The main objective is to understand and implement dynamic memory management functions in C, similar to `malloc` and `free`.

This directory contains a series of exercises or custom functions that manually allocate and free memory, reinforcing the understanding of pointers, memory (stack vs. heap), and resource management.

## Getting Started <a name = "getting_started"></a>
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites
To compile and run this project, you will need:

* A C compiler (e.g., `gcc`)
* A `bash` environment (recommended: Linux/Ubuntu)
* `git` utilities (to clone the repository)

### Installing
Follow these steps to compile and test the programs.

1.  **Clone the repository**
    ```bash
    git clone [https://github.com/hugou74130/holbertonschool-low_level_programming.git](https://github.com/hugou74130/holbertonschool-low_level_programming.git)
    ```

2.  **Navigate to the project directory**
    ```bash
    cd holbertonschool-low_level_programming/malloc_free
    ```

3.  **Compile an exercise**
    Holberton projects are typically compiled with test `main.c` files. Replace `0-main.c` and `0-create_array.c` with the relevant files for the exercise you are testing.
    ```bash
    # Example compilation for Task 0
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-create_array.c -o 0-create
    ```

4.  **Run the program**
    ```bash
    ./0-create
    ```

## Usage <a name = "usage"></a>
Each `*.c` file (e.g., `0-create_array.c`, `1-strdup.c`, etc.) contains a specific function related to memory management. To use or test them, you must:

1.  Consult the `main.h` header file (if provided) to see the function prototypes.
2.  Create or use a `main.c` file that includes this header and calls the function you want to test.
3.  Compile your `main.c` file, linking it with the corresponding function's `.c` file (as shown in the *Installing* section).

For example, to test the `_strdup` function (if it is in `1-strdup.c` and tested by `1-main.c`):
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-strdup.c -o 1-strdup
./1-strdup
