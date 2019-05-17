/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** string compare
*/

static int my_strlen(char const *str)
{
	int i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int j = my_strlen(s1);

	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (my_strlen(s1) < my_strlen(s2))
		return (-(s2[j]));
	return (0);
}
