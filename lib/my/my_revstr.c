/*
** EPITECH PROJECT, 2017
** revstr
** File description:
** revstr
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

char *my_revstr(char *str)
{
	int start = 0;
	int end = my_strlen(str) - 1;
	char tmp;

	if (str == NULL)
		return (NULL);
	for (start = 0; start != ((my_strlen(str)) / 2); start++) {
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		end = end - 1;
	}
	return (str);
}
