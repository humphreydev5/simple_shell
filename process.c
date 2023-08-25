#include "shell.h"
/**
 * process_cr - for execution of processes
 * @av: character array
 * @counter: counts execution
 * @env: env
 * Return: ntothing
 **/
int process_cr(char *av[], int counter, char **env)
{
	char *file_f = NULL, *path = NULL;
	int exit_status = 0, status = 0, loc = 0, seen = 0;
	struct stat st;
	pid_t child;
	(void)counter;

	if (stat(av[1], &st) == 0)
		seen = 1, file_f = av[1];
	else
	{
		path = _getenv("PATH", env), file_f = file_v(path, av[1]);
		if (file_f != NULL)
			loc = 1, seen = 1;
		free(path);
	}
	if (seen)
	{
		child = fork();
		if (child == 0)
		{
			if ((execve(file_f, (av + 1), env)) == -1)
			{
				perror(av[0]);
				(loc == 1) ? free(file_f) : (void) loc;
			}
		}
		waitpid(child, &status, 0), (loc == 1) ? free(file_f) : (void) loc;
		if (WIFEXITED(status))
		{
			exit_status = WEXITSTATUS(status);
			return (exit_status);
		}
	} else
	{
		perror(av[0]);
		return (127);
	}
	return (0);
}

