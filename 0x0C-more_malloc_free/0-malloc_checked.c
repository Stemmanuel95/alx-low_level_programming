#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: Is the size of memory to be allocated to the malloc function
 *
 * Return: pointer to allocated memory
 *Code written by Emmanuel Yeboah
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);


	return (p);
}
