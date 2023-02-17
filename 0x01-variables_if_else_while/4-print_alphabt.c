#include <stdio.h>
/**
 * main - print alphabets except q and e
 * Return: 0 (Succes)
 */
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' && c != 'e')
		putchar(c);
	else
	{
	}
}
putchar('\n');
return (0);
}
