#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int val = 1;
	char *end = (char *)&val

	if (*end == 1)
		return (1);

	return (0);
}
