#include "main.h"
/**
 * _abs -> computes absolute value of an int
 * @i: is an integer value
 * Return: returns any value of i which is abs
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
else
{
i = -i;
return (i);
}
}
