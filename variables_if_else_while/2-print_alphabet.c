#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char word = 'a';

	while(word <= 'z')
	{
		putchar('%s', word);
		word++;
	}
	putchar('\n');
}
