/*
** EPITECH PROJECT, 2017
** strlowcase
** File description:
** str to lowercase
*/

#include <unistd.h>
#include <stdio.h>

char *my_strlowcase(char *str)
{
	if (str == NULL)
		return (NULL);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}
	return (str);
}
