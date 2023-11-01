#include "main.h"

/**
 * main - entry point of a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: parameter that handle arguments
 *
 * Return: 0 (success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int arg = argc - 1, i, mul = 1;

	if (arg >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
