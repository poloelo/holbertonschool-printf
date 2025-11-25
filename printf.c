#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int print_int(va_list args);
int print_double(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_diese(va_list args);

/**
 * Creation of the type_t type that stores a char c and a function pointer.
 * 
 * The correspondance board is there to make links between the option scanned in the format string 
 * and the option in the correspondances board.
 */

struct type_t {
    char c;
    int (*f)(va_list);
};

struct type_t correspondance[] = 
{
    {'d' ,print_double},
    {'c', print_char}, 
    {'i', print_int},
    {'s', print_string},
    {'%' ,print_diese},
    {'0', NULL}
};

/** 
 * _printf functions prints a formatted string where all the options that starts with '%' 
 * can be replaced by the parameters put after the formatted string in order of appearance
 */

int _printf(const char *format, ...)
{
    va_list values;
    va_start(values, format);

    int i = 0;
    int count = 0;

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
        putchar(format[i]);
        count++;
        }
        else if (format[i] == '%')
        {
            for(int j = 0; correspondance[j].f != NULL ; j++)
            {
                if (format[i + 1] == correspondance[j].c)
                {
                    count += correspondance[j].f(values);
                }
            }
            i++;
        }
        i++;
    }
    return count;
}

int print_int (va_list args)
{
     printf("%i", va_arg(args, int));
     return 0;
}

int print_double(va_list args)
{
    return 0;
}

int print_char(va_list args)
{
    int count = 0;
    char c = va_arg(args, int);
    putchar(c);
    count++;
    return count;
}

int print_string(va_list args)
{
    return 0;
}

int print_diese(va_list args)
{
    putchar('%');
    return 0;
}