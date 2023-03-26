#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crack me
 *
 * Return: Always 0.(success)
 */
int main(void)
{
	int random_num = 0;
	int current_sum = 0;

	srand(time(NULL));

	while (current_sum < 2772)
	{
		random_num = rand() % 128;
		if ((current_sum + random_num) > 2772)
			break;
		current_sum += random_num;
		putchar(random_num);
	}
	putchar(2772 - current_sum);
	putchar('\n');
	return (0);
}
