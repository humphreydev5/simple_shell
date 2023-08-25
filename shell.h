#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#define _GNU_SOURCE


char *file_v(char *path_f, char *file);
int terminal(char *av[], int counter, char **env);
char *_getenv(char *name, char **env);
void *g_mem(unsigned int newt, int size);
char *_strcpy(char *target, char *sc);
int _strlen(const char *s);
char *set_m(char *s, char b, unsigned int n);
int process_cr(char *av[], int counter, char **env);
char *_strcat(char *target, char *sc);
unsigned int lenght_array(char **p);
void print_env(char **env);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
void non_terminal(char **av);
int _strncmp(const char *s1, const char *s2, size_t n);

#endif
