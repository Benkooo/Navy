/*
** EPITECH PROJECT, 2017
** squareroot
** File description:
** find suqare root
*/

int my_compute_square_root(int nb)
{
	int i = 0;

	while ((i * i) < nb)
		i++;
	if (i * i != nb)
		return (0);
	return (i);
}
