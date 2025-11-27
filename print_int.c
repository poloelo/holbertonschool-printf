#include "main.h"

int print_int(va_list *args)
{
    int n = va_arg(*args, int);
    int divisor = 1;
    int temp, count = 0;
    unsigned int num;

    /* Handle negative numbers */
    if (n < 0)
    {
        _putchar('-');
        count++;
        num = (unsigned int)(-n);  /* Conversion vers unsigned */
    }
    else
    {
        num = (unsigned int)n;
    }

    temp = num;

    /* Find divisor */
    while (temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    /* Print digits */
    while (divisor > 0)
    {
        _putchar((num / divisor) % 10 + '0');
        count++;
        divisor /= 10;
    }

    return count;
}