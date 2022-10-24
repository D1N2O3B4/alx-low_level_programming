#include "main.h"
/**
 * _strlen - print out string length
 * @s: is a char
 */
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
