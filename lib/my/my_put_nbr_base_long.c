/*
** EPITECH PROJECT, 2017
** baselong
** File description:
** print nbr long in any base
*/

#include "../../include/my.h"

long my_put_nbr_base_long(unsigned long nb, char *base)
{
	int base_len = my_strlen(base);
	long mod = nb % base_len;
	long i = (nb - mod) / base_len;

	if (i != 0)
		my_put_nbr_base_long(i, base);
	my_putchar(base[mod]);
	return (0);
}
