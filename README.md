# Dependencies
## Required
- C++ 17
- CMake 3.12
## Optional
- GoogleTest/GoogleMock (for testing)

# Building
Using Make:
```bash
cd <project>
mkdir build && cd build
cmake ..
make
```
Using Ninja (`sudo apt-get install ninja-build`):
```bash
cd <project>
mkdir build && cd build
cmake -GNinja ..
ninja
```
## Options
- `-DBUILD_TESTING=OFF` to build without tests

# Run Tests
```bash
cd build/tests
./runTests
```
or
```bash
cd build
ctest
```
