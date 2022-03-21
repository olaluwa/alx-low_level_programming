#include "main.h"
/**
 * swap_int - snaps two integers
 * @a: first parameter
 * @b: second parameter
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
