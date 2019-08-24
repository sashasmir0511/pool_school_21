/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:49:46 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 17:24:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_addcat(char *s1, char s2)
{
	int 	i;

	i = 0;
	while (s1[i] != '\0' || s1[i] != '\n')
		i++;
	s1[i] = s2;
	i++;
	s1[i] = '\n';
	i++;
	s1[i] = '\0';
}

int ft_cmp(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void find_inter(char *s1, char *s2)
{
	char	*ans;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ans = "\n";
	while (s1[j] != '\0')
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (s1[j] == s2[i] && ft_cmp(ans, s1[j]) == 0)
				ft_addcat(ans, *s1);
			i++;
		}
		j++;
	}
	ft_putstr(ans);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	find_inter(argv[1], argv[2]);
	return (0);
}







