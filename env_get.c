#include "shell.h"
/**
 * _getenv - for env variable
 * @name: string
 * @env: env
 * Return: token
 **/
char *_getenv(char *name, char **env)
{
	char *token1 = NULL, *token2 = NULL;
	char *env_name = NULL, *current_env = NULL;
	int i = 0;

	env_name = _strdup(name);

	while (env[i] && env)
	{
		current_env = NULL;
		token2 = NULL;
		current_env = _strdup(env[i]);
		token1 = strtok(current_env, "=");
		token2 = _strdup(strtok(NULL, "="));
		if (_strcmp(env_name, token1) == 0)
		{
			break;
		}
		free(current_env);
		free(token2);
		i++;
	}
	free(current_env);
	current_env = NULL;
	free(env_name);
	return (token2);
}
