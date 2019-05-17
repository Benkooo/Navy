/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** the va_list printf function
*/

#include <stdarg.h>
#include "../../../include/my.h"

static void (*print_tab[14])(va_list) =
{
	print_int,
	print_int,
	print_char,
	print_string,
	print_string,
	print_unsigned_int,
	print_hexa,
	print_hexa_caps,
	print_octal,
	print_binary,
	print_percent,
	print_pointer_hexa,
	print_long,
	print_longlong
};

static int get_flag_pos(char *str, int *i)
{
	int counter = 0;
	char *letters = "dicsSuxXob%p";

	for (counter = 0; letters[counter] != str[*i + 1]; counter++)
		if (counter == 11) {
			counter = 0;
			(*i) = (*i) + 1;
		}
	return (counter);
}

static void find_flag(char *str, int *i, va_list ap)
{
	if (str[(*i) + 1] == 'l' && str[(*i) + 2] == 'd') {
		(*print_tab[12])(ap);
		(*i) += 2;
	}
	else if (str[(*i) + 1] == 'l' &&
		 str[(*i) + 2] == 'l' &&
		 str[(*i) + 3] == 'd') {
		(*print_tab[13])(ap);
		(*i) += 3;
	}
	else {
		(*print_tab[get_flag_pos(str, i)])(ap);
		(*i) += 1;
	}
}

static void find_advanced_flags(char *str, int *i)
{
	if (str[(*i) + 1] == '#' && str[(*i) + 2] == 'o')
		my_putstr("0");
	else if (str[(*i) + 1] == '#' && str[(*i) + 2] == 'x')
		my_putstr("0x");
	else if (str[(*i) + 1] == '#' && str[(*i) + 2] == 'X')
		my_putstr("0X");
}

void my_printf(char *str, ...)
{
	va_list ap;
	int k = 0;
	int i = 0;

	va_start(ap, str);
	for (i = 0; str[i]; i++) {
		if (str[i] == '%') {
			find_advanced_flags(str, &i);
			find_flag(str, &i, ap);
		}
		else
			my_putchar(str[i]);
	}
	va_end(ap);
}
