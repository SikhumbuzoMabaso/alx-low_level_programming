#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}

	putchar('\n');
}
