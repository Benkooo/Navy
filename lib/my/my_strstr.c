/*
** EPITECH PROJECT, 2017
** strstr
** File description:
** strstr
*/

#include <unistd.h>
#include <stdio.h>

static char *compare(char *str, char const *to_find, int *i, int *j)
{
	while (to_find[(*j)] != '\0' && to_find[(*j)] == str[(*i) + (*j)]) {
		if (to_find[(*j) + 1] == '\0')
			return (&str[(*i)]);
		(*j)++;
	}
	return (NULL);
}

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		j = 0;
		if (str[i] == to_find[j])
			return (compare(str, to_find, &i, &j));
		i++;
	}
	return (NULL);
}
