/*
** EPITECH PROJECT, 2018
** check ma
** File description:
** check map
*/

#include "my.h"
#include "my_struct.h"

static void check_map_verti_two(all_t *all, int *x, int a)
{
	if (all->map.trig_map == 2)
		switch (all->map.trig_find) {
		case 1:
			all->map.second_map[*x][a] = '2';
			break;
		case 2:
			all->map.second_map[*x][a] = '3';
			break;
		case 3:
			all->map.second_map[*x][a] = '4';
			break;
		case 4:
			all->map.second_map[*x][a] = '5';
			break;
		}
}

static void check_map_hori_two(all_t *all, int b, int *x)
{
	if (all->map.trig_map == 2)
		switch (all->map.trig_find) {
		case 1:
			all->map.second_map[b][*x] = '2';
			break;
		case 2:
			all->map.second_map[b][*x] = '3';
			break;
		case 3:
			all->map.second_map[b][*x] = '4';
			break;
		case 4:
			all->map.second_map[b][*x] = '5';
			break;
		}
}

void check_map_verti(all_t *all, int *x, int a)
{
	if (all->map.trig_map == 1) {
		switch (all->map.trig_find) {
		case 1:
			all->map.first_map[*x][a] = '2';
			break;
		case 2:
			all->map.first_map[*x][a] = '3';
			break;
		case 3:
			all->map.first_map[*x][a] = '4';
			break;
		case 4:
			all->map.first_map[*x][a] = '5';
			break;
		}
	}
	else if (all->map.trig_map == 2)
		check_map_verti_two(all, x, a);
}

void check_map_hori(all_t *all, int b, int *x)
{
	if (all->map.trig_map == 1) {
		switch (all->map.trig_find) {
		case 1:
			all->map.first_map[b][*x] = '2';
			break;
		case 2:
			all->map.first_map[b][*x] = '3';
			break;
		case 3:
			all->map.first_map[b][*x] = '4';
			break;
		case 4:
			all->map.first_map[b][*x] = '5';
			break;
		}
	}
	else if (all->map.trig_map == 2)
		check_map_hori_two(all, b, x);
}
