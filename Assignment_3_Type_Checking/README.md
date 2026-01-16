cat <<EOF > README.md
# Assignment 3: Type Checking & Semantic Analysis

This repository contains the implementation of semantic rules for a C-like compiler, focusing on **Pointer Dereference Validation**.

## 📂 Project Structure
- **src/main.c**: Test bench to demonstrate rule validation.
- **src/type_checker.c**: Core logic for semantic rules.
- **src/type_checker.h**: Data structures for types.
- **Makefile**: Automation script for compilation.

## 🛠️ Semantic Rules Implemented
1. **Pointer Validation**: Ensures the \`*\` operator is only applied to \`TYPE_POINTER\`.
2. **Result Propagation**: Correctly identifies the base type of the dereferenced expression (e.g., \`*int_ptr\` becomes an \`int\`).



## 🚀 How to Build and Run
1. Compile: \`make\`
2. Run: \`./type_checker_bin\`
3. Clean: \`make clean\`

---
**Author**: Daniel Mehabaw
EOF
