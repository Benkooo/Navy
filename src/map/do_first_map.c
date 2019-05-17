/*
** EPITECH PROJECT, 2018
** first
** File description:
** first
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "my_struct.h"

void create_first_map(all_t *all)
{
	int i = 0;
	int x = 0;

	all->map.first_map = NULL;
	all->map.first_map = malloc(sizeof(char *) * (9));
	if (all->map.first_map == NULL)
		return;
	for (; i < 8 ; i++) {
		all->map.first_map[i] = malloc(9);
		if (all->map.first_map[i] == NULL)
			return;
		for (x = 0 ; x < 8 ; x++)
			all->map.first_map[i][x] = '.';
		all->map.first_map[i][x] = '\0';
	}
	all->map.first_map[i] = NULL;
}
