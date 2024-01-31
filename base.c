#include <math.h>
#include "main.h"

/**
 * base - convert nubmer based on number system
 * @num: number to convert
 * @numb: number system to convert to
 *
 * Return: number of characters printed
 */

void base(int num, int numb)
{
	int i, n;
	char one;
	char zero;
	
	one = '1';
	zero = '0';
	n = 0;
	for (i = 0; n <= num; i++)
		n = _pow(numb, i);
	for (i -= 2; i != 0; --i)
	{
		n = _pow(numb, i);
		write(1, num >= n ? &one : &zero, 1);
		if (num >= n)
			num -= n;
	}
	write(1, &zero, 1);
}
