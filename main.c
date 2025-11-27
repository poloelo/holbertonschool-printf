#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello %s!\n", "world");
    _printf("Printed %i characters.\n", len);

    _printf("Show a percent sign: %%\n");
    _printf("Character: %c\n", 'A');
    _printf("Integer: %d\n", 123);
}