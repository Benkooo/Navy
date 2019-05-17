/*
** EPITECH PROJECT, 2017
** getlenint
** File description:
** get the len of an int
*/

int get_len_int(int size)
{
	int sizis = size;
	int biglen = 1;

	while (sizis >= 9) {
		sizis = sizis / 10;
		biglen++;
	}
	return (biglen);
}
