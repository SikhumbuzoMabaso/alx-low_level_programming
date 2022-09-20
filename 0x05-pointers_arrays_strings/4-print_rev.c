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
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
