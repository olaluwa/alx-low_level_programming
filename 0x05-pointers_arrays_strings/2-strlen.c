#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @len: length of  a string
 * @str: string variable
 * Return: no return
 */
int _strlen(char *s)
{
	int i = 0;

	while (*[s + i] != '\0')
	{
		i++;
	}
	return (i);

}
