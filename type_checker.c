#include <stdio.h>
#include <stdbool.h>

//Define possible types in our language

typedef enum{

	     TYPE_INT,
	     TYPE_FLOAT,
	     TYPE_POINTER, //This represents a pointer to another type
	     TYPE_ERROR //Used for invalid semantic states
}DataType;

//Structure of a type, including base type for pointers
typedef struct Type {
  DataType kind;
  struct Type* base_type; //If kind == TYPE_POINTER, this points to what it is pointing at
}Type;

/**
 * Validates a deference operation (*expr)
 * @param operand_type: The type of the expression bring dereferenced
 * @return: The resulting type after dereference, or TYPE_ERROR if invalid
 */

Type check_dereference(Type operand_type)
{
  //Rule 1: Ensure dereferencing is applied to pointer-typed expressiions ONLY

  if (operand_type.kind != TYPE_POINTER)
    {
      printf("Semantic Error: cannot dereference a non a non-pointer type.\n");
      return (Type){TYPE_ERROR, NULL};
    }

  //Rule 2: validate pointer type base exists

  if (operand_type.base_type == NULL)
    {
      printf("Semantic Error: Pointer hase no base type (void or incomplete).\n");
      return (Type){TYPE_ERROR, NULL};
    }

  // Success: Return the type the pointer was pointing to

  printf("Success: Dereference validated.\n");
  return *(operand_type.base_type);
}

int main()
{
  // Example 1: Pointer to int (Valid)
  Type intType = {TYPE_INT, NULL};
  Type ptrToInt = {TYPE_POINTER, &intTYPE};

  // Example 2: Just an Int (Invalid for dereferencing)

  Type simpleInt = {TYPE_INT, NULL};

  printf("Checking ptrToInt: ");
  check_dereference(ptrToInt);

  printf("Checking dimplrInt: ");
  check_dereference(simpeInt);

  return 0;
}
