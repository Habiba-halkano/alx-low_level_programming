#include <stdio.h>
/**
 * main - prints numbers in twos
 * Return: 0 (success)
 */
int main(void)
{
int a, b, c, d;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				if (((c + d) > (a + b) && c >= a) || a < c)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 98 && d == 99)
					{
						break;
					}
					else
					{
						putchar (',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
