#include "main.h"

/**
 * base - convert nubmer based on number system
 * @num: number to convert
 * @base: number system to convert to
 *
 * Return: number of characters printed
 */

int base(int num, int base)
{
	int i, n, count;
	char one;
	char zero;

	one = '1';
	zero = '0';
	count = 0;
	n = 0;

	for (i = 0; n <= num; i++)
		n = pow(base, i);
	for (i -= 2; i != 0; --i)
	{
		n = pow(base, i);
		if (num >= n)
		{
			write(1, &one, 1);
			num -= n;
			count++;
		}
		else
		{
			write(1, &zero, 1);
			count++;
		}
	}
	write(1, &zero, 1);
	count++;
	return (count);
}
