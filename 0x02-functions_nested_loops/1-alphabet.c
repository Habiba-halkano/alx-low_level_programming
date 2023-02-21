#include <stdio.h>
/**
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}

