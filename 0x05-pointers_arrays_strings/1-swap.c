#include "main.h"
/**
 * swap_int - swap variable numbers
 * @a: is a pointer
 * @b: is a pointer
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
