/*
** EPITECH PROJECT, 2017
** putnbrbase
** File description:
** print the number in any base
*/

#include "../../include/my.h"

int my_put_nbr_base(unsigned int nb, char *base)
{
	int base_len = my_strlen(base);
	int mod = nb % base_len;
	int i = (nb - mod) / base_len;

	if (i != 0)
		my_put_nbr_base(i, base);
	my_putchar(base[mod]);
	return (0);
}
