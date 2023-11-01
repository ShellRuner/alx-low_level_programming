#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: the first string
 * @s2: The second string
 *
 * Return: A pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t i = 0, t = 0;
	char *buff;

	buff = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
	if (buff == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		buff[i] = s1[i];
		i++;
	}
	while (s2[t] != '\0')
	{
		buff[i] = s2[t];
		t++;
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
