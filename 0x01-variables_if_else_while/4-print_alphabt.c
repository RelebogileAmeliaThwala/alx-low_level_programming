#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 97; n <= 122; n++)
{
if (n != 101 && n != 113)
{
putchar(n);
}
}
putchar('\n');
return (0);
}
