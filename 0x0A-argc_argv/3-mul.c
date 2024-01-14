#include<stdio.h>
#include"main.h"
/**
*main - Function that multiplies 2 numbers
*@argc: number of arguments
*@argv: pointer array to argc
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int k, l;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	l = atoi(argv[2]);
	printf("%d\n", k * l);
	return (0);
}

