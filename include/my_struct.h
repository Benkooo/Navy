/*
** EPITECH PROJECT, 2018
** my_struct.h
** File description:
** header
*/

#ifndef MY_STRUCT_H_
# define MY_STRUCT_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

typedef struct pid_bis
{
	int pid;
}bis_t;

typedef struct pos
{
	char *first_pos;
	char *second_pos;
} pos_t;

typedef struct map
{
	char **first_map;
	char **first_hmap;
	char **second_map;
	char **second_hmap;
	int trig_map;
	int trig_find;
}map_t;

typedef struct do_player_two
{
	struct sigaction act;
	int pid_one;
}p_two_t;

typedef struct all
{
	map_t map;
	bis_t bis;
	pos_t *position;
	struct sigaction act;
	char *pos;
	int trig;
	int check;
	char *attack;
	char *attack_pos;
}all_t;

/* __________NAVY__________ */

/* map */
void create_map(all_t *all);
void add_dot_space_to_map(all_t *all, int i);
int do_navy(int ac, char **av);
void add_char_to_map(all_t *all);

char *get_next_line(int fd);

char *get_pid_in_binary(unsigned int nb, char const *base);

void init_global(void);

/* conversion functions */
char *convert_pos_to_decimal(char *str);
char *convert_decimal_to_pos(char *str);
char *convert_decimal_to_binary(char *str);
char *convert_binary_to_decimal(char *str);

/* player one */
int do_player_one(all_t *all);
void get_usertwo_pid(all_t *all);
void get_pid(int signal, siginfo_t *info, void *context);
void retrieve_navy_pos(all_t *all);
void do_nothing(int signal, siginfo_t *info, void *context);
int make_player_one_move(all_t *all);

/* player_2 */
int do_player_two(char **av, all_t *all);
int do_connection(char **av);
int check_position_sent(char *s);

#endif /* !MY_STRUCT_H_ */
