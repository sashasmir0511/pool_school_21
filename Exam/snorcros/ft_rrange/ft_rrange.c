/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 17:38:44 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 17:45:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		*ans;
	int		i;

	i = 0;
	if (end < start)
	{
		i = end;
		end = start;
		start = end;
	}
		return (NULL);
	ans = (int *)malloc(sizeof(int) * (end - start + 2));
	if (ans == NULL)
		return (ans);
	while (start <= end)
	{
		i = 0;
		ans[i] = start;
		start++;
		i++;
	}
	return (ans);
}
