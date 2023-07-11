#include "main.h"
/**
 * _strcpy - prints a char
 * @dest: a string
 * @src: an other char
 *
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}
