#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: 0 (succes)
 */
int main(void)
{
int c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
