/*
** EPITECH PROJECT, 2017
** putstr
** File description:
** putstr
*/

#include <stdio.h>
#include <unistd.h>

static void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char const *str)
{
	if (str != NULL)
		for (int i = 0; str[i] != '\0'; i++)
			my_putchar(str[i]);
}
