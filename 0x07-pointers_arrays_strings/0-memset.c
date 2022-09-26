nclude "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

