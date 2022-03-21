#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int sam = 0;
	while (sam >= 0)
	{
		if(s[sam] == '\0')
			break;
		sam++;

	}
	for (sam--; sam >= 0; sam--)
		_putchar(s[sam]);
	_putchar('\n');

}
