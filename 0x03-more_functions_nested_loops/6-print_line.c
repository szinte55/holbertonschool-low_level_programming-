#include "holberton.h"

/**
 * more_numbers - Print the numbers 0 to 14 ten times followed by new line.
 *
 * Return: Void
 */
void print_line(int n)
{
	int x;

	if (n <=0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
