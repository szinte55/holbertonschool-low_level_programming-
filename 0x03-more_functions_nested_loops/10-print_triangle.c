#include "holberton.h"
/**
 * print_triangle - Print a triangle
 *
 * @size: length of base of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; size >= i; i++)
		{
			for (j = 1; size - i >= j; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
