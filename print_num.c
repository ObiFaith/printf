#include "main.h"
/**
 * print_num - for conversion of %i and %d
 * @num: int param
 *
 * Return: strlen n
 */

int print_num(int num)
{
	int len;
	char *n;

	n = malloc(sizeof(int));
	sprintf(n, "%d", num);

	len = (strlen(n));
	write(1, n, len);
	free(n);

	return (len);
}
