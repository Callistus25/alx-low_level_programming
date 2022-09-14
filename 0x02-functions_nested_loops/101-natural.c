#include <stdio.h>
#include "main.h"

/**
 * main - entry point for the program
 *
 * Description: Program prints the sum of the
 * multiples of 3 and 5 from 0 to 1024
 * (excluded)
 * Return: Always 0
 */

int main(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
