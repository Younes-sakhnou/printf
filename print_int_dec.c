#include "main.h"

int get_num_digits(int num);

/**
 * print_int_dec - a function that prints a number
 * @n: the given number
 * Return: void.
 */
void print_int_dec(int n)
{
	char c;
	int num, len, i, j, power10, digit;

	(void) j;
	if (n != 0)
	{
		if (n < 0)
		{
			c = '-';
			j = write(1, &c, 1);
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		power10 = 1;
		for (i = 1; i <= len - 1; i++)
			power10 *= 10;
		for (i = 1; i <= len; i++)
		{
			digit = n / power10;
			if (n < 0)
			{
				c = (digit * -1) + 48;
				j = write(1, &c, 1);
			}
			else
			{
				c = digit + '0';
				j = write(1, &c, 1);
			}
			n = n - (digit * power10);
			power10 /= 10;
		}
	}
	else
	{
		c = '0';
		j = write(1, &c, 1);
	}
}

/**
 * get_num_digits - a function that counts the number of digits in a number.
 * @num: the given number.
 * Return: the number of digits in num
 */
int get_num_digits(int num)
{
	int count = 0;

	if (num == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
