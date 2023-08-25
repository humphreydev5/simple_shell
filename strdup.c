#include "shell.h"

/**
 * _strdup - string copy
 * @str: string
 * Return: s
 **/
char *_strdup(char *str)
{
	int l, j;
	char *s;

	if (!str)
	{
		return (NULL);
	}

	l = _strlen(str) + 1;

	s = g_mem(l, sizeof(char));
	if (!s)
	{
		return (NULL);

	}

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
