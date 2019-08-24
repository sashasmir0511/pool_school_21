/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:28:59 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 12:31:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_num(int nbr)
{
	int		buff;
	int		size;

	size = 1;
	buff = nbr;
	if (nbr == -2147483648)
	{
		size += 2;
		buff = 147483648;
	}
	else if (nbr < 0)
	{
		buff *= -1;
		size++;
	}
	while (buff / 10 >= 9)
	{
		size++;
		buff = buff / 10;
	}
	size++;
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*ans;
	int		i;

	i = count_num(nbr);
	ans = (char*)malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (0);
	ans[i] = '\0';
	i--;
	if (nbr == -2147483648)
	{
		ans[0] = '-';
		ans[1] = 2 + 48;
		nbr = 147483648;
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		ans[0] = '-';
	}
	while (nbr >= 9)
	{
		ans[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i--;
	}
	ans[i] = nbr + 48;
	return (ans);
}
