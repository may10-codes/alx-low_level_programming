#include <stdio.h>
#include "main.h"
/**
*main - Prints all arguments it receives
*@argc: number of arguments
*@argv: pointer array to argc
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
