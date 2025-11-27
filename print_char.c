#include "main.h"

int print_char(va_list *args)
{
    char c = va_arg(*args, int);

    /* Print one character */
    putchar(c);
    return 1;
}

int print_string(va_list *args)
{
    int i = 0;
    char *s = va_arg(*args, char *);

    if (s == NULL)
    {
        s = "(null)";
    }

    /* Print characters until null terminator */
    while (s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    
    return i;
}
