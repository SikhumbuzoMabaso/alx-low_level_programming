#include <stdio.h>

/**
 * main - print alphabets in lowercase and then in uppercase
 *
 * Ruturn: 0
 */
int main(void)
{
	char c;

	for  (c = 'a'; c <= 'z'; c++)
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
