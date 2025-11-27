#include "main.h"


int print_percent(va_list *args)
{
    (void)args;
    /* Print '%' literally */
    putchar('%');
    return 1;
}
