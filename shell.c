#include "shell.h"

/**
 * main - reads, parse and execute command
 * Return: on success 0
*/
int main(void)
{
	while (1)
	{
		char *line = NULL;
		char **tokens = NULL;

		write(STDOUT_FILENO, "$ ", 2);
		line = get_line();
		tokens = tokenize(line);
		if (tokens != NULL)
			execution(tokens);

		free(tokens);
		free(line);
	}
	return (0);
}

