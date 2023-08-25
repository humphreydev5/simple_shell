#include "shell.h"
/**
 * print_env - for environment
 * @env: passed parameter
 * Return: nothing;
 **/

void print_env(char **env)
{
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		write(STDOUT_FILENO, env[i], strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
