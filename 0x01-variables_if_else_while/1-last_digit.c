#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- This program will assign a random number
 * to the variable n each time it is executed.
 * Complete the source code in order to
 * print the last digit of the number stored in the variable n.
 * You can find the source code here
 * The variable n will store a different
 * value every time you run this program
 * You don’t have to understand what rand,
 * srand, and RAND_MAX do. Please do not touch this code
 * The output of the program should be:
 * The string Last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if the last digit of n is greater than
 * 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not
 * 0: the string and is less than 6 and not 0
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastNum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastNum = n % 10;
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastNum);
}
return (0);
}
