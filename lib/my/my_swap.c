/*
** EPITECH PROJECT, 2017
** swapiswapa
** File description:
** swap number
*/

void my_swap(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
