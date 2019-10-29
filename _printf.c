#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - Prints a formatted string, similar to printf.
 * @format: input
 * Return: Returns length of string.
 */
int _printf(const char *format, ...)
{
int i, count = 0;
va_list args;
int (*func)(va_list);

if (format == NULL)
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++) /*test all the strin */
{
if (format[i] == '%') /*enter % test*/
{
i++;
if (format[i] == '\0')
{
return (-1);
}
while (format[i] == ' ')
i++;
func = get_func(format[i]);
if (func == NULL)
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
else
count += func(args);
}/*end % test*/
else /*if char != % simple print*/
{
_putchar(format[i]);
count++;
}
 }/*end test string*/
va_end(args);
return (count);
}
