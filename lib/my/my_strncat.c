/*
** EPITECH PROJECT, 2017
** strncat
** File description:
** strncat
*/

#include <stdio.h>

static int my_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int destlen = my_strlen(dest);

	for (i = 0; i < nb && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';
	return (dest);
}
