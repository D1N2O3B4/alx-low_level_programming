#include <stdio.h>
/**
 * main - check code
 * _islower - checks if lower or not
 * Return: Always 0
 */
int _islower(int c);
int main(void)
{
int r;
r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
int _islower(int c)
{
if (islower(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
