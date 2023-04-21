#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @addr: Address of the function.
 * @bytes: Number of bytes to print.
 *
 * Return: void.
 */
void print_opcodes(char *addr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", addr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 * @argc: Number of command line arguments.
 * @argv: Array of command line argument strings.
 *
 * Return: 0 on success, 1 on error, 2 on negative byte count.
 */
int main(int argc, char **argv)
{
	int num_bytes;
	char *addr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(addr, num_bytes);

	return (0);
}


