#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char is: %lu bytes\n", sizeof(a));
printf("Size of an int is: %lu bytes\n", sizeof(b));
printf("Size of a long int is: %lu bytes\n", sizeof(c));
printf("Size of a long long int is: %lu bytes\n", sizeof(d));
printf("Size of a float is: %lu bytes\n", sizeof(e));
return (0);
}
