#include "main.h"
/**
 * print_most_numbers - prints 0 to 9, 2 and 4 are not part
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
i = i + 1;
}
_putchar(i + '0');
}
_putchar('\n');
}
