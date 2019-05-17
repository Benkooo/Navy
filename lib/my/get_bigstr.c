/*
** EPITECH PROJECT, 2017
** getbigstr
** File description:
** get biggest string
*/

#include "../../include/my.h"

char *get_bigstr(char *s1, char *s2)
{
	int a = my_strlen(s1);
	int b = my_strlen(s2);

	if (a - b > 0)
		return (s1);
	else
		return (s2);
}
