#include "shell.h"

/**
 * _strcat - join string together.
 * @target: string
 * @sc: string
 * Return: joined string
 */
char *_strcat(char *target, char *sc)
{
	unsigned int l2 = 0, i = 0, j = 0, l1 = 0;
	char *result = NULL;

	l2 = _strlen(sc);
	l1 = _strlen(target);

	result = g_mem(sizeof(char), (l1 + l2 + 1));
	if (result == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (target)
	{
		while (i < l1)
		{
			result[i] = target[i];
			i++;
		}
	}

	if (sc)
	{
		while (i < (l1 + l2))
		{
			result[i] = sc[j];
			i++;
			j++;
		}
	}

	result[i] = '\0';

	return (result);
}

