/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:43:44 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 15:04:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		flag;

	flag = 0;
	i = 1;
	j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i][j] == ' ' || argv[i][j] == '\t')
		j++;
	while (argv[i][j] != ' ' && argv[i][j] != '\t' && argv[i][j] != '\0')
	{
		write(1, &argv[i][j], 1);
		j++;
		flag = 1;
	}
	if (flag == 0)
		write(1, "\n", 1);	
	return (0);
}
