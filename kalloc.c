#include "shell.h"
/**
 * set_m - function
 * @s: string
 * @b: character
 * @n: integer
 * Return: character
 */
char *set_m(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(s + k) = b;
		k++;
	}
	return (s);
}
/**
 * g_mem- memory location
 * @size: size
 * @newt: int
 * Return: Void pointer
 */
void *g_mem(unsigned int newt, int size)
{
	void *p = NULL;

	if (newt == 0 || size == 0)
		return (NULL);
	p = malloc(newt * size);

	if (p == NULL)
		return (NULL);

	set_m(p, 0, size * newt);
	return (p);
}
