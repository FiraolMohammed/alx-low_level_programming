#include "main.h"

/**
 * _strncpy - copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_srtncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		det[j] = '\0';
		j++;
	}
	return (dest);
}
