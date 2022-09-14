#include "main.h"

/**
 * print_last_digit - prints the last digigt of a number
 * @n: passed arguments
 * Return: value of last digit
 */
int print_last_digit(int)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
