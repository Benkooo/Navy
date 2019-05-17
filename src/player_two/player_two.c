/*
** EPITECH PROJECT, 2018
** player_two.c
** File description:
** function
*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

int do_connection(char **av)
{
	my_printf("my_pid:  %d\n", getpid());
	if (kill(my_getnbr(av[1]), 12) == 0)
		my_printf("successfully connected\n\n");
	else {
		my_printf("Error connection : Wrong PID\n");
		return (1);
	}
	return (0);
}

int make_player_two_move(char **av, all_t *all)
{
	char *str;

	while (1) {
		my_printf("attack: ");
		str = get_next_line(0);
		if (check_position_sent(str) == 0)
			break;
	}
	all->attack_pos = str;
	str = convert_pos_to_decimal(str);
	all->attack = str;
	str = convert_decimal_to_binary(str);
	for (int i = 0 ; str[i] ; i++) {
		if (str[i] == '1')
			kill(my_getnbr(av[1]), 10);
		if (str[i] == '0')
			kill(my_getnbr(av[1]), 12);
		usleep(1000);
	}
	return (0);
}

static int check_if_win(all_t *all)
{
	if (check_victory(all->map.second_map,
		all->map.first_hmap) == 2) {
		print_second_map(all);
		print_one_hidden_map(all);
		my_printf("I won\n\n");
		return (0);
	}
	return (1);
}

static void print_player_two_maps(all_t *all)
{
	print_second_map(all);
	print_one_hidden_map(all);
}

int do_player_two(char **av, all_t *all)
{
	if (do_connection(av) == 1)
		return (0);
	while (1) {
		print_player_two_maps(all);
		my_printf("waiting for enemy's attack...\n");
		retrieve_navy_pos(all);
		check_hit_or_miss(all, &all->map.second_map, my_getnbr(av[1]));
		if (check_victory(all->map.second_map,
			all->map.first_hmap) == 1) {
			print_second_map(all);
			print_one_hidden_map(all);
			my_printf("Enemy won\n\n");
			return (1);
		}
		make_player_two_move(av, all);
		check_attack(all, &all->map.first_hmap);
		if (check_if_win(all) == 0)
			return (0);
	}
	return (0);
}
