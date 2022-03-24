#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @src: char src
 * @dest: char dest
 * @n: lenght int
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a,b;

	for (a = 0; dest[a], != '\0'; a++)
	{
		continue;
	
	}
	
	for (b = 0; src[b] != '\0' && b < n;  b++)
	{
		dest[a + b] = src[b];
	}
	
	dest[a + b] = '\0';
	
	return (dest);
}
