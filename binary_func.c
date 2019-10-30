#include "holberton.h"

/**
 * to_binary - change number to binary
 * @args: argument to change.
 * Return: binary
 */
int to_binary(va_list args)
{
unsigned int n;
int  i, j, p = 0, x = 1;
n = = va_arg(va, int)
while ((n / x) != 0)
{
x *= 10;
p++;
}
int arr[p];
c = n;
i = 0;
if (c == 0)
{
_putchar('0');
return (1);
}
while (c > 0)
{
arr[i] = c % 2;
c = c / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
_putchar(arr[j] + '0');
return (i);
