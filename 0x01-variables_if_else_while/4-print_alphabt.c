#include <stdio.h>
/**
 * main - exclude q and e
 * Return: Always 0
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = 0;
while (i < 26)
{
if (i == 16 || i == 4)
{
i++;
}
putchar(alpha[i]);
i++;
}
putchar('\n');
return (0);
}
