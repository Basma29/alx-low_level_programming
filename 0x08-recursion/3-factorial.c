#include "main.h"
#include <stdio.h>

/**
* factorial - searchs for the factorial of a number
* @n: the number to find the factorial of
*
* Return: the factorial of the number
*/
int factorial(int n)
{
int next;
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
{
next = factorial(n - 1);
return (n * next);
}
