/*
** EPITECH PROJECT, 2017
** getsmallstr
** File description:
** get smallest string
*/

#include "../../include/my.h"

char *get_smallstr(char *s1, char *s2)
{
	int a = my_strlen(s1);
	int b = my_strlen(s2);

	if (a - b > 0)
		return (s2);
	else
		return (s1);
}
