#include <stdio.h>
/**
 * main - 
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char alp [26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
}
