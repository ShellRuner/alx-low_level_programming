#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv:param
 *
 * Return: value
 */
int main(int argc, char *argv[])
{
	int index, multipli;

	multipli = 1;
	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multipli = multipli * atoi(argv[index]);
	}
	printf("%d\n", multipli);
	return (0);
}
