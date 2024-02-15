#include "main.h"

/**
 * main - entry point of a program that adds positive numbers.
 * @argc: number of argument
 * @argv: parameter that handle argument
 *
 * Return: 1 (Error) or 0 (success)
 */
int main(int argc, char *argv[])
{
	int arg = argc - 1, i, sum = 0, t = 1;

	if (arg >= 2 && isdigit(argv[t]) && t < argc)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		t++;
	}
	else if (arg == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
