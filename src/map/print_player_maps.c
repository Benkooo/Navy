/*
** EPITECH PROJECT, 2018
** print_player_maps
** File description:
** print_player_maps
*/

#include "my.h"
#include "my_struct.h"

void print_one_map(all_t *all)
{
	int i = 1;

	my_printf("my positions:\n");
	my_printf(" |A B C D E F G H\n");
	my_printf("-+---------------\n");
	for (int j = 0 ; j < 8 ; j++) {
		my_printf("%d", i);
		my_printf("|");
		for (int x = 0 ; x < 8 ; x++) {
			my_printf("%c", all->map.first_map[j][x]);
			my_printf(" ");
		}
		my_printf("\n");
		i++;
	}
	my_printf("\n");
}

void print_one_hidden_map(all_t *all)
{
	int i = 1;

	my_printf("ennemy's positions:\n");
	my_printf(" |A B C D E F G H\n");
	my_printf("-+---------------\n");
	for (int j = 0 ; j < 8 ; j++) {
		my_printf("%d", i);
		my_printf("|");
		for (int x = 0 ; x < 8 ; x++) {
			my_printf("%c", all->map.first_hmap[j][x]);
			my_printf(" ");
		}
		my_printf("\n");
		i++;
	}
	my_printf("\n");
}

void print_second_map(all_t *all)
{
	int i = 1;

	my_printf("my positions:\n");
	my_printf(" |A B C D E F G H\n");
	my_printf("-+---------------\n");
	for (int j = 0 ; j < 8 ; j++) {
		my_printf("%d", i);
		my_printf("|");
		for (int x = 0 ; x < 8 ; x++) {
			my_printf("%c", all->map.second_map[j][x]);
			my_printf(" ");
		}
		my_printf("\n");
		i++;
	}
	my_printf("\n");
}

void print_second_hidden_map(all_t *all)
{
	int i = 1;

	my_printf("ennemy's positions:\n");
	my_printf(" |A B C D E F G H\n");
	my_printf("-+---------------\n");
	for (int j = 0 ; j < 8 ; j++) {
		my_printf("%d", i);
		my_printf("|");
		for (int x = 0 ; x < 8 ; x++) {
			my_printf("%c", all->map.second_hmap[j][x]);
			my_printf(" ");
		}
		my_printf("\n");
		i++;
	}
	my_printf("\n");
}
