#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
			_putchar(j + '0');

		_putchar('\n');
	}
	_putchar('\n');
}

