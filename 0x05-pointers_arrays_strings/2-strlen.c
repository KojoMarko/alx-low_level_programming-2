#include "main.h"

/**
 * _strlen - prints the length of a string
 * @char *s - function argument
 * Return: always 0
 */
int _strlen( char *s)
{
    int count;

    count = 0;

    while (*s != '\0')
    {
        ++count;
    }
    _putchar(count);
    return (0);
}