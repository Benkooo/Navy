/*
** EPITECH PROJECT, 2017
** strlen
** File description:
** get len of a string
*/

#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (84);
	while (str != NULL && str[i] != '\0')
		i++;
	return (i);
}
