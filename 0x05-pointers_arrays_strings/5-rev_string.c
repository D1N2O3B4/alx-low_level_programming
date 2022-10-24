#include "main.h"
/**
 * rev_string - reverse string function
 * @s: is a char
 */
void rev_string(char *s)
{
char rev = s[0];
int c = 0;
int i;
while (s[c] != '\n')
{
c = c + 1;
}
for (i = 0; i < c; i++)
{
c = c - 1;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}
