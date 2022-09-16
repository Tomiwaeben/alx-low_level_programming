#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 
 *
 * @c: checks input
 *
 * Return: returns 1 if c is digit
 * Return: 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
