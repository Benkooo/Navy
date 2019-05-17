/*
** EPITECH PROJECT, 2018
** player_one.c
** File description:
** function
*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

int make_player_one_move(all_t *all)
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
			kill(all->bis.pid, 10);
		if (str[i] == '0')
			kill(all->bis.pid, 12);
		usleep(5000);
	}
	return (0);
}

static int check_if_win(all_t *all)
{
	if (check_victory(all->map.first_map,
		all->map.second_hmap) == 1) {
		print_one_map(all);
		print_second_hidden_map(all);
		my_printf("Enemy won\n\n");
		return (1);
	}
	return (0);
}

static void print_player_one_maps(all_t *all)
{
	print_one_map(all);
	print_second_hidden_map(all);
}

int do_player_one(all_t *all)
{
	my_printf("my_pid: %d\n", getpid());
	get_usertwo_pid(all);
	while (1) {
		print_player_one_maps(all);
		make_player_one_move(all);
		check_attack(all, &all->map.second_hmap);
		if (check_victory(all->map.first_map,
			all->map.second_hmap) == 2) {
			print_one_map(all);
			print_second_hidden_map(all);
			my_printf("I won\n\n");
			return (0);
		}
		my_printf("waiting for enemy's attack...\n");
		retrieve_navy_pos(all);
		check_hit_or_miss(all, &all->map.first_map, all->bis.pid);
		if (check_if_win(all) == 1)
			return (1);
	}
	return (0);
}
