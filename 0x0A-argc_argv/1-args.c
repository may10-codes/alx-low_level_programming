#include<stdio.h>
#include"main.h"
/**
* main - Function that prints arg count
* @argc: number of arguments
* @argv: array of argc
* Return: Always zero (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

