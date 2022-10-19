#include "main.h"
/**
 * print_last_digit -. prints last digit
 * @i: last digit value which is an int
 * Return: returns last digit
 */
int print_last_digit(int i)
{
int a;
a = i % 10;
if (a < 0)
{
a = a * -1;
}
_putchar(a + '0');
return (0);
}
