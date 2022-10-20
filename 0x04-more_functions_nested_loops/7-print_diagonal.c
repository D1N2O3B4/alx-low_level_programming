#include "main.h"
/**
 * print_diagonal - prints diagonals
 * @n: is an int
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (j = 0; j < n; j++)
{
_putchar(92);
_putchar('\n');
for (i = 0; i <= j; i++)
{
_putchar(' ');
}
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
