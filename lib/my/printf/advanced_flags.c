/*
** EPITECH PROJECT, 2017
** flags 2
** File description:
** flags
*/

#include <stdarg.h>
#include "../../../include/my.h"

void print_longlong(va_list ap)
{
	my_put_nbr_longlong(va_arg(ap, long long));
}

void print_unsigned_int(va_list ap)
{
	my_put_nbr_base(va_arg(ap, unsigned int), "0123456789");
}

void print_octal(va_list ap)
{
	my_put_nbr_base(va_arg(ap, unsigned int), "01234567");
}

void print_hexa(va_list ap)
{
	my_put_nbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void print_hexa_caps(va_list ap)
{
	my_put_nbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}
