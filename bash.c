#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: character array
 * @env: env
 * Return: status;
 **/

int main(int ac, char *av[], char **env)
{
	int counter = 1, status_exit = 0;
	(void)ac;

	if (ac > 1)
	{
		non_terminal(av);
		return (0);
	}
	status_exit = terminal(av, counter, env);
	return (status_exit);
}
