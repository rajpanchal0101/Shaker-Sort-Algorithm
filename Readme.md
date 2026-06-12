# Shaker Sort Algorithm

An implementation of bidirectional bubble sort (shaker sort) with timing analysis. The program generates a vector of random numbers, sorts it in both ascending and descending order using shaker sort, measures the time each direction takes, and writes the results to output files.

## Tech Used

- C++
- Standard Library (`<chrono>` for timing)

## Files

| File | Description |
|------|-------------|
| `a4_header.h` | Header file with the shaker sort function declaration. Included in `a4_shakersortutils.cpp`. |
| `a4_main.cpp` | Entry point — generates random data, runs shaker sort in both directions, prints timing results, and writes sorted output to files. |
| `a4_shakersortutils.cpp` | Implements the shaker sort function. Included in `a4_main.cpp`. |
| `input_file.txt` | Output file containing the generated random numbers. |
| `asc_sorted.txt` | Output file with numbers sorted in ascending order. |
| `desc_sorted.txt` | Output file with numbers sorted in descending order. |
| `a4_executable.exe` | Pre-built executable binary. |

## How to Build & Run

```bash
g++ a4_main.cpp -o shaker && ./shaker
```

Or run `a4_executable.exe` directly on Windows.
