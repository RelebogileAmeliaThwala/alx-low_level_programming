#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers.
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
