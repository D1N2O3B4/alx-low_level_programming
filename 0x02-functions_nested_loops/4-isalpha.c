#include "main.h"
/**
 * _isalpha -> checks for alphabets
 * @c: is a character argument
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (0);
}
else
{
return (1);
}
}
