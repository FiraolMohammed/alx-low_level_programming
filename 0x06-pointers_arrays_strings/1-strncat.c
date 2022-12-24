#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	dest[n] = '\0';
	return (dest);
}
