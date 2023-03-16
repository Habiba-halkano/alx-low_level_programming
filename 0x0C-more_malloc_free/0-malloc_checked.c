#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

/**
 * *malloc-checked - function declaration
 * @b:ineger to check
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
