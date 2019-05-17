/*
** EPITECH PROJECT, 2018
** check_same_pos
** File description:
** checj
*/

#include "my.h"
#include "my_struct.h"

static void count_points(all_t *all, int *i, int *counter)
{
	for (int x = 0 ; all->map.second_map[*i][x] ; x++)
		if (all->map.second_map[*i][x] == '.')
			(*counter)++;
}

int check_same_pos_second(all_t *all)
{
	int counter = 0;

	for (int i = 0 ; all->map.second_map[i] ; i++)
		count_points(all, &i, &counter);
	return (counter);
}
