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
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);
		else
		{
			format++;
			switch (format[i])
			{
				case 's':
					str = va_arg(ap, const char *);
					count += write(1, str, strlen(str));
					break;
				case 'c':
					c = va_arg(ap, int);
					count += write(1, &c, sizeof(char));
					break;
				case '%':
					count += write(1, &format[i], sizeof(char));
					break;
				default:
					break;
			}
		}
	}
	va_end(ap);
	return (count);
}
