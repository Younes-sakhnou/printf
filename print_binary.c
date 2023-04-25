#include "main.h"

/**
 * print_binary - function that changes numbers to binary
 * @n: number.
 *
 * Return: no return.
 */
void print_binary(unsigned int n)
{
	unsigned int length, power10, i, digit, number;
	int j;
	char c;
	(void) j;

	if (n != 0)
	{
		number = n;
		length = 0;

		while (number != 0)
		{
			number /= 2;
			length++;
		}
		power10 = 1;

		for (i = 1; i <= length - 1; i++)
		{
			power10 *= 2;
		}
		for (i = 1; i <= length; i++)
		{
			digit = n / power10;
			c = digit + '0';
			j = write(1, &c, 1);
			n -= digit * power10;
			power10 /= 2;
		}
	}
	else
	{
		c = '0';
		j = write(1, &c, 1);
	}
}
