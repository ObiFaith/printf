#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_num(int num);
void base(int num, int numb);
int _pow(int base, int index);

#endif
