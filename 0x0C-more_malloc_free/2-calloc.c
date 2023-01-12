#include "main.h"
#include <stdlib.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: Where to fill
 * @b: Byte used to fill
 * @n: How many bytes to fill
 *
 * Return: Pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


/**
 * _calloc - Allocates memory space and returns a pointer to that direction
 * @nmemb: Number of elements to store
 * @size: Data type of the elements
 * Return: Pointer to the allocated memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	arr = _memset(arr, 0, nmemb * size);
	return (arr);
}
