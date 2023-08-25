#include "shell.h"

/**
 * *_strcpy - cpy str
 * @target: char target
 * @sc: char sc
 * Return: target.
 */
char *_strcpy(char *target, char *sc)
{
	int i;
	char a;

	for (i = 0; sc[i] != '\0'; i++)
	{
		a = sc[i];
		target[i] = a;
	}
	target[i] = '\0';
	return (target);
}

/**
 * _strlen - rstr len
 * @s: character array
 * Return: Nothing
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
