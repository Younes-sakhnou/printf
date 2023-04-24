#include "main.h"

/* prototype of get_num_digits */
int get_num_digits(int num);

/**
 * print_number - a function that prints numbers
 * @num: the given number
 * Return: void.
 */
void print_number(int num)
{
	char *buffer, c;
	int i, is_negative, j, is_int_min;

	(void) j;
	i = is_negative = is_int_min = 0;

	if (num == 0)
	{
		j = write(1, "0", 2);
		return;
	}

	buffer = malloc(sizeof(char) * (get_num_digits(num)));
	if (!buffer)
	{
		return;
	}

	if (num < 0)
	{
		if (num == INT_MIN)
		{
			is_int_min = 1;
			num++;
		}
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}
	if (is_int_min)
	{
		buffer[0] = buffer[0] + 1;
	}
	if (is_negative)
	{
		j = write(1, "-", 2);
	}
	while (i > 0)
	{
		c = buffer[--i];
		j = write(1, &c, 1);
	}
}
/**
 * get_num_digits - a function that counts the num of digits in a number.
 * @num: the given number
 * Return: the number of digits in num.
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
