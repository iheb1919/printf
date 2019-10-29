#include "holberton.h"

/**
 * print_char - prints argument of type char
 * @args: argument to print
 *
 * Return: number of characters printed
 * in this case, return value will always be 1
 */

int print_char(va_list args)
{
	char print_this = va_arg(args, int);

	_putchar(print_this);

	return (1);
}

/**
 * print_percent - prints percent sign
 * @args: percent sign
 *
 * Return: number of character printed
 * in this case, return value will always be 1
 */

int print_percent(va_list __attribute__((unused)) args)
{
	char percent = '%';

	_putchar(percent);

	return (1);
}

/**
 * print_string - prints argument of type char *
 * @args: -  argument to print
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	int count = 0;
	char *string = va_arg(args, char *);


	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (; string[count] != '\0'; count++)
		_putchar(string[count]);

	return (count);
}

/**
 * print_decimal - prints argument of type decimal.
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */
int print_decimal(va_list args)
{
int len = 0;
int digit, printt, last;
int divv = 1000000000;
int num ;
unsigned int x;

num =  = va_arg(args, int);
printt = 0;
if (num < 0)
{
_putchar('-');
num *= -1;
len++;
}
x = num;
if (x == 0)
{
_putchar('0');
return (1);
}
while (divv > 1)
{
digit = (x / divv) % 10;
printt += digit;
if (printt != 0)
{
_putchar(digit + '0');
len++;
}
divv = divv / 10;
}

last = x % 10;
_putchar(last + '0');
len++;

return (len);


}

/**
 * print_integer - prints argument of type integer.
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */
int print_integer(va_list args)

{
int len = 0;
int digit, printt, last;
int divv = 1000000000;
int num;
unsigned int x;

num = va_arg(args, int);
printt = 0;
if (num < 0)
{
_putchar('-');
num *= -1;
len++;
}
x = num;
if (x == 0)
{
_putchar('0');
return (1);
}
while (divv > 1)
{
digit = (x / divv) % 10;
printt += digit;
if (printt != 0)
{
_putchar(digit + '0');
len++;
}
divv = divv / 10;
}
last = x % 10;
_putchar(last + '0');
len++;
return (len);
}

