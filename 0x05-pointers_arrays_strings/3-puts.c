#include "main.h"
/**
 * _puts - prints string
 * @str: char variable
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
