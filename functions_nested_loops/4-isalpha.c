#include "main.h"
#include <ctype.h>
/**
 * _isalpha -  Checks for alphabetic character.
 * @word: The character to check
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int word)
{
	if (isalpha(word))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
