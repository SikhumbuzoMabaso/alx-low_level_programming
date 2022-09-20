#include "main.h"

/**
 * rev_string - function prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	while (s[c] != '\0')
	{
		c++;
	}
	for (k = 0; k < c; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
