#include "main.h"


unsigned int print_x(unsigned int n);
unsigned int print_X(unsigned int n);
/**
 * print_hex - function that prints hexadecimals numbers.
 * @n: number.
 * @c: if c = 1 is uppercase and 0 is lowercase.
 *
 * Return: length.
 */
unsigned int print_hex(unsigned int n, unsigned int c)
{
	unsigned int length, powsixth, i, digit, number;
	char difference, charr;
	int j;

	(void) charr;
	(void) j;
	length = 0;
	if (n != 0)
	{
		number = n;
		if (c)
			difference = 'A' - ':';
		else
			difference = 'a' - ':';
		while (number != 0)
		{
			number /= 16;
			length++;
		}
		powsixth = 1;
		for (i = 1; i <= length - 1; i++)
			powsixth *= 16;
		for (i = 1; i <= length; i++)
		{
			digit = n / powsixth;
			if (digit < 10)
			{
				charr = digit + '0';
				j = write(1, &charr, 1);
			}
			else
			{
				charr = digit + '0' + difference;
				j = write(1, &charr, 1);
			}
			n -= digit * powsixth;
			powsixth /= 16;
		}
	}
	else
	{
		charr = '0';
		j = write(1, &charr, 1);
		return (1);
	}
	return (length);
}

/**
 * print_x - function that print hex in lowercase.
 * @n: number.
 *
 * Return: unsigned int.
 */
unsigned int print_x(unsigned int n)
{
	return (print_hex(n, 0));
}

/**
 * print_X - function that print hex in uppercase.
 * @n: number.
 *
 * Return: unsigned int.
 */
unsigned int print_X(unsigned int n)
{
	return (print_hex(n, 1));
}
