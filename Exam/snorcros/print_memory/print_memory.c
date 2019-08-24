/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:39:22 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 15:45:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_memory(const void *addr, size_t size)
{
	int		i;

	i = 0;
	while (addr[i])
	{
		ft_putchar(sizeof(addr[i] + 48);
		i++;
	}
}
