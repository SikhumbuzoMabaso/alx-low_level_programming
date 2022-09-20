#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to print i reverse
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
		putchar(s[C]);
	}

	putchar('\n');
}
