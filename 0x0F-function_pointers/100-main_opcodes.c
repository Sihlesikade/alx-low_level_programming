#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a function
 * @addr: pointer to the function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(char *addr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", addr[i] & 0xff);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
}

/**
 * main - prints the opcodes of its own main  function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:0 on success,1 on incorrect number of arguments,2 on negative number
 * of bytes
 */
int main(int argc, char **argv)
{
	int num_bytes;

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

	char *addr = (char *)&main;

	print_opcodes(addr, num_bytes);

	return (0);
}
