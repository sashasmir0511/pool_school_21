/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 12:34:52 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 13:35:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list 		*buff;
	int			size;

	buff = begin_list;
	size = 0;
	while (buff)
	{
		buff = buff->next;
		size++;
	}
	return (size);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*preva;
	t_list	*a;
	t_list	*b;
	int		flag;
	int		size;

	if (lst == 0 || lst->next == 0)
		return (lst);
	size = ft_list_size(lst);
	flag = 0;
	while (flag != size)
	{
		preva = lst;
		a = lst;
		b = lst->next;
		flag = 0;
		if ((*cmp)(a->data, b->data) == 0)
		{
			a->next = b->next;
			b->next = a;
		}
		else
		{
			flag++;
			a = a->next;
			b = b->next;
		}
		while (b)
		{
			if ((*cmp)(a->data, b->data) == 0)
			{
				preva->next = b;
				a->next = b->next;
				b->next = a;
			}
			else
			{
				flag++;
				preva = preva->next;
				a = a->next;
				b = b->next;
			}
		}
	}
	return (lst);
}
