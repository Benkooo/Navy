/*
** EPITECH PROJECT, 2018
** get_first_pos
** File description:
** get_first_postions
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"
#include "my_struct.h"

static int basic_check(char *buff)
{
	if (buff[0] != '2' || buff[8] != '3' || buff[16] != '4' ||
	buff[24] != '5' || buff[1] != ':' || buff[9] != ':' ||
	buff[17] != ':' || buff[25] != ':' || buff[4] != ':' ||
	buff[12] != ':' || buff[20] != ':' || buff[28] != ':')
		return (84);
	if (buff[7] != '\n' || buff[15] != '\n' || buff[23] != '\n' ||
	buff[31] != '\n' || buff[32] != '\0')
		return (84);
	if (check_letter(buff[2]) == 1 || check_letter(buff[5]) == 1 ||
	check_letter(buff[10]) == 1 || check_letter(buff[13]) == 1 ||
	check_letter(buff[18]) == 1 || check_letter(buff[21]) == 1 ||
	check_letter(buff[26]) == 1 || check_letter(buff[29]) == 1)
		return (84);
	if (check_number(buff[3]) == 1 || check_number(buff[6]) == 1 ||
	check_number(buff[11]) == 1 || check_number(buff[14]) == 1 ||
	check_number(buff[19]) == 1 || check_number(buff[22]) == 1 ||
	check_number(buff[27]) == 1 || check_number(buff[30]) == 1)
		return (84);
	return (0);
}

static int advanced_check(char *buff)
{
	if (check_pos(buff[2], buff[3], buff[5], buff[6]) == 1)
		return (84);
	if (check_second_pos(buff[10], buff[11], buff[13], buff[14]) == 1)
		return (84);
	if (check_third_pos(buff[18], buff[19], buff[21], buff[22]) == 1)
		return (84);
	if (check_last_pos(buff[26], buff[27], buff[29], buff[30]) == 1)
		return (84);
	return (0);
}

int get_first_pos(char *filepath, all_t *all)
{
	int fd = open(filepath, O_RDONLY);
	char buff[600] = { 0 };

	if (fd == -1) {
		write(2, "Please enter a valid map.\n", 26);
		return (84);
	}
	if (read(fd, buff, 600) != 32)
		return (84);
	if (basic_check(buff) == 84)
		return (84);
	if (advanced_check(buff) == 84)
		return (84);
	all->map.trig_map = 1;
	place_first_boat(buff, all);
	place_second_boat(buff, all);
	place_third_boat(buff, all);
	place_last_boat(buff, all);
	if (check_same_pos_first(all) != 50)
		return (84);
	return (0);
}
