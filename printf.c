#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed, no '\0'
 */

int _printf(const char *format, ...)
{
	int i, count;
	char c;
	const char *str;

	va_list(ap);

	va_start(ap, format);
	count = 0;
	if (format == NULL)
		EXIT_FAILURE;
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);
		else
		{
			format++;
			if (format[i] == 's')
			{
				str = va_arg(ap, const char *);
				count += write(1, str, strlen(str));
			}
			else if (format[i] == 'c')
			{
				c = va_arg(ap, int);
				count += write(1, &c, 1);
			}
			else if (format[i] == '%')
				count += write(1, &format[i], 1);
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_num(va_arg(ap, int));
		}
	}
	va_end(ap);
	return (count);
}
