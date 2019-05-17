/*
** EPITECH PROJECT, 2018
** octd_to_decimal.c
** File description:
** function
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

char *convert_pos_to_decimal(char *str)
{
	char *base = " ABCDEFGH";

	for (int j = 0 ; base[j] != 0 ; j++) {
		if (str[0] == base[j]) {
			str[0] = j + 48;
			break;
		}
	}
	return (str);
}

char *convert_decimal_to_pos(char *str)
{
	char *base = "0123456789";

	for (int j = 0 ; base[j] != 0 ; j++) {
		if (str[0] == base[j]) {
			str[0] = j + 64;
			break;
		}
	}
	return (str);
}

char *convert_decimal_to_binary(char *str)
{
	int nb = 0;
	char *base = "01";
	int len = my_strlen(base);
	char *tmp = "";
	char *bin = malloc(sizeof(char) * 2);

	nb = my_getnbr(str);
	bin[1] = 0;
	while ((float)nb / (float)len > 0) {
		bin[0] = base[nb % len];
		tmp = my_strcat(tmp, bin);
		nb /= len;
	}
	tmp = my_revstr(tmp);
	free(bin);
	return (tmp);
}

char *convert_binary_to_decimal(char *str)
{
	int size = my_strlen(str) - 1;
	int nb = 0;
	char *tmp = "";
	char *dec = malloc(sizeof(char) * 2);

	dec[1] = 0;
	for (int i = 0 ; i < my_strlen(str) ; i++, size--)
		if (str[i] == '1')
			nb += my_compute_power_rec(2, size);
	while ((float)nb / 10.0 > 0) {
		dec[0] = (nb % 10) + 48;
		tmp = my_strcat(tmp, dec);
		nb /= 10;
	}
	free(dec);
	tmp = my_revstr(tmp);
	return (tmp);
}
