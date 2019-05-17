/*
** EPITECH PROJECT, 2018
** second_map
** File description:
** second
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "my_struct.h"

void create_second_map(all_t *all)
{
	int i = 0;
	int x = 0;

	all->map.second_map = NULL;
	all->map.second_map = malloc(sizeof(char *) * (9));
	if (all->map.second_map == NULL)
		return;
	for (; i < 8 ; i++) {
		all->map.second_map[i] = malloc(9);
		if (all->map.second_map[i] == NULL)
			return;
		for (x = 0 ; x < 8 ; x++)
			all->map.second_map[i][x] = '.';
		all->map.second_map[i][x] = '\0';
	}
	all->map.second_map[i] = NULL;
}
