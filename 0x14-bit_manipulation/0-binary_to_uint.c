#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * unsigned int
 * @b: a pointer to a string
 * Return: 0 (if b is NULL or contains values
 * not 0 or 1)
 * otherwise - the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		val <<= 1;
		val += b[length] - '0';
		length++;
	}
	return (val);
}

