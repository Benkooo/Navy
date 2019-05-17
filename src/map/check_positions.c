/*
** EPITECH PROJECT, 2018
** check_pos
** File description:
** check positions
*/

#include "my.h"

int check_pos(char first, char num_first, char last, char num_last)
{
	if (first == last) {
		if ((num_last == num_first + 1) || (num_last == num_first - 1))
			return (0);
	}
	else if (num_first == num_last) {
		if ((last == first + 1) || (last == first - 1))
			return (0);
	}
	return (1);
}

int check_second_pos(char first, char num_first, char last, char num_last)
{
	if (first == last) {
		if ((num_last == num_first + 2) || (num_last == num_first - 2))
			return (0);
	}
	else if (num_first == num_last) {
		if ((last == first + 2) || (last == first - 2))
			return (0);
	}
	return (1);
}

int check_third_pos(char first, char num_first, char last, char num_last)
{
	if (first == last) {
		if ((num_last == num_first + 3) || (num_last == num_first - 3))
			return (0);
	}
	else if (num_first == num_last) {
		if ((last == first + 3) || (last == first - 3))
			return (0);
	}
	return (1);
}

int check_last_pos(char first, char num_first, char last, char num_last)
{
	if (first == last) {
		if ((num_last == num_first + 4) || (num_last == num_first - 3))
			return (0);
	}
	else if (num_first == num_last) {
		if ((last == first + 4) || (last == first - 4))
			return (0);
	}
	return (1);
}
