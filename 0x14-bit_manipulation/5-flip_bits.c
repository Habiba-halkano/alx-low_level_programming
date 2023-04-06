#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 *
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bits needed to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int rst = n ^ m, bits = 0;

	while (rst > 0)
	{
		bits += (rst & 1);
		rst >>= 1;
	}
	return (bits);
}
