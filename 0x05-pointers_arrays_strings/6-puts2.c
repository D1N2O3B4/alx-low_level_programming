#include "main.h"
/**
 * puts2 - print string new line of to the next
 * @str: is a char
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if ((i % 2) == 0)
{
_putchar(str[i]);
}
else
{
continue;
}
i = i + 1;
}
_putchar('\n');
}
