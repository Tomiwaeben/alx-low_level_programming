#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: integer
 * @y: power
 *
 * Return: On success 1
 * On error, -1 is returned, and error is set appropriately
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
