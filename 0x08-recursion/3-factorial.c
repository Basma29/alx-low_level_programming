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
if (n == 1 || n == 0)
return (1);
else
{
return (n * f(n - 1));
}