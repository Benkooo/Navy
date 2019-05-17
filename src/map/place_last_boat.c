/*
** EPITECH PROJECT, 2018
** place_last_boat
** File description:
** place_last_boat
*/

#include "my.h"
#include "my_struct.h"

static void do_verti(all_t *all, int a, int b, int d)
{
	for (int j = 0 ; j < 8 ; j++)
		fill_verti(&j, all, a, b, d);
}

static void do_hori(all_t *all, int a, int b, int c)
{
	for (int j = 0 ; j < 8 ; j++)
		fill_hori(&j, all, a, b, c);
}

void place_last_boat(char *buff, all_t *all)
{
	char tab_x[8] = "ABCDEFGH";
	char tab_y[8] = "12345678";
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	all->map.trig_find = 4;
	for (; tab_x[a] != buff[26] ; a++);
	for (; tab_y[b] != buff[27] ; b++);
	for (; tab_x[c] != buff[29] ; c++);
	for (; tab_y[d] != buff[30] ; d++);
	if (a == c)
		do_verti(all, a, b, d);
	else if (b == d)
		do_hori(all, a, b, c);
}
