#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int word)
{
	if (islower(word))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

