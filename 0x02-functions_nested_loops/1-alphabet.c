#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */

void print_alphabet(void)
{
	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
