/*
** EPITECH PROJECT, 2017
** advanced flags bis
** File description:
** flags
*/

#include <stdarg.h>
#include "../../../include/my.h"

void print_binary(va_list ap)
{
	my_put_nbr_base(va_arg(ap, unsigned int), "01");
}

void print_percent(va_list ap)
{
	my_putchar('%');
}

void print_pointer_hexa(va_list ap)
{
	my_putstr("0x");
	my_put_nbr_base_long(va_arg(ap, unsigned long), "0123456789abcdef");
}
