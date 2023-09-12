#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line.
*@n: number based to function.
* Return: Always 0.
*/
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
_putchar(i);
break;
}
_putchar(i);
_putchar(",");
_putchar(" ");
}
}
else
{
for (i = n; i <= n; i--)
{
if (i == 98)
{
_putchar(i);
break;
}
_putchar(i);
_putchar(",");
_putchar(" ");
}
}
}
