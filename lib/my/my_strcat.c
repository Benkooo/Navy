/*
** EPITECH PROJECT, 2017
** strcat
** File description:
** concat 2 strings
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *dst, char const *sc)
{
	int i = 0;
	int dst_len = my_strlen(dst);
	char *str = malloc(sizeof(char) * (my_strlen(dst) + my_strlen(sc)) + 1);

	for (int j = 0; dst[j] != 0; j++)
		str[j] = dst[j];
	while (sc[i] != 0) {
		str[dst_len + i] = sc[i];
		i++;
	}
	str[dst_len + i] = '\0';
	return (str);
}
