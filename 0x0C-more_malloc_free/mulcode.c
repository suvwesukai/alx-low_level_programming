#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _puts - Prints a string
 * @str: string to be printed
 *
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - get the length of string
 * @str: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _isdigit - Check if a string contains a non-digit
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, otherwise 1
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * get_digit - Converts a digit character to corresponding integer
 * @c: digit to be converted
 *
 * Return: Converted digit
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		_puts("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * mul - multiply two positive integers
 * @num1: Pointer to first integer
 * @num2: Pointer to second integer
 *
 * Return: The result as a string
 */
char *mul(char *num1, char *num2)
{
	int i, j, k, len1, len2, total_len, carry, n1, n2, sum;
	int *result;
	char *result_str;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	if (len1 == 0 || len2 == 0)
	{
		return "0";
	}
	total_len = len1 + len2 + 1;

	/* allocate memory for the results */
	result = malloc(sizeof(int) * total_len);
	result_str = malloc(sizeof(char) * total_len + 1);

	if (!result || !result_str)
		return (NULL);

	/*initialize result array */
	for (i = 0; i < total_len; i++)
		result[i] = 0;


	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = get_digit(num1[i]);

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = get_digit(num2[j]);
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	i = 0;
	while (i < total_len && result[i] == 0)
		i++;
	if (i == total_len)
		return (0);

	k = 0;

	while (i < total_len)
	{
		result_str[k++] = result[i] + '0';
		i++;
	}
	result_str[k] = '\0';
	free(result);
	return (result_str);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result_str;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!_isdigit(num1) || !_isdigit(num2))
	{
		_puts("Error\n");
		exit(98);
	}

	/* multiply the two input integers */
	result_str = mul(num1, num2);
	if (result_str == NULL)
	{
		_puts("Error\n");
		exit(98);
	}

	_puts(result_str);
	_putchar('\n');

	free(result_str);
	return (0);
}
