#include "main.h"

/**
 * binary_to_int - converts a binary number to an
 * umsigned int
 *
 * @b: a pointer to string of 0 and 1 char
 * Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int num = 0;

	if (b[num] == '\0')
		return (0);

	while ((b[num] == '0') || (b[num] == '1'))
	{
			i <<= 1;
			i += b[num] - '0';
			num++;
	}

	return (i);
}


