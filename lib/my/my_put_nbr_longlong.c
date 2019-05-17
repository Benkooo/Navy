/*
** EPITECH PROJECT, 2017
** print longlong
** File description:
** print longlong
*/

#include <unistd.h>

static void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_put_nbr_longlong(long long nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb < 10)
		my_putchar(nb + '0');
	else {
		my_put_nbr_longlong(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	return (0);
}
