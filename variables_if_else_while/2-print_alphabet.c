#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char word = 'a';

	while (word <= 'z')
	{
		putchar(word);
		word++;
	}
	putchar('\n');
	return (0);
}
