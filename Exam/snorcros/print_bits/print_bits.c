/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:10:05 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 16:40:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(unsigned char n)
{
	return(n - 60); 	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_bits(int octet)
{
	if (octet % 2 == 0)
	{
		ft_putchar(0 + '0');
		return ;
	}
	else if (octet % 2 == 1)
	{
		ft_putchar(1 + '0');
		return ;
	}
	else
		to_bits(octet / 2);
}

void	print_bits(unsigned char octet)
{
	write(1, "000000", 6);
	to_bits(ft_atoi(octet));
}
