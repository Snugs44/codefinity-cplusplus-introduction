# C++ Fundamentals — Codefinity

Small, standalone exercises from my introduction to C++ on Codefinity. Each lesson builds as its own program; this repository is a learning archive, not a single application.

## Lessons

| Lesson | Source | Focus |
| --- | --- | --- |
| Printing basics | [printing_basics.cpp](lessons/01_getting_started/printing_basics.cpp) | Console output and the structure of `main()` |
| Arithmetic operators | [arithmetic_operators.cpp](lessons/02_operators/arithmetic_operators.cpp) | Subtraction, multiplication, integer division, and remainder |

## Build and run

Use a C++17-capable compiler. Run commands from the repository root.

With CMake 3.16 or newer:

```sh
cmake -S . -B build
cmake --build build
./build/printing_basics
./build/arithmetic_operators
```

On Windows with a multi-configuration generator, build with `cmake --build build --config Debug` and run `build\Debug\printing_basics.exe` or `build\Debug\arithmetic_operators.exe`.

To compile a single exercise with GCC instead:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic lessons/01_getting_started/printing_basics.cpp -o printing_basics
./printing_basics
```

The printing exercise outputs `Message`. The arithmetic exercise uses integer arithmetic: `500 / 3` produces `166`, and `500 % 3` produces `2`.

## Organization

Lessons are ordered by topic. Use descriptive `snake_case.cpp` filenames and keep each exercise independently runnable. Generated build output is excluded from version control.

The original exercise source is preserved unchanged. The cleanup only moves the two files and adds documentation/build configuration:

| Previous path | Current path |
| --- | --- |
| `getting_started/printing_basics/code` | `lessons/01_getting_started/printing_basics.cpp` |
| `introduction_to_operators/arithmetic_operators/code` | `lessons/02_operators/arithmetic_operators.cpp` |
