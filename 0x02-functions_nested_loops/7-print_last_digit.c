#include "main.h"
/**
 * print_last_digit -. prints last digit
 * @i: last digit value which is an int
 * Return: returns last digit
 */
int print_last_digit(int i)
{
int a;
if (i < 0)
{
i = i * -1;
a = i % 10;
_putchar(a + '0');
}
else
{
a = i % 10;
_putchar(a + '0');
}
return (a);
}
