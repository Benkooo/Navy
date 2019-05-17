/*
** EPITECH PROJECT, 2017
** getsmallerlen
** File description:
** return smaller len
*/

#include "../../include/my.h"

int get_smallerstrlen(char *s1, char *s2)
{
	int a = my_strlen(s1);
	int b = my_strlen(s2);

	if (a - b > 0)
		return (b);
	else
		return (a);
	return (0);
}
