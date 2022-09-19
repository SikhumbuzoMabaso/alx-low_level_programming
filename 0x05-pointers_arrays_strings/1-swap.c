#include "main.h"

/**
 * swap_int -Swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

