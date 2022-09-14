#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers up to 98
 * @n: number to start counting from
 *
 * Description: Prints all natural numbers up to 98.
 * If the starting number is greater than 98, the
 * function counts down to 98. Otherwise, the
 * function counts up to 98.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
