# UTC_Test
A simple test of "std::chrono::utc_clock".

## Requirements:
- Compiler: GCC ≥ 13.1 (g++) with libstdc++
- Language mode: `-std=c++20` (or `-std=c++23`)

**Notes**:
- Uses C++20 `<chrono>` (std::chrono::utc_clock) and `<format>`.
- If you need std::chrono::parse, require GCC ≥ 14.1.

**Tested with**
- Debian 13 (trixie), g++ 14.2.0

# Install & Use
First clone the repo:
```
git clone https://github.com/AlexLandherr/UTC_Test.git
```
Change directory to repo:
```
cd UTC_Test/
```

Then build & compile using `make`:
```
make
```

Run:
```
./utc_test
```
