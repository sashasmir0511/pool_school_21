/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:47:09 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 16:29:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_num(int value, int base)
{
	if (value / base == <= base)
		return (1);
	else 
		return (count_num(value / base, base) + 1);
}

char *ft_pushback(char *nbr)
{
	int		i;

	i = 0;
	while (nbr[i] != '\0')
		i++;
	i--;
	while (nbr[i] != '\0' && nbr[i] != 0 
}

char *to_base(char *nbr, int value, int base)
{

	if (value / base < base)
		return (value % base);
	else

}
