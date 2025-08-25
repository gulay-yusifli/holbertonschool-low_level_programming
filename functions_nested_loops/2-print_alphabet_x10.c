#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Description: This function prints the alphabet in lowercase letters,
 *              ten times, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
