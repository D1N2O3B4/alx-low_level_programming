#include <stdio.h>
/**
 * main  10x
 * Return: Always 0
 */
void print_alphabet_x10(void);
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;  
int j = 1;
while (j < 11)
{
j++;
for (i = 0;i < 26;i++)
{
putchar(alp[i]);
}  
putchar('\n');      
} 
}
