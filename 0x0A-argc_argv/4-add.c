#include<stdio.h>
#include"main.h"
#include<string.h>
/**
*main - sum positive nums from args
*@argc: number of arguments
*@argv: array pointer to argc
*Return: zero (success)
*/
int main(int argc, char *argv[])
{
	int num;

	unsigned int r, sum = 0;
	char *t;

	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{
			t = argv[num];
			for (r = 0; r < strlen(t); r++)
			{
				if (t[r] < 48 || t[r] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(t);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

