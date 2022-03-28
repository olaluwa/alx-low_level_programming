#include "main.h"
/**
 * _memet - fill memory with a contant byte
 * @n:char
 * @s:char pointer 
 * @b:char variable 
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
