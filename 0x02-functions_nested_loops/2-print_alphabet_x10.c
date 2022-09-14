#include <stdio.h>

/*
 * File: 2-Print_alphabet_x10.c
 * Author: Callistus Obidiozor
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 * Return: Always 0 (Success)
 */

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
