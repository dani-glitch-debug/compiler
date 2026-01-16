#include <stdio.h>
#include "type_checker.h"

Type check_dereference(Type operand_type) 
{
    // RULE: The expression must be a pointer to be dereferenced
    if (operand_type.kind != TYPE_POINTER) 
    {
        printf("Error: Cannot dereference a non-pointer type.\n");
        return (Type){TYPE_ERROR, NULL};
    }

    // RULE: Ensure the pointer actually points to something
    if (operand_type.base_type == NULL) 
    {
        printf("Error: Pointer has no base type.\n");
        return (Type){TYPE_ERROR, NULL};
    }

    // Success: Return the type that was pointed to
    return *(operand_type.base_type);
}
