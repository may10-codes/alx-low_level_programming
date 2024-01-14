#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command-line arguments passed to the program
 * @argv: array of strings containing the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1);
    return 0;
}

