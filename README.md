cat <<EOF > README.md
# Compiler Design Portfolio

This repository contains a collection of assignments documenting the development of a compiler. It covers the transition from processing raw syntax to enforcing semantic rules.



## 📂 Repository Structure

The project is divided into distinct modules, each focusing on a specific phase of the compilation process:

| Folder | Phase | Key Implementation |
| :--- | :--- | :--- |
| **[Assignment-1-Parser](./Assignment-1-Parser)** | **Syntax Analysis** | C++ Stack-based parser for context-free grammars (CFG) and Parse Tree derivation. |
| **[Assignment 3 Type Checking](./Assignment%203%20Type%20Checking)** | **Semantic Analysis** | C implementation of a Type Checker specifically for pointer dereferencing and validation. |

---

## 🛠️ Assignment Highlights

### 1. Parser (Syntax Analysis)
- **Deterministic Parsing**: Implemented a stack-based approach to validate strings against a grammar.
- **Tree Derivation**: Documented the step-by-step derivation and visual representation of parse trees (e.g., for string "0011").
- **Theory**: Comparative analysis of Deterministic vs. Non-deterministic automata.

### 2. Type Checking (Semantic Analysis)
- **Type Guarding**: Logic to ensure the \`*\` operator is only applied to pointer types.
- **Resulting Type Resolution**: Logic that extracts the base type of a pointer during dereferencing.
- **Modular Design**: Structured in C with a clear separation of headers, logic, and test benches.



## 🚀 General Instructions

To run any specific assignment, navigate to its directory and check its local \`README.md\`.

**Example for Type Checking:**
\`\`\`bash
cd "Assignment 3 Type Checking"
make
./type_checker_bin
\`\`\`

**Example for Parser:**
\`\`\`bash
cd "Assignment-1-Parser/src"
g++ parser.cpp -o parser
./parser
\`\`\`

---
**Author:** [Daniel Mehabaw](https://github.com/dani-glitch-debug)
EOF
