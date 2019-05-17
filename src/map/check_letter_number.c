/*
** EPITECH PROJECT, 2018
** checkletter
** File description:
** checknumb
*/

#include "my.h"

int check_letter(char letter)
{
	if (letter == 'A' || letter == 'B' || letter == 'C' || letter == 'D' ||
	letter == 'E' || letter == 'F' || letter == 'G' || letter == 'H')
		return (0);
	return (1);
}

int check_number(char numb)
{
	if (numb == '1' || numb == '2' || numb == '3' || numb == '4' ||
	numb == '5' || numb == '6' || numb == '7' || numb == '8')
		return (0);
	return (1);
}
