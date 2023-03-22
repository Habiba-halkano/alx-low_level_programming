#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: the array
 * @size: size of the array
 * @action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		exit(98);
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
