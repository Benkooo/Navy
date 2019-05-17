/*
** EPITECH PROJECT, 2018
** check_two_move.c
** File description:
** function
*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

int check_position_sent(char *s)
{
	if (my_strlen(s) != 2) {
		my_printf("Wrong position\n");
		return (1);
	}
	if (s[0] < 'A' || s[0] > 'H') {
		my_printf("Wrong position\n");
		return (1);
	}
	if (s[1] < '1' || s[1] > '8') {
		my_printf("Wrong position\n");
		return (1);
	}
	return (0);
}

void check_cross_from_map(char **map, int i, int j, int *lose)
{
	if (map[i][j] == 'x')
		(*lose)--;
}

void check_cross_from_hidden(char **hidden, int i, int j, int *win)
{
	if (hidden[i][j] == 'x')
		(*win)--;
}

int check_victory(char **map, char **hidden)
{
	int max = 5 + 4 + 3 + 2;
	int lose = max;
	int win = max;

	for (int i = 0 ; map[i] != NULL ; i++) {
		for (int j = 0 ; map[i][j] != 0 ; j++) {
			check_cross_from_map(map, i, j, &lose);
			check_cross_from_hidden(hidden, i, j, &win);
		}
	}
	if (lose == 0)
		return (1);
	if (win == 0)
		return (2);
	return (0);
}
