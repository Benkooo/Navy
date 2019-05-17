/*
** EPITECH PROJECT, 2017
** flags
** File description:
** flag
*/

#include <stdarg.h>
#include "../../../include/my.h"

void print_int(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void print_long(va_list ap)
{
	my_put_nbr_long(va_arg(ap, long));
}

void print_char(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void print_string(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}
