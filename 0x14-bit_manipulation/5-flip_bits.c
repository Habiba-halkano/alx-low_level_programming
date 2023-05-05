#include "main.h"
/**
 * flip_bits - returns the number of bits needed
 * to flip to get from one number to another
 *
 * @n: the no.
 * @m: the no. to flip n to
 * Return: no. of bits to flip to get from m to n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pow = n ^ m, bits = 0;

	if (pow > 0)
	{
		bits += (pow & 1);
		pow >>= 1;
	}
	return (bits);
}
