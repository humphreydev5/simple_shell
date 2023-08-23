#include "shell.h"

/**
 * get_line - reads strings from cmd
 * Return: read string
*/
char *get_line()
{
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t n_line = 0;

	n_line = getline(&line, &bufsize, stdin);
	if (n_line == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		perror("getline failed");
		exit(EXIT_FAILURE);
	}
	return (line);

}
