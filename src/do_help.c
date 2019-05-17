/*
** EPITECH PROJECT, 2018
** do_help
** File description:
** usage
*/

#include "my.h"

void do_usage(void)
{
	my_printf("USAGE\n");
	my_printf("	./navy [first_player_pid] navy_positions\n");
	my_printf("DESCRIPTION\n");
	my_printf("	first_player_pid: only for the 2nd player. ");
	my_printf("pid of the first player.\n");
	my_printf("	navy_positions: file representing the positions ");
	my_printf("of the ships.\n");
}
