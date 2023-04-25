#include "main.h"

/**
 * print_unsig - function that prints unsigned numbers.
 * @n: number.
 *
 * Return: length.
 */
unsigned int print_unsig(unsigned int n)
{
	unsigned int length, power10, digit, j, number;
	int i;
	char c;

	(void) i;
	length = 0;
	if (n != 0)
	{
		number = n;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		power10 = 1;
		for (j = 1; j <= length - 1; j++)
			power10 *= 10;
		for (j = 1; j <= length; j++)
		{
			digit = n / power10;
			c = digit + '0';
			i = write(1, &c, 1);
			n -= digit * power10;
			power10 /= 10;
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
