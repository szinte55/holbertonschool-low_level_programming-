#include "holberton.h"
/**
 * main - print the alphabet in lower case
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int i;
	char A[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= sizeof(A) - 1; i++)
		_putchar(A[i]);
	_putchar('\n');
	return (0);
}
