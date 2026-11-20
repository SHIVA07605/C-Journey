# C++ Exception Handling

Exceptions provide a way for a function to report an error to its caller. They
separate error handling from the normal path through a program.

Use exceptions for exceptional failures, not for ordinary outcomes such as
finding no search result.

## The `try`, `throw`, and `catch` flow

1. Put code that may fail in a `try` block.
2. Use `throw` to report an error.
3. Handle the exception in a matching `catch` block.

The [compilable example](exception-handling-notes.c++) checks for division by
zero and demonstrates specific, general, and catch-all handlers:

```cpp
#include <iostream>
#include <stdexcept>

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("denominator must not be zero");
    }
    return numerator / denominator;
}

int main() {
    try {
        std::cout << "Result: " << divide(10, 2) << '\n';
        std::cout << "Result: " << divide(10, 0) << '\n';
    } catch (const std::invalid_argument& error) {
        std::cerr << "Invalid argument: " << error.what() << '\n';
    } catch (const std::exception& error) {
        std::cerr << "Standard exception: " << error.what() << '\n';
    } catch (...) {
        std::cerr << "Unknown exception occurred.\n";
    }
}
```

`std::invalid_argument` is declared in `<stdexcept>`. Its `what()` function
returns a human-readable description.

## Catching exceptions

- Catch standard exceptions by `const` reference. This avoids copying and
  preserves polymorphic behavior.
- Order handlers from most specific to most general. For example,
  `std::invalid_argument` must come before `std::exception` because it derives
  from it.
- `catch (...)` matches any exception type but does not provide an error
  message. Use it only when a generic response is appropriate.
- If no handler matches an exception, the program calls `std::terminate`.

Common standard exception types include:

| Exception type | Typical use |
| --- | --- |
| `std::invalid_argument` | A function receives an invalid argument |
| `std::out_of_range` | An index or value is outside an allowed range |
| `std::runtime_error` | A runtime operation fails |
| `std::logic_error` | A program violates a logical precondition |

These types are provided by `<stdexcept>`.

## Propagation and rethrowing

If a function does not handle an exception, it propagates to its caller. This
continues until a matching handler is found. If handling code needs to log or
inspect an error and then pass it on, use `throw;` inside the `catch` block to
rethrow the same exception:

```cpp
try {
    perform_operation();
} catch (const std::exception& error) {
    std::cerr << "Operation failed: " << error.what() << '\n';
    throw;
}
```

`perform_operation()` represents a function that may throw. A bare `throw;` is
only valid while handling an exception.

## Resource safety and RAII

When an exception leaves a scope, local objects are destroyed during stack
unwinding. Use RAII (Resource Acquisition Is Initialization) types to ensure
resources are released automatically:

- Prefer `std::vector` to manually allocated arrays.
- Prefer `std::unique_ptr` to owning raw pointers.
- Use standard file and lock types rather than manual open/close or
  lock/unlock pairs.

## Good practices

- Throw by value and catch by `const` reference.
- Prefer standard exception types when they describe the failure accurately.
- Validate inputs at the boundary where invalid values become an error.
- Do not use exceptions for normal control flow.
- Do not silently ignore failures with an empty `catch` block.
- Keep cleanup automatic with RAII instead of relying on code after a
  potentially throwing operation.

## Compile the example

From the repository root, compile the standalone example with C++17:

```sh
g++ -std=c++17 cpp-fundamentals/exception-handling-notes.c++ -o exception-handling-notes
```

On Windows PowerShell, run it with:

```powershell
.\exception-handling-notes.exe
```
