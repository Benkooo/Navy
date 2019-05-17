/*
** EPITECH PROJECT, 2017
** isneg
** File description:
** isgne
*/

#include <unistd.h>

static void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_isneg(int n)
{
	if (n >= 0)
		my_putchar('P');
	else if (n < 0)
		my_putchar('N');
	return (0);
}
