# C++ Learning
A repository for learning Modern C++ and practicing embedded C++ development.

## EmbeddedCppFramework

EmbeddedCppFramework is a small C++ library created as a Phase 1 learning project.

## Features
- Clamp values to a specified range
- Validate values with error codes
- Display library version

## Directory Structure
```text
cpp-learning/
├── include/
│   └── embedded_cpp/
│       ├── error_code.hpp
│       ├── library_info.hpp
│       └── utility.hpp
├── src/
│   └── utility.cpp
├── examples/
│   └── basic_example.cpp
├── tests/
│   └── utility_test.cpp
├── CMakeLists.txt
└── README.md
```

## Build
```powershell
cmake -S . -B build
cmake --build build
```

## Run Example
```powershell
.\build\basic_example.exe
```

## Run Tests
```powershell
.\build\utility_test.exe
```
The test passes if the program exits without an assertion failure.

## Learning Topics

- C++ project structure and build process
- Namespaces
- Modern C++ initialization and type features
- const and constexpr
- References
- Function features
- std::array and std::string
- Range-based for
- Lambda expressions
- CMake libraries and targets
- Basic testing with assert