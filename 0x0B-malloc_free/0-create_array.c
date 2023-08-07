#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a array of chars
 * @size: the size of array
 * @c: initial assigend char
 * Return: the array filed, or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = malloc(size * sizeof(char));
	if (size == 0 || string == NULL)
		return (NULL);
	for (i == 1; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
