#include "shell.h"
/**
 * terminal - terminal exec
 * @av: character array
 * @counter: number of execution
 * @env: env
 * Return: null
 **/
int terminal(char *av[], int counter, char **env)
{
	int terminal = 1, lineRead = 0, status_process = 0, i = 0;
	size_t bufSize = 0;
	char *line = NULL, *args[32], *token = NULL;

	isatty(STDIN_FILENO) == 0 ? terminal = 0 : terminal;
	while (1)
	{
		terminal == 1 ? write(STDIN_FILENO, "$ ", 2) : terminal;
		lineRead = getline(&line, &bufSize, stdin);
		if (lineRead == EOF)
		{
			free(line), write(STDIN_FILENO, "\n", 1);
			return (status_process);
		}
		else if (_strncmp(line, "exit\n", 4) == 0)
		{
			free(line);
			return (status_process);
		}
		else
		{
			if (_strncmp(line, "env\n", 3) == 0)
				print_env(env);
			else if (lineRead > 1)
			{
				token = strtok(line, " \t\n\r"), args[0] = av[0];
				for (i = 1; i < 32 && token != NULL; i++)
					args[i] = token, token = strtok(NULL, " \t\n\r");
				args[i] = NULL;
				if (args[1])
				{
					status_process = process_cr(args, counter, env);
				}
			} counter++;
		}
	}
	return (status_process);
}
