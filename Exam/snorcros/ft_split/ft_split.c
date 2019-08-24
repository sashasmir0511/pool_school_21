/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 13:39:19 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 15:28:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int		count;

	count = 0;
	while (*str != '\0')
	{
		while (*str == '\n' || *str == '\t' || *str == ' ')
			str++;
		if (*str == '\0')
			break ;
		while (*str != '\0' && !(*str == '\n' || *str == '\t' || *str == ' '))
			str++;
		count++;
	}
	return (count);
}

int		*count_symbols(char *str, int *arr)
{
	int		count;
	int		i;

	i = 0;
	while (*str != '\0')
	{
		count = 0;
		while (*str == '\n' || *str == '\t' || *str == ' ')
			str++;
		if (*str == '\0')
			break ;
		while (*str != '\0' && !(*str == '\n' || *str == '\t' || *str == ' '))
		{
			str++;
			count++;
		}
		arr[i] = count;
		i++;
	}
	return (arr);
}

char	**fill_str(char *str, char **ans)
{
	int 	i;
	int		j;

	i = 0;
	while (*str != '\0')
	{
		j = 0;
		while (*str == '\n' || *str == '\t' || *str == ' ')
			str++;
		if (*str == '\0')
			break ;
		while (*str != '\0' && !(*str == '\n' || *str == '\t' || *str == ' '))
		{
			ans[i][j] = *str;
			j++;
			str++;
		}
		ans[i][j] = '\0';
		i++;
	}
	return (ans);
}

char    **ft_split(char *str)
{
	int		*len_strs;
	int		count_w;
	int		i;
	char	**ans;

	if (*str == '\0')
		return (0);
	i = 0;
	count_w = count_words(str);
	len_strs = (int*)malloc(sizeof(int) * count_w);
	len_strs = count_symbols(str, len_strs);
	ans = (char**)malloc(sizeof(char*) * (count_w + 1));
	if (ans == NULL)
		return (0);
	while (i <= count_w)
	{
		ans[i] = (char*)malloc(sizeof(char) * (len_strs[i] + 1));
		if (ans[i] == NULL)
			return (0);
		i++;
	}
	ans = fill_str(str, ans);
	return (ans);
}
