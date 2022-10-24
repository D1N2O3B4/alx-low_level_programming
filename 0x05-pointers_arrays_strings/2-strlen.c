#include "main.h"
/**
 * _strlen - print out string length
 * @s: is a char
 * Return: returns lenght
 */
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i = i + 1;
s = s + 1;
}
return (i);
}
