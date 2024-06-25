#include "3-calc.h"

/* Array of structs to define operations */
op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
};

/* Function to select the correct operation */
int (*get_op_func(char *s))(int, int)
{
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s && *(s + 1) == '\0')
            return ops[i].f;
        i++;
    }

    printf("Error\n");
    exit(99);
}

