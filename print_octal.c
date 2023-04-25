#include "main.h"

/**
 * print_octal - function that prints octal numbers.
 * @n: the number.
 *
 * Return: length.
 */
unsigned int print_octal(unsigned int n)
{
	unsigned int length, power8, j, digit, number;
	int i;
	char c;

	(void) i;
	length = 0;
	if (n != 0)
	{
		number = n;
		while (number != 0)
		{
			number /= 8;
			length++;
		}
		power8 = 1;
		for (j = 1; j <= length - 1; j++)
			power8 *= 8;
		for (j = 1; j <= length; j++)
		{
			digit = n / power8;
			c = digit + '0';
			i = write(1, &c, 1);
			n -= digit * power8;
			power8 /= 8;
		}
	}
	else
	{
		c = '0';
		i = write(1, &c, 1);
		return (1);
	}
	return (length);
}
