#include "main.h"

/**
 * _strlen - Retunrs the length of a string.
 * @str: string
 *
 * Return: void
 *
 * Code written by EMmanuel Yeboah
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);



}
