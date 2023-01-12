#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}


/**
 * _strcpy - Copies the string from a source to a destination
 * @dest: Where to copy the string
 * @src: String to copy
 *
 * Return: dest's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (*src != '\0')
	{
		*(dest + count) = *src;
		src++;
		count++;
	}
	*(dest + count) = '\0';

	return (dest);
}


/**
 * _strncat - Concatenates a string up to the n byte
 * @dest: String to concatenate
 * @src: String used to concatenate
 * @n: Amount of bytes to concatenate
 *
 * Return: Destination string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest;
	int count_src;

	count_dest = 0;
	count_src = 0;

	while (*(dest + count_dest) != '\0')
	{
		count_dest++;
	}

	while (*(src + count_src) != '\0' && count_src < n)
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
		count_src++;
	}

	*(dest + count_dest) = '\0';

	return (dest);
}


/**
 * string_nconcat - Concatenates n bytes of one string into another string
 * @s1: Destination string (string to concatenate)
 * @s2: Source string (string to add)
 * @n: Amount of bytes from s2 to concatenate to s1
 * Return: Pointer to the concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		out = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		out = malloc(sizeof(char) * (len1 + n + 1));
	if (out == NULL)
		return (NULL);

	out = _strcpy(out, s1);
	out = _strncat(out, s2, n);
	return (out);
}
