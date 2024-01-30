#include "main.h"
/**
 * print_num - returns the format specifier.
 * @n: char param
 * @num: last param
 *
 * Return: length of string
 */

int  print_num(char *n, int num)
{
	n = malloc(sizeof(int));

	sprintf(n, "%d", num);

	n, strlen(n);

	return (strlen(n));
}
