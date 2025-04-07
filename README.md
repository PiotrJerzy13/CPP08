# C++ Module 08: Templated Containers, Iterators, Algorithms

## Introduction

This repository contains implementations for the C++ Module 08, focusing on the use of templated containers, iterators, and algorithms. The exercises demonstrate advanced usage of the Standard Template Library (STL) with modern C++17 features.

## Project Setup and Compilation

### Requirements

- C++17 compatible compiler (e.g., GCC, Clang)
- Make (optional, for building via Makefiles)

### Compiling

Navigate to the exercise directory and use the following command to compile the projects:

g++ -std=c++17 -Wall -Wextra -Werror -o executable_name source_files.cpp

## Project Structure and Exercises

Each directory corresponds to an exercise that demonstrates specific C++ STL features:

### Exercise 00: Easy find

- **Directory**: `ex00/`
- **Objective**: Implement a templated function `easyfind` for searching an element in a container.
- **Main Files**: `Makefile`, `main.cpp`, `easyfind.hpp`

### Exercise 01: Span

- **Directory**: `ex01/`
- **Objective**: Implement a `Span` class capable of storing a set number of integers and calculating the shortest and longest span between them.
- **Container Used**: `std::vector<int>`
- **Logic**:
  - Efficiently manage a dynamic list of integers with potential for quick access and resizing.
  - Compute spans by sorting the vector and iterating to find minimum and maximum differences.
- **Main Files**: `Makefile`, `main.cpp`, `Span.hpp`, `Span.cpp`

### Exercise 02: Mutated Abomination

- **Directory**: `ex02/`
- **Objective**: Extend the non-iterable `std::stack` to include iterator support, making it a `MutantStack`.
- **Container Used**: `std::deque<T>` as the underlying container for `std::stack<T>`.
- **Logic**:
  - Provide bidirectional iteration capabilities using the underlying deque's iterators.
  - Enhance the typical stack functionality with methods to iterate forwards and backwards over the elements.
- **Main Files**: `Makefile`, `main.cpp`, `MutantStack.hpp`

## Usage Examples

Each exercise includes a `main.cpp` file which provides examples of how to use the implemented classes or functions. These examples serve as both demonstrations and simple tests of functionality.
