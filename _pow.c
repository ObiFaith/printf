#include "main.h"

/**
 * _pow - give the pow of a num based on its index
 * @base: num
 * @index: exponential
 *
 * Return: base ^ index
 */

int _pow(int base, int index)
{
	int i, result;

	result = 1;
	for (i = 1; i <= index; i++)
		result *= base;
	return (result);
}
