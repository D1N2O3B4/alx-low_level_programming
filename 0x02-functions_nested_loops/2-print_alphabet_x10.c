#include <stdio.h>
/**
 * print_alphabet_x10 -> print the alphabets 10x
 */
void print_alphabet_x10(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
int j = 1;
while (j < 11)
{
j++;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
}
}
