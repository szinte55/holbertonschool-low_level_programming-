#include "holberton.h"
/**
 * main - print the string "Holberton"
 * Return: Always 0(success)
 */
int main(void)
{
	char A[] = "Holberton";
	unsigned int i;

	for (i = 0; i <= sizeof(A) - 1; i++)
		_putchar(A[i]);
	_putchar('\n');
	return (0);
}
