#include <stdio.h>
#include "function_pointer.h"


/**
 * int_index - entry function
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: sucess 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
