/*
** EPITECH PROJECT, 2017
** getnbr
** File description:
** getnbr in string
*/

#include <stdio.h>

int my_getnbr(char *str)
{
	int i;
	int result = 0;
	int nega = 0;

	if (str == NULL)
		return (84);
	for (i = 0; str[i] == '-' || str[i] == '+'; i++)
		if (str[i] == '-')
			nega++;
	for (int x = i; str[x] >= '0' && str[x] <= '9'; x++)
		result = result * 10 + str[x] - '0';
	if (nega % 2 != 0)
		result = -result;
	if (result <= -2147483648 || result >= 2147483647)
		return (0);
	return (result);
}
