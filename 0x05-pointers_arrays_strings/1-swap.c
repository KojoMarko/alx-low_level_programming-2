#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first integer pointer argument
 * @b: second integer pointer argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

