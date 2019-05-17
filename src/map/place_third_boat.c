/*
** EPITECH PROJECT, 2018
** place_third_boat
** File description:
** place_third_boat
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

void place_third_boat(char *buff, all_t *all)
{
	char tab_x[8] = "ABCDEFGH";
	char tab_y[8] = "12345678";
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	all->map.trig_find = 3;
	for (; tab_x[a] != buff[18] ; a++);
	for (; tab_y[b] != buff[19] ; b++);
	for (; tab_x[c] != buff[21] ; c++);
	for (; tab_y[d] != buff[22] ; d++);
	if (a == c)
		do_verti(all, a, b, d);
	else if (b == d)
		do_hori(all, a, b, c);
}
