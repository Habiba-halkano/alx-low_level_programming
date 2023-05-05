#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @index: index starting from 0
 * @n: pointer to the index
 * Return: on success 1, on error -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
