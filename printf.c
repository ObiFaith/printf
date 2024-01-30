#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed, no '\0'
 */

int _printf(const char *format, ...)
{
	int i, count, num;
	char c;
	char *n;
	const char *str;
	va_list(ap);

	va_start(ap, format);
	count = 0;

	if (format == NULL)
		return (1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			format++;
			n = malloc(sizeof(int));
			switch (format[i])
			{
				case 's':
					str = va_arg(ap, const char *);
					write(1, str, strlen(str));
					count += strlen(str);
					break;
				case 'c':
					c = va_arg(ap, int);
					write(1, &c, sizeof(char));
					count += 1;
					break;
				case '%':
					write(1, &format[i], sizeof(char));
					count += 1;
					break;
				case 'd':
					num = va_arg(ap, int);
					sprintf(n, "%d", num);
					write(1, n, strlen(n));
					count += strlen(n);
					break;
				case 'i':
					num = va_arg(ap, int);
					sprintf(n, "%d", num);
					write(1, n, strlen(n));
					count += strlen(n);
					break;
				default:
					break;
			}
			free(n);
		}
	}
	va_end(ap);
	return (count);
}
