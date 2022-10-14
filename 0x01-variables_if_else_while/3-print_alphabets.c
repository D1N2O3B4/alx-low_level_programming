#include <stdio.h>
/**
 * main - Alphabets lower and upper
 * Return: Always 0
 */
int main(void)
{
int i;
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
i = 0;
while (i < 52)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
