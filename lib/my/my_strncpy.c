/*
** EPITECH PROJECT, 2017
** strncpy
** File description:
** strncpy
*/

#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n)
{
	int i;

	if (src == NULL || dest == NULL)
		return (NULL);
	for (i = 0; i < n; i++) {
		dest[i] = src[i];
		if (i == n) {
			dest[i] = '\0';
			return (dest);
		}
	}
	dest[i] = '\0';
	return (dest);
}
