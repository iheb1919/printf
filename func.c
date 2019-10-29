#include "holberton.h"
#include <unistd.h>

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
