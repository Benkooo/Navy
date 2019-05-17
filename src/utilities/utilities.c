/*
** EPITECH PROJECT, 2018
** get_usertwo_pid.c
** File description:
** function
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include "../../include/my.h"
#include "../../include/my_struct.h"

all_t global;

void get_pid(int signal, siginfo_t *info, void *context)
{
	if (signal == 12) {
		global.bis.pid = info->si_pid;
		my_printf("enemy connected\n\n");
	}
	context = context;
}

void do_nothing(int signal, siginfo_t *info, void *context)
{
	info = info;
	context = context;
	if (global.trig == 1) {
		if (signal == 10)
			global.pos = my_strcat(global.pos, "1");
		if (signal == 12)
			global.pos = my_strcat(global.pos, "0");
	}
	if (global.trig == 2) {
		if (signal == 10)
			global.check = 1;
		if (signal == 12)
			global.check = 2;
	}
}

void check_attack(all_t *all, char ***map)
{
	int x = all->attack[0] - 49;
	int y = all->attack[1] - 49;

	global.trig = 2;
	all->act.sa_flags = SA_SIGINFO;
	all->act.sa_sigaction = &do_nothing;
	sigemptyset(&all->act.sa_mask);
	sigaction(10, &all->act, NULL);
	sigaction(12, &all->act, NULL);
	all->attack_pos = convert_decimal_to_pos(all->attack_pos);
	while (global.check == 0);
	if (global.check == 1 && (*map)[y][x] == '.') {
		my_printf("%s: hit\n\n", all->attack_pos);
		(*map)[y][x] = 'x';
	}
	if (global.check == 2) {
		my_printf("%s: missed\n\n", all->attack_pos);
		if ((*map)[y][x] != 'x')
			(*map)[y][x] = 'o';
	}
}

void get_usertwo_pid(all_t *all)
{
	all->bis.pid = 0;
	all->act.sa_flags = SA_SIGINFO;
	all->act.sa_sigaction = &get_pid;
	sigemptyset(&all->act.sa_mask);
	sigaction(12, &all->act, NULL);
	my_printf("waiting for enemy connection...\n\n");
	while (1) {
		all->bis.pid = global.bis.pid;
		if (all->bis.pid != 0)
			break;
	}
}

void retrieve_navy_pos(all_t *all)
{
	global.pos = "";
	global.trig = 1;
	global.check = 0;
	all->act.sa_flags = SA_SIGINFO;
	all->act.sa_sigaction = &do_nothing;
	sigemptyset(&all->act.sa_mask);
	sigaction(10, &all->act, NULL);
	sigaction(12, &all->act, NULL);
	while (1) {
		all->pos = global.pos;
		usleep(6000);
		if (my_strlen(all->pos) > 3 && all->pos == global.pos) {
			break;
		}
		usleep(2000);
	}
	global.pos = "";
	all->pos = convert_binary_to_decimal(all->pos);
	all->pos = convert_decimal_to_pos(all->pos);
}
