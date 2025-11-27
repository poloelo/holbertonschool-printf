#include "main.h"

/**
 * Structure linking a format specifier to its corresponding print function.
 */

typedef struct type_flag{
    char c;
    int (*f)(va_list *);
} flag;

/* Lookup table for format specifiers */

flag f_list[] =
{
    {'d' ,print_int},
    {'c', print_char},
    {'i', print_int},
    {'s', print_string},
    {'%' ,print_percent},
    {'0', NULL}
};
