#include "main.h"

/**
 * main -This function prints alphabets on lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

        _putchar('\n');
}
