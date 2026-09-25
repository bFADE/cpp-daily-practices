# cpp-daily-practices

Daily exercises while learning C++ in COSC 1405 at DBU (Starting Out with C++, Gaddis).
Each one targets a specific concept or bug I ran into.

## Log

### Day 1 — Name/Age Greeter
- **File:** `day01_greeter.cpp`
- **Concept:** `cin >>` vs `getline`, and the leftover-newline bug
- **What happened:** `cin >> age` leaves a `\n` in the input buffer, which `getline`
  immediately reads as an empty line if you don't clear it first with `cin.ignore()`.

### Day 1 — Fahrenheit to Celsius Converter
- **File:** `day01_temp_converter.cpp`
- **Concept:** integer division truncation
- **What happened:** `5 / 9` evaluates as integer math and truncates to `0` before
  it ever touches a `double`, silently breaking the formula. Fixed by writing `5.0 / 9`.
