#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function declaration
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - allocates memory for an array and returns a pointer to memory
 * @nmemb: number of elements
 * @size: size of bytes
 * Return:pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
