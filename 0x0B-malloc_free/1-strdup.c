#include "main.h"

/**
 * _strdup - A function that duplicate a string
 * @str: The pointer that handle the string to duplicate
 *
 * Return: A pointer to a new string which is a duplicate of the
 *         string str.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	size_t str_len;
	char *buff;

	if (str == NULL)
		return (NULL);
	str_len = strlen(str);
	buff = malloc(sizeof(char) * str_len);
	if (buff == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		buff[i] = str[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
