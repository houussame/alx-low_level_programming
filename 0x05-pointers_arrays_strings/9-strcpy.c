#include "main.h"

/**
 **_strcpy - Write a function that copies the
 *		string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}