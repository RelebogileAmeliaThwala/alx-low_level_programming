#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers 0 to 9 and letters A to F
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (n = 97; n <= 102; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
