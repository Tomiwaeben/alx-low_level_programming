#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: This is the input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
