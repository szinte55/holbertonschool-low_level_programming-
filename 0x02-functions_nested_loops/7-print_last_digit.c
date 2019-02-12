#include "holberton.h"
/**
 * print_last_digit - print last digit of a number using putchar
 * @i: integer being evaluated
 * Return: the last digit of a number
 */

int print_last_digit(int i)
{
	if (i >= 0)
		return (_putchar(i % 10 + '0'));
	else
		return (_putchar((-1*i) % 10 + '0'));
}
