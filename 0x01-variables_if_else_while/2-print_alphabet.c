#include <stdio.h>
/**
 * main - Alphabets
 * Return: Always 0
 */
int main(void)
{
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = 0;
while (i < 26)
{
putchar(alphabets[i]);
i++;
}
putchar('\n');
return (0);
}
