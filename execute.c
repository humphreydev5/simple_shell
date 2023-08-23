#include "shell.h"

/**
 * execution - executes a command
 * @av: array of string
 * Return: 0 on success
*/

int execution(char **av)
{
	/* char *const envp = {"PATH=/usr/bin/tokens[0]", NULL}; */
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == 0)
	{
		if (execve(av[0], av, NULL) == -1)
			perror(av[0]);
		exit(1);
	}
	else if (child_pid > 0)
		wait(NULL);
	else
		perror("fork failed");

	return (0);
}
