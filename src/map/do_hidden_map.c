/*
** EPITECH PROJECT, 2018
** do the map
** File description:
** create the map
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "my_struct.h"

void create_first_hidden_map(all_t *all)
{
	int i = 0;
	int x = 0;

	all->map.first_hmap = NULL;
	all->map.first_hmap = malloc(sizeof(char *) * (9));
	if (all->map.first_hmap == NULL)
		return;
	for (; i < 8 ; i++) {
		all->map.first_hmap[i] = malloc(9);
		if (all->map.first_hmap[i] == NULL)
			return;
		for (x = 0 ; x < 8 ; x++)
			all->map.first_hmap[i][x] = '.';
		all->map.first_hmap[i][x] = '\0';
	}
	all->map.first_hmap[i] = NULL;
}

void create_second_hidden_map(all_t *all)
{
	int i = 0;
	int x = 0;

	all->map.second_hmap = NULL;
	all->map.second_hmap = malloc(sizeof(char *) * (9));
	if (all->map.second_hmap == NULL)
		return;
	for (; i < 8 ; i++) {
		all->map.second_hmap[i] = malloc(9);
		if (all->map.second_hmap[i] == NULL)
			return;
		for (x = 0 ; x < 8 ; x++)
			all->map.second_hmap[i][x] = '.';
		all->map.second_hmap[i][x] = '\0';
	}
	all->map.second_hmap[i] = NULL;
}
