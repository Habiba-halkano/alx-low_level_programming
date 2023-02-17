#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * Return: 0 (Succes)
 */
int main(void)
{
char c;

char i = '0';

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
