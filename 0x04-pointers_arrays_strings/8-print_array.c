#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integer
 * @a: pointer to integer
 * @n: n is the number of elements of the array to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
