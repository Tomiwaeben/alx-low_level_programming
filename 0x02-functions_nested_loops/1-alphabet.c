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
		putchar(x);
	}
	putchar('\n');
}
