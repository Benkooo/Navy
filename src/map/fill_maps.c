/*
** EPITECH PROJECT, 2018
** fill_maps
** File description:
** fill_maps
*/

#include "my.h"
#include "my_struct.h"

void fill_verti(int *j, all_t *all, int a, int b, int d)
{
	if (*j == a)
		for (int x = b ; x <= d ; x++)
			check_map_verti(all, &x, a);
}

void fill_hori(int *j, all_t *all, int a, int b, int c)
{
	if (*j == b)
		for (int x = a ; x <= c ; x++)
			check_map_hori(all, b, &x);
}
