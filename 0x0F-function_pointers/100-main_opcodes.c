#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcode - Prints the opcode of a function
 * @func: Pointer to the function whose opcodes to print
 * @bytes: Number of opcodes to print
 *
 * Return: Nothing.
 */
void print_opcode(void *func, int bytes)
{
	int i;
	unsigned char *opcode = (unsigned char *)func;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x", opcode[i]);
			break;
		}
		printf("%02x ", opcode[i]);
	}
	printf("\n");
}

/**
 * main - Print opcodes of its own main function
 * @argc: number of command line arguments passed
 * @argv: array of arguments
 *
 * Return: 0 on success, if it fails, 1 or 2.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	print_opcode((void *)main, bytes);
	return (0);
}
