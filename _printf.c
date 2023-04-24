#include "main.h"

int _strlen(char *ptr);

/**
 * _printf - function that produces output according to a format.
 * @format: character string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, j, num, count;
	char *p, c;
	va_list args;

	if (!format)
		return (-1);
	if (!*format)
		return (0);
	i = count = 0;
	(void) j;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '\0')
			return (i + count);
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == 's')
			{
				p = va_arg(args, char *);
				if (!p)
					p = "(null)";
				j = write(1, p, (_strlen(p)));
				count = count + _strlen(p) - 2;
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				c = va_arg(args, int);
				j = write(1, &c, 1);
				count = count - 1;
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				num = va_arg(args, int);
				print_int_dec(num);
				if (num >= 0)
					count += get_num_digits(num) - 2;
				else
					count += get_num_digits(num) - 1;
				i++;
			}
			else if (format[i + 1] == '%')
			{
				c = '%';
				j = write(1, &c, 1);
				count = count - 1;
				i++;
			}
			else
			{
				c = '%';
				j = write(1, &c, 1);
			}
		}
		else
		{
			c = format[i];
			j = write(1, &c, 1);
		}
		i++;
	}
	va_end(args);
	return (count + i);
}

/**
 * _strlen - function that count the length of a string.
 * @ptr: pointer.
 *
 * Return: i.
 */
int _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
		;
	return (i);
}
