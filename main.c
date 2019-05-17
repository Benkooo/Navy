/*
** EPITECH PROJECT, 2018
** main
** File description:
** lemain
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include "include/my.h"
#include "include/my_struct.h"

int do_navy(int ac, char **av)
{
	all_t all;
	int nb = 0;

	all.map.trig_map = 0;
	all.map.trig_find = 0;
	if (ac == 2) {
		create_first_map(&all);
		create_second_hidden_map(&all);
		if (get_first_pos(av[1], &all) == 84)
			return (nb = 84);
		nb = do_player_one(&all);
	}
	if (ac == 3) {
		create_second_map(&all);
		create_first_hidden_map(&all);
		if (get_second_pos(av[2], &all) == 84)
			return (nb = 84);
		nb = do_player_two(av, &all);
	}
	return (nb);
}

int main(int ac, char **av)
{
	int nb = 0;

	if (ac < 2) {
		write(2, "USAGE: ./navy [first_player_pid] ", 33);
		write(2, "navy_positions\n", 15);
		return (84);
	}
	if (my_strcmp(av[1], "-h") == 0) {
		do_usage();
		return (0);
	}
	nb = do_navy(ac, av);
	return (nb);
}
