#include <stdio.h>
#include "type_checker.h"

int main() {
    // 1. Setup an Integer type
    Type intType = {TYPE_INT, NULL};

    // 2. Setup a Pointer to Integer type (int*)
    Type ptrToInt = {TYPE_POINTER, &intType};

    printf("Testing valid dereference (*ptr):\n");
    Type result1 = check_dereference(ptrToInt);
    if (result1.kind == TYPE_INT) {
        printf("Result: TYPE_INT (Correct)\n");
    }

    printf("\nTesting invalid dereference (*int):\n");
    Type result2 = check_dereference(intType);
    if (result2.kind == TYPE_ERROR) {
        printf("Result: TYPE_ERROR (Correct)\n");
    }

    return 0;
}
