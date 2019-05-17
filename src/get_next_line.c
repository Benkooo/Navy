/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** function
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int check_read(int fd, char **buffer, char **str)
{
	int check = 0;

	check = read(fd, *buffer, 1);
	if (check == -1) {
		free(*buffer);
		free(*str);
		return (1);
	}
	if (check == 0) {
		if (my_strlen(*str) != 0) {
			*buffer[0] = '\n';
			return (2);
		} else {
			free(*buffer);
			free(*str);
			return (1);
		}
	}
	return (0);
}

int check_buffer_is_null(char **buffer)
{
	if (buffer == NULL) {
		free(*buffer);
		return (1);
	}
	return (0);
}

int check_str_len_buffer_end(char **buffer, char **str)
{
	if (*str[0] == 0 && *buffer[0] != '\n') {
		free(*buffer);
		free(*str);
		return (1);
	}
	return (0);
}

int do_gnl_loop(char **str, char **buffer, int nb, int fd)
{
	while (1) {
		nb = check_read(fd, buffer, str);
		if (nb == 1)
			return (1);
		if (nb == 2)
			break;
		(*buffer)[1] = 0;
		if (check_buffer_is_null(buffer) == 1)
			return (1);
		if (*buffer != NULL && *buffer[0] == '\n')
			break;
		*str = my_strcat(*str, *buffer);
	}
	return (0);
}

char *get_next_line(int fd)
{
	char *str = malloc(sizeof(char) * 1);
	char *buffer = malloc(sizeof(char) * 2);
	int nb = 0;

	for (int i = 0 ; i < 1 ; i++)
		str[i] = 0;
	if (do_gnl_loop(&str, &buffer, nb, fd) == 1)
		return (NULL);
	if (check_str_len_buffer_end(&buffer, &str) == 1)
		return (NULL);
	if (my_strlen(str) > 0)
		str[my_strlen(str)] = 0;
	free(buffer);
	return (str);
}
