#include "main.h"

/**
 * main - entry point
 * @argc: the number of argument
 * @argv: the parameter the handle the arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int arg = argc - 1;

	if (argv[0])
		printf("%d\n", arg);
	return (0);
}
