#include "main.h"

/**
 * print_p - function that prints adresse of a pointers.
 * @p: pointer.
 *
 * Return: length.
 */
int print_p(void *p)
{
	int i, j, y, length;
	char buf[20];
	uintptr_t addr = (uintptr_t) p;

	i = j = y = length = 0;
	(void) y;
	while (addr != 0)
	{
		int digit = addr % 16;

		if (digit < 10)
		{
			buf[i] = digit + '0';
		}
		else
		{
			buf[i] = digit - 10 + 'a';
		}
		addr /= 16;
		i++;
	}
	y = write(1, "0x", 2);
	for (j = i - 1; j >= 0; j--)
	{
		y = write(1, &buf[j], 1);
		length++;
	}

	return (length + 2);
}
