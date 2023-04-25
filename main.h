#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
int get_num_digits(int num);
void print_int_dec(int n);
int _printf(const char *format, ...);
void print_binary(unsigned int n);
#endif
