#include <stdio.h>

/**
 *main - prints the name of the file from which the program was compiled from
 *	followed by a new line
 *
 *	Return: Always 0
 *	Code written by Emmanuel Yeboah Manu
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
