#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function definition
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes for s2
 * Description: point to a newly allocated memory in space
 * which contains s1
 * Return: a string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *string;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = 0;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;

	if (n >= len2)
		n = len2;

	string = malloc(sizeof(char) * n + len1 + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		string[i] = s1[i];

	for (i = 0; i < n; i++)
		string[i + len1] = s2[i];

	string[i + len1] = '\0';

	return (string);
}
