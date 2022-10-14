#include <stdio.h>
/**
 * main - reverse
 * Return: Always 0
 */
int main(void)
{
int i;
char alpharev[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 25; i >= 0; i--)
{
putchar(alpharev[i]);
}
putchar('\n');
return (0);
}
