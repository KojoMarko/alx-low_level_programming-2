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

	for (i = 0; *s; i++)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
	}
	return (0);
}
