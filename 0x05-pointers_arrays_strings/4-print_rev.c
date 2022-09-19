#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: tis is input strimg
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
