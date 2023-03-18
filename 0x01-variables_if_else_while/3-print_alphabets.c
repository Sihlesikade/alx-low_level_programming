#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *lowercase  = "abcdefghijklmnopqrstuvwxyz";
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; lowercase[i] == '0'; i++)
	}
		putchar(lowercase[i]);
	}
	for (i = 0; uppercase[i] == '0'; i++)
	}
		putchar(uppercase[i]);
	}
	putchar('\n');
	return (0);
}
