#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string to search
 * @c: string to search in s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
