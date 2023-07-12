#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int o;
	int j;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[o] = src[j];
		o++;
		j++;
	}

	dest[o] = '\0';
	return (dest);
}
