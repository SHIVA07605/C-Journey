# C++ and DSA Learning

A collection of standalone C++ programs for practicing C++ fundamentals,
object-oriented programming, arrays, algorithms, and data structures.

## Project layout

- `cpp-fundamentals/` — input/output, functions, parameter passing, and complexity.
- `object-oriented-programming/` — constructors and introductory classes.
- `arrays-and-algorithms/` — array operations, sorting, merging, and rotation.
- `data-structures-and-trees/` — binary trees, linked lists, stacks, and queues.
- `incomplete-exercises/` — completed practice examples that began as unfinished
  exercises.
- Root-level `.c++` files — additional algorithm and problem-solving examples.

Each source file is a separate program with its own `main` function. Compile one
file at a time from the project root using a C++17 compiler:

```sh
g++ -std=c++17 cpp-fundamentals/hello-world.cpp -o hello-world
```

On Windows, run the resulting executable with:

```powershell
.\hello-world.exe
```
