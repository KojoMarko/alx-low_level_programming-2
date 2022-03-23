#include "main.h"

/**
 * puts_half - prints of a string
 * @str: function argument
 * Return: void
 */
void puts_half(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    for( i /= 2; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}