/*
 * File: 1-last_digit.c
 * Auth: Callistus Obidiozor
 */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - program will start execution within this function
 *
 * Description: This program will generate a random number , then get the
 * lastdigit of that random number and then determines what message to
 *  display.
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, last_digit);
	}
	else if ((last_digit != 0)  && (last_digit < 6))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}
