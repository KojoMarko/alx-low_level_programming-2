#include "main.h"

/**
 * _strlen - prints the length of a string
 * @char *s - function argument
 * Return: length of string
 */
int _strlen( char *s)
{
    int count;

    count = 0;

    while (s[count]!= '\0')
    {
        count++;
    }
  
    return (count);
}