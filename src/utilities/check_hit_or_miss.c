/*
** EPITECH PROJECT, 2018
** check_hit_or_miss.c
** File description:
** function
*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

void check_hit_or_miss(all_t *all, char ***map, int pid)
{
	int x = 0;
	int y = 0;

	my_printf("%s: ", all->pos);
	all->pos = convert_pos_to_decimal(all->pos);
	x = all->pos[0] - 49;
	y = all->pos[1] - 49;
	if ((*map)[y][x] != '.' && (*map)[y][x] != 'x' && (*map)[y][x] != 'o') {
		kill(pid, 10);
		my_printf("hit\n\n");
		(*map)[y][x] = 'x';
	} else {
		kill(pid, 12);
		my_printf("missed\n\n");
		if ((*map)[y][x] && (*map)[y][x] != 'x')
			(*map)[y][x] = 'o';
	}
}
