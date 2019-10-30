#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

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
c = va_arg(args, int);
n = c;
i = 0;
if (n == 0)
{
_putchar('0');
return (1);
}
while (n > 0)
{
arr[i] = n % 2;
n = n / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
_putchar(arr[j] + '0');
return (i);
}
