#include "shell.h"

/**
 * file_v - check for dir.
 * @path_f: path_f
 * @file: file
 * Return: null
 **/
char *file_v(char *path_f, char *file)
{
	struct stat st;
	char *n_path;
	char *token = NULL;
	int i = 0;

	token = strtok(path_f, ":");
	while (token != NULL)
	{
		n_path = malloc((_strlen(token) + _strlen(file) + 2) * sizeof(char));
		if (n_path == NULL)
		{
			free(n_path);
			return (file);
		}
		strcpy(n_path, token);
		strcat(n_path, "/");
		strcat(n_path, file);
		if (stat(n_path, &st) == 0)
		{
			return (n_path);
		}
		free(n_path);
		token = strtok(NULL, ":");
		i++;
	}
	return (NULL);
}
