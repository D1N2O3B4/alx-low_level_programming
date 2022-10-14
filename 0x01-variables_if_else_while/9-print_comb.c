#include <stdio.h>
/**
 * main - Combo
 * Return: Always 0
 */
int main(void)
{
int i;
int j;
i = 48;
j = 48;
while (j < 58)
{
i = 48;
while (i < 58)
{
if (j != i && j < i)
{
putchar(j);
putchar(i);
if (i == 57 && j == 56)
{
break;
}
putchar(",");
}
i++;
}
j++;
}
putchar('\n');
return (0);
}
