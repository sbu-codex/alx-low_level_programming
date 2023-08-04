#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
	dest[i] = src[o];
	i++;
	o++;
	}
	dest[i] = '\0';
	return (dest);
}
