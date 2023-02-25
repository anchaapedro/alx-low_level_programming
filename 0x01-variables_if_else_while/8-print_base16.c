#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char h;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (h = 'a'; h <= 'f'; i++)
		putchar(h);
	putchar ('\n');
	return (0);
}
