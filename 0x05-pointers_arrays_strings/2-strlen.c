#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: String to count
 *
 * Return: String Lenght
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; c++)
	{
		c++;
	}

	return (c);
}
