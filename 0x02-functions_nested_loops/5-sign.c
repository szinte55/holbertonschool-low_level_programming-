#include "holberton.h"
/**
 * print_sign - print the sign of a number
 * @i: evaluated number
 * Return: returns 1 if number is positive, returns -1 if number is negative,and 0 if zero
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
