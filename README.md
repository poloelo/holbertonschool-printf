_printf — Custom Implementation of printf

Description

_printf is a custom implementation of the standard C library function printf. It prints formatted output to the standard output (stdout) and supports a subset of the format specifiers. This project is written in C and adheres to C90 (ANSI C) standard, compatible with the Holberton checker requirements.

The purpose of this project is to demonstrate mastery of:
	•	Variadic functions using stdarg.h
	•	Handling different data types
	•	Implementing custom format specifiers
	•	Writing clean, modular C code

⸻

Supported Format Specifiers

Specifier	Description	Example Output
%c	Prints a single character	_printf("%c", 'A'); // A
%s	Prints a string (handles NULL)	_printf("%s", NULL); // (null)
%d	Prints a signed decimal integer	_printf("%d", 42); // 42
%i	Prints a signed decimal integer	_printf("%i", -7); // -7
%%	Prints a literal % character	_printf("%%"); // %

Note: Any unsupported format specifier prints % followed by the unknown character, mimicking the behavior of standard printf for unknown conversions.

⸻

File Structure

.
├── main.c          # Test cases for _printf
├── printf.c        # Implementation of _printf and helper functions
├── main.h          # Header file with function prototypes and struct definition
└── README.md       # This file


⸻

Functions

_printf(const char *format, ...)
	•	Description: Prints a formatted string to stdout.
	•	Parameters:
	•	format — Format string containing plain text and format specifiers.
	•	Variadic arguments corresponding to the specifiers in the format string.
	•	Return value: Number of characters printed (excluding the null byte).

Helper Functions
	•	print_char — Prints a single character.
	•	print_string — Prints a string; prints (null) if the string is NULL.
	•	print_int — Prints a signed integer.
	•	print_double — Prints a double with six decimal places.
	•	print_percent — Prints a literal %.

⸻

Usage

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

Expected Output:

Hello world!
Printed 13 characters.
Show a percent sign: %
Character: A
Integer: 123


⸻

Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf

	•	Compile in C90/ANSI C mode (Holberton standard)
	•	Treats all warnings as errors (-Werror)

⸻

Notes
	•	This _printf implementation does not support all format specifiers like the standard C library version.
	•	The code follows Holberton School coding standards:
	•	No mixed declarations and code
	•	No implicit function declarations
	•	Only allowed functions: write or putchar

⸻
