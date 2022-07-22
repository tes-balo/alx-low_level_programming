#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -creates an array of chars and initializes it with a char
 * @size: size of array
 * @c: char to use
 * Return: returns NULL if it fails, or returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	array = (char *)malloc(size * sizeof(char));

	if (array == 0)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}

