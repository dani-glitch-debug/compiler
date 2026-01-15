# Assignment 3: Parser Implementation and Theory

This repository contains the completed tasks for Assignment 3, focusing on formal language theory, stack-based parsing in C++, and parse tree construction.

## 📂 Project Structure

The project is organized into dedicated directories to separate source code from documentation:

- **src/**: 
  - `parser.cpp`: The C++ implementation of the stack-based parser using the STL `<stack>` library.
- **docs/**: 
  - `theory.md`: Comparison of Deterministic vs. Non-Deterministic parser types.
  - `parse_tree.md`: Detailed derivation steps and the **visual parse tree image** for "0011".
  - `parse_tree.png`: The image file used within the documentation.
- **README.md**: Main landing page with project overview.

---

## 📚 Assignment Tasks

### 1. Theory: Deterministic vs. Non-Deterministic Parsers
An analysis of the differences between deterministic and non-deterministic parsers, focusing on decision-making, efficiency ($O(n)$), and implementation methods.
> **View Details**: [docs/theory.md](docs/theory.md)

### 2. Implementation: Stack-Based C++ Parser
A robust C++ program that utilizes the Standard Template Library (STL) `std::stack` to validate balanced parentheses `()`, curly braces `{}`, and square brackets `[]`.
