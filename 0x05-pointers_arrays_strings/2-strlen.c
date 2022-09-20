#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: String to count
 *
 * Return: String Lenght
 */
int _strlen(char *s)
{
	int len = 0;

	for (*s != '\0'; len++)
	{
		len++;
	}

	return (len);
}
