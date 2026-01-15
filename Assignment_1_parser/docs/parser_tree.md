Task 3: Parse Tree Construction

**Assignment**: Construct a parse tree for the string "0011" based on the provided grammar.

## 1. Grammar Rules
The following context-free grammar (CFG) rules were used:
- S ---> 0S1
- S ---> 01

## 2. Derivation of "0011"
To arrive at the target string, we follow these derivation steps:
1. **Apply Rule 1**: S ---> 0S1
2. **Apply Rule 2**: Substitute the middle S with 01 to get 0(01)1.
3. **Final String**: `0011`

## 3. Visual Parse Tree
Below is the graphical representation of the derivation for "0011".

![Parse Tree for 0011](parse_tree.png)

## 4. Textual Representation
For terminal accessibility, the tree structure is represented as follows:

```text
           S (Root)
         / | \
        0  S  1
         /   \
        0     1

