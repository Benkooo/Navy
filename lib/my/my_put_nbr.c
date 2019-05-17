/*
** EPITECH PROJECT, 2017
** put nbr
** File description:
** print int
*/

#include <unistd.h>

static void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb < 10)
		my_putchar(nb + '0');
	else {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	return (0);
}
