#include "main.h"

void hex_to_char(char c);

/**
 * print_S - a function that prints a string with hex
 * @str: the given string
 * Return: length of the string
 */
int print_S(char *str)
{
	int i, j, len;
	char c;
	(void) j;

	len = 0;
	for (i = 0; str[i] ; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			c = str[i];
			j = write(1, &c, 1);
			len++;
		}
		else
		{
			j = write(1, "\\x", 2);
			hex_to_char(str[i]);
			len = len + 4;
		}
	}
	return (len);
}

/**
 * hex_to_char - a function converts a char to hex
 * @c: the given char
 * Return: void
 */
void hex_to_char(char c)
{
	int j;
	int value = (int) c;
	char hex_digits[] = "0123456789ABCDEF";
	char hex[3];

	(void) j;
	hex[0] = hex_digits[value / 16];
	hex[1] = hex_digits[value % 16];
	hex[2] = '\0';
	j = write(1, hex, 2);
}
