#include "main.h"

/**
 * main - Entry point of a program that prints all
 *        arguments it receives.
 * @argc: Number of argument
 * @argv: Parameter that handle arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
