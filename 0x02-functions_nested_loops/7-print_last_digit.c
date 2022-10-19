#include "main.h"
/**
 * print_last_digit -. prints last digit
 * @i: last digit value which is an int
 * Return: returns last digit
 */
int print_last_digit(int i)
{
if (i < 0)
{
int y;
i = -i;
y = i % 10;
_putchar(y + '0');
}
return (y);
}
