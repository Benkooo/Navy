/*
** EPITECH PROJECT, 2017
** myisnum
** File description:
** is num ?
*/

int my_isnum(char c)
{
	while (c != '\0') {
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
	return (0);
}
