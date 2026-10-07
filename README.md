# C++ Fundamentals — Codefinity

Small, standalone exercises from my introduction to C++ on Codefinity. Each lesson builds as its own program; this repository is a learning archive, not a single application.

## Lessons

| Lesson | Source | Focus |
| --- | --- | --- |
| Printing basics | [printing_basics.cpp](lessons/01_getting_started/printing_basics.cpp) | Console output and the structure of `main()` |
| Arithmetic operators | [arithmetic_operators.cpp](lessons/02_operators/arithmetic_operators.cpp) | Subtraction, multiplication, integer division, and remainder |

## Build, test, and run

Use a C++17-capable compiler and CMake 3.16 or newer. Start from the repository root:

```sh
cmake -S . -B build
cmake --build build
cd build
ctest --output-on-failure
cd ..
./build/printing_basics
./build/arithmetic_operators
```

On Windows with a multi-configuration generator, build with `cmake --build build --config Debug`, run `ctest -C Debug --output-on-failure` from the `build` directory, and launch `build\Debug\printing_basics.exe` or `build\Debug\arithmetic_operators.exe` from the repository root.

To compile just one exercise with GCC:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic lessons/01_getting_started/printing_basics.cpp -o printing_basics
./printing_basics
```

## Expected behavior

The printing exercise outputs `Message` followed by a newline. The arithmetic exercise uses integers: `500 / 3` produces `166`, and `500 % 3` produces `2`.

Two CTest checks compare the complete program output with the fixtures under `tests/`. Both programs were built and both checks passed locally on Linux with GCC 14.2.0. Windows/MSVC and macOS builds have not been validated in this cleanup.

## Organization and changes

Lessons are ordered by topic. Use descriptive `snake_case.cpp` filenames and keep each exercise independently runnable. Generated build output is excluded from version control.

The first cleanup commit moves the source files without changing them. A separate improvement commit adds named constants, consistent newlines, an explanatory integer-arithmetic comment, and exact-output tests. The original exercises remain in Git history.

| Previous path | Current path |
| --- | --- |
| `getting_started/printing_basics/code` | `lessons/01_getting_started/printing_basics.cpp` |
| `introduction_to_operators/arithmetic_operators/code` | `lessons/02_operators/arithmetic_operators.cpp` |

## Why this works

Each lesson has its own build target, so multiple `main()` functions are never linked into one executable. Named constants make the arithmetic easier to read, and output checks catch accidental behavior changes without requiring a testing dependency.
