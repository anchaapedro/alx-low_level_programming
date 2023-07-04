#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, with a new line
 *
 * @str: the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
		putchar(str[n]);
	putchar(10);
}
