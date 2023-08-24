#include "shell.h"

/**
 * tokenize - split read string into tokens
 * @line: read strings
 * Return: parsed string
*/

char **tokenize(char *line)
{
	int i = 0, count = 0;
	char *string = NULL;
	char **av = malloc(SIZE * sizeof(char *));
	char *delim = " \n";

	string = strtok(line, delim);
	while (string)
	{
		av[i] = string;
		count++;
		if (count >= SIZE)
		{
			av = realloc(av, 160 * sizeof(char *));
			if (av == NULL)
			{
				perror("memory allocation failed");
				exit(EXIT_FAILURE);
			}
		}
		string = strtok(NULL, delim);
		i++;

	}
	av[i] = NULL;

	return (av);
}

