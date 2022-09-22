#include "main.h"
#include <stdio>



/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
