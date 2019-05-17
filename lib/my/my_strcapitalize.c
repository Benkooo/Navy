/*
** EPITECH PROJECT, 2017
** capitaliz
** File description:
** capit
*/

#include <stdio.h>

static void do_capitaliz(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z') {
		if (str[i - 1] == ' ')
			str[i] = str[i] - 32;
	}
}

char *my_strcapitalize(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 0; str[i] != '\0'; i++) {
		do_capitaliz(str, i);
	}
	return (str);
}
