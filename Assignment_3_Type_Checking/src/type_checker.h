#ifndef TYPE_CHECKER_H
#define TYPE_CHECKER_H

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_POINTER,
    TYPE_ERROR
} DataType;

typedef struct Type {
    DataType kind;
    struct Type* base_type; // Points to the type being pointed to
} Type;

// Function prototype
Type check_dereference(Type operand_type);

#endif
