/*
** EPITECH PROJECT, 2018
** nbr to str
** File description:
** converts int to string
*/

#include <stdlib.h>
#include "../../include/my.h"

char *nbr_to_str(int nbr)
{
	int len = get_len_int(nbr) - 1;
	char *str = malloc(sizeof(char) * len + 1);

	for (int j = len ; j >= 0 ; j--) {
		str[j] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	str[len + 1] = '\0';
	return (str);
}
