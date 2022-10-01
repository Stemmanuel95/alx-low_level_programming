#include "main.h"

/**
 * _puts - Prints a string.
 * @str: string
 * Code written by Emmanuel Yeboah
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
