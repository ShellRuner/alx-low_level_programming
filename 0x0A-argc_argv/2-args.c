#include <stdio.h>

/**
 * main - a function
 * @argc: param
 * @argv: param
 *
 * Return: value
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}