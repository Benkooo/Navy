/*
** EPITECH PROJECT, 2017
** strcpy
** File description:
** string copy
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
	int i;

	if (src == NULL || dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
