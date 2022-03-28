#include "main.h"

/**
 * *_strchr - finds character in string
 * @s: pointer to char
 * @c: function argument
 * Return: pointer to first occurrence of character
 */

char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; *s != '\0'; i++)
    {
        if (c == *(s + i))
        {
            return ((s + i));
        }
    }

  return ((s + i));
}