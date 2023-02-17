#include <stdio.h>
/**
 * main - prints alphabets in lowercase then in uppercase
 * Return: 0 (Succes)
 */
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
