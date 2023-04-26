#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
int get_num_digits(int num);
void print_int_dec(int n);
int _printf(const char *format, ...);
unsigned int print_binary(unsigned int n);
unsigned int print_unsig(unsigned int n);
unsigned int print_octal(unsigned int n);
unsigned int print_hex(unsigned int n, unsigned int c);
unsigned int print_x(unsigned int n);
unsigned int print_X(unsigned int n);
void hex_to_char(char c);
int print_S(char *str);
int print_p(void *p);
#endif
