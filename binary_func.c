#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * to_binary - change number to binary
 * @args: argument to change.
 * Return: binary
 */
int to_binary(va_list args)
{
unsigned int n;
 int  i, j, c;
int arr[1000];
n = va_arg(args, int);
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
}
