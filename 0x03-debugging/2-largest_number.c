#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int big(int a, int b, int c)
{
int largest;
if (a > b)
{
if (a > c)
{
largest = a;
}
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{      
largest = c;
}
return (largest); 
}
