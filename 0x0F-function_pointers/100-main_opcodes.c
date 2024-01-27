#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect, or 2 if
 * the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < n; i++)
		printf("%02x ", *((unsigned char *)main + i));

	printf("\n");

	return (0);
}

