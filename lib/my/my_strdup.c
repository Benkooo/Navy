/*
** EPITECH PROJECT, 2017
** strdup
** File description:
** str dup
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char *src)
{
	char *newstring = malloc(sizeof(char) * my_strlen(src) + 1);

	if (src == NULL)
		return (NULL);
	for (int i = 0; src[i] != '\0'; i++)
		newstring[i] = src[i];
	return (newstring);
}
