#include "holberton.h"
/**
 * print_triangle - Print a triangle
 *
 * @size: length of base of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= size -(i+1); j++)
				_putchar(' ');
			for (k = 0; k <= size - j; k++)
				_putchar('#');
			_putchar('\n');
		}             
	}
	if (size <= 0)
		_putchar('\n');
}
