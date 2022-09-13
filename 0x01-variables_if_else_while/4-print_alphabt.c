#include <stdio.h>

/**
 * main -prints some letters of aphabet
 *
 * Return: Always (Success)
 */
int ain(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
