#include "main.h"

/**
 * _isalpha - Determines alphabetic characters
 * @c: Character to be evaluated
 *
 * Description: This function uses the ASCII code of
 * the character passed to it as an argument when called
 * to determine if the character is a letter of the
 * alphabet.
 * Return: 1 (letter of alphabet) or 0 (not letter of alphabet)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
