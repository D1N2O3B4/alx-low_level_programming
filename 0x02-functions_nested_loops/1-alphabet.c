#include "main.h"
/**
 * print_alphabet -> prints lower case alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(alp[i]);
}
_putchar('\n');
}
